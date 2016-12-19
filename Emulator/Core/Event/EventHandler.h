//
// Created by escoba_j on 29/11/2016.
//

#ifndef HEARTHSTONERESOLVER_EVENTHANDLER_H
#define HEARTHSTONERESOLVER_EVENTHANDLER_H

#include <functional>
#include <vector>

class EventHandler {
public:

class GameManager{};

private:
    std::vector<std::function<int(void)>> _event;
    GameManager _game;
};

#endif //HEARTHSTONERESOLVER_EVENTHANDLER_H
