//
// Created by Jo on 19/12/2016.
//

#include "M2687.h"

M2687::M2687(const EventHandler &e) : Minion(e) {
    this->set_id(2687);
    this->set_attackMax(7);
    this->set_defaultCost(6);
    this->set_name("Vaelastrasz");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(7);
    this->set_maxHealth(7);
}

void M2687::init() {
}