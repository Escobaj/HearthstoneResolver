#ifndef HEARTHSTONERESOLVER_M100_H
#define HEARTHSTONERESOLVER_M100_H


#include "../Core/Entities/Minion.h"

class M100 : public Minion {
public:
    M100(const EventHandler &e);

    void init();
};


#endif //HEARTHSTONERESOLVER_M100_H
