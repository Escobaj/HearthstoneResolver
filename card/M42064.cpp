//
// Created by Jo on 19/12/2016.
//

#include "M42064.h"

M42064::M42064(const EventHandler &e) : Minion(e) {
    this->set_id(42064);
    this->set_attackMax(8);
    this->set_defaultCost(8);
    this->set_name("Démon de la Kabale");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DEMON);
    this->set_attackMax(8);
    this->set_maxHealth(8);
}

void M42064::init() {
}