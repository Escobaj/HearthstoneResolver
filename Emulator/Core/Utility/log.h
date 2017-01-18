//
// Created by escoba_j on 17/01/2017.
//

#ifndef HEARTHSTONERESOLVER_LOG_H
#define HEARTHSTONERESOLVER_LOG_H


#include <string>
#include <fstream>

class log {
public:
    log();

    enum type{
        FILE,
        PROMPT,
        BOTH
    };

    static log m_instance;
    void openFile(std::string &name);
    type get_logType() const;
    void set_logType(type _logType);
    void write(std::basic_string<char, std::char_traits<char>, std::allocator<char>> msg);

    static log &get_instance();

private:
    std::ofstream *_file;
    type _logType;
};


#endif //HEARTHSTONERESOLVER_LOG_H
