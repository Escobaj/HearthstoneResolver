//
// Created by escoba_j on 22/11/2016.
//

#ifndef HEARTHSTONERESOLVER_AMINION_H
#define HEARTHSTONERESOLVER_AMINION_H

#include "ACard.h"
#include "Playable.h"

class AMinion : public ACard, protected Playable{
public:
    AMinion(unsigned int _cost, Class _class, Target _target, const String &_name, unsigned int _health);
protected:
};


#endif //HEARTHSTONERESOLVER_AMINION_H
