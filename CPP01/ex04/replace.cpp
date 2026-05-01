#include "replace.hpp"

int replace(std::string filename, std::string s1, std::string s2)
{

    if (filename.empty())
    {
        std::cerr << "Error: filename cannot be empty." << std::endl;
        return 1;
    }
    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return 1;
    }

    std::ifstream infile(filename.c_str());
    if (!infile.is_open())
    {
        std::cerr << "Failed to open file\n";
        return 1;
    }
    std::string strbuff;
    std::string filebuff;

    while (std::getline(infile, strbuff)){
        filebuff += strbuff;
        if (!infile.eof())
            filebuff += "\n";
    }
    if (!infile.eof() && infile.fail())
    {
        std::cerr << "Error reading the file\n";
    }
    size_t pos = 0;
    size_t index = filebuff.find(s1, pos);
    while (index != std::string::npos)
    {
        filebuff.erase(index, s1.length());
        filebuff.insert(index, s2);
        pos = index + s2.length();
        index = filebuff.find(s1, pos);
    }
    std::string fileout(filename+".replace");
    std::ofstream of(fileout.c_str());
    if (!of.is_open())
    {
        std::cerr << "Failed to open file\n";
        return 1;
    }
    of << filebuff;
    return 0;
}