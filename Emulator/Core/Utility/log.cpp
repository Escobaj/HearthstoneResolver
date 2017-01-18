//
// Created by escoba_j on 17/01/2017.
//

#include <iostream>
#include "log.h"

log log::m_instance = log();

void log::openFile(std::string &name) {
    std::ofstream *tmp = new std::ofstream(name);
    if (tmp->is_open()){
        _file->close();
        _file = tmp;
    }
}

log::type log::get_logType() const {
    return _logType;
}

void log::set_logType(log::type _logType) {
    log::_logType = _logType;
}

void log::write(std::basic_string<char, std::char_traits<char>, std::allocator<char>> msg) {
    if (_logType == log::FILE || _logType == log::BOTH){
        if (_file != NULL && _file->is_open()){
            *_file << msg + "\n";
        }
    }
    if (_logType == log::PROMPT || _logType == log::BOTH){
        std::cout << msg << std::endl;
    }
}

log::log() {
    _logType = log::PROMPT;
    _file = NULL;
}

log &log::get_instance() {
    return m_instance;
}
