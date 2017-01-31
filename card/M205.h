#ifndef HEARTHSTONERESOLVER_M205_H
#define HEARTHSTONERESOLVER_M205_H


#include "../Core/Entities/Minion.h"

class M205 : public Minion {
public:
    M205(const EventHandler &e);

    void init();
};


#endif //HEARTHSTONERESOLVER_M205_H
