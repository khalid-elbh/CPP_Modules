#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other):_database(other._database){}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other){
    if (this != &other)
        this->_database = other._database;
    return *this;
}

BitcoinExchange::~BitcoinExchange(){}


void BitcoinExchange::loadDataBase(const std::string &dbPath){
    std::ifstream f(dbPath.c_str());
    if (!f.is_open())
        throw std::runtime_error("Error: could not open file.");
    std::string line;
    std::getline(f, line);
    while (std::getline(f, line)){
        if (line.empty())
            continue;
        std::stringstream s(line);
        std::string date;
        float rate;
        if (std::getline(s, date, ',') && (s >> rate))
            _database[date] = rate;
    }
    f.close();
}


void BitcoinExchange::processInputFile(const std::string &inputPath)const {
    std::ifstream f(inputPath.c_str());
    if (!f.is_open())
        throw std::runtime_error("Error: could not open file.");
    std::string line;
    std::getline(f, line);
    
    while(std::getline(f, line)){
        if (line.empty())
            continue;
        
    }
}
