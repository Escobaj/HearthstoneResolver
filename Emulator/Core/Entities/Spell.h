//
// Created by escoba_j on 29/11/2016.
//

#ifndef HEARTHSTONERESOLVER_ASPELL_H
#define HEARTHSTONERESOLVER_ASPELL_H

#include "ACard.h"

class Spell : public ACard{

public:
    State play(unsigned int order);

};


#endif //HEARTHSTONERESOLVER_ASPELL_H
