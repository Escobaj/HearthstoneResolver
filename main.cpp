#include <string>
#include <iostream>
#include "Emulator/Core/Game/Api.h"

int main() {
    Api api;
    std::string tmp;

    api.startGame();
    while (!api.isEnd()) {
        getline(std::cin, tmp);
        if (!api.interpret(tmp)){
            std::cout << "Invalid command" << std::endl;
        }
    }
    return 0;
}