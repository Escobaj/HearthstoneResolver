//
// Created by escoba_j on 22/11/2016.
//

#ifndef HEARTHSTONERESOLVER_ACARD_H
#define HEARTHSTONERESOLVER_ACARD_H

#include "Target.h"
#include "Class.h"

class ACard {
private:
    unsigned int _cost;
    Class _class;
    Target _target;
    String const &_name;
public:
    ACard(unsigned int _cost, Class _class, Target _target, const String &_name);
};

#endif //HEARTHSTONERESOLVER_ACARD_H
