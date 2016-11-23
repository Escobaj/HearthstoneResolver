//
// Created by escoba_j on 22/11/2016.
//

#ifndef HEARTHSTONERESOLVER_ASPELL_H
#define HEARTHSTONERESOLVER_ASPELL_H

#include "ACard.h"

class ASpell : public ACard{
public:
    ASpell(unsigned int _cost, Class _class, Target _target, const String &_name);

};


#endif //HEARTHSTONERESOLVER_ASPELL_H
