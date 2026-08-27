#ifndef BITCOINEXCHANGE
#define BITCOINEXCHANGE


#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <sstream>

class BitcoinExchange{
    private:
        std::map<std::string, float> _database;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange &operator=(const BitcoinExchange &other);
        ~BitcoinExchange();
        
        void loadDataBase(const std::string &dbPath);
        void processInputFile(const std::string &inputPath) const;
};

#endif
