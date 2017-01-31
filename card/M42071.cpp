//
// Created by Jo on 19/12/2016.
//

#include "M42071.h"

M42071::M42071(const EventHandler &e) : Minion(e) {
    this->set_id(42071);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Démon de la Kabale");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DEMON);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M42071::init() {
}