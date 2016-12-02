//
// Created by escoba_j on 29/11/2016.
//

#include "Spell.h"

State Spell::play(unsigned int order) {
    return State::FORBIDDEN;
}

Spell::Spell(const EventHandler &e) : ACard(e) {}
