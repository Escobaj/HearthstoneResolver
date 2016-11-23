//
// Created by escoba_j on 22/11/2016.
//

#include "AMinion.h"

AMinion::AMinion(unsigned int _cost, Class _class, Target _target, const String &_name, unsigned int _health) : ACard(
        _cost, _class, _target, _name), Playable(_health) {}
