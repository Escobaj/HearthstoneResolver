#ifndef HEARTHSTONERESOLVER_M102_H
#define HEARTHSTONERESOLVER_M102_H


#include "../Core/Entities/Minion.h"

class M102 : public Minion {
public:
    M102(const EventHandler &e);

    void init();
};


#endif //HEARTHSTONERESOLVER_M102_H
