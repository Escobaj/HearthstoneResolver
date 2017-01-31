#ifndef HEARTHSTONERESOLVER_M600_H
#define HEARTHSTONERESOLVER_M600_H


#include "../Core/Entities/Minion.h"

class M600 : public Minion {
public:
    M600(const EventHandler &e);

    void init();
};


#endif //HEARTHSTONERESOLVER_M600_H
