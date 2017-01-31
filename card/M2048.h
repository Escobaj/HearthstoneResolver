#ifndef HEARTHSTONERESOLVER_M2048_H
#define HEARTHSTONERESOLVER_M2048_H


#include "../Core/Entities/Minion.h"

class M2048 : public Minion {
public:
    M2048(const EventHandler &e);

    void init();
};


#endif //HEARTHSTONERESOLVER_M2048_H
