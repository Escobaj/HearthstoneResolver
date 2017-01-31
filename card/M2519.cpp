//
// Created by Jo on 19/12/2016.
//

#include "M2519.h"

M2519::M2519(const EventHandler &e) : Minion(e) {
    this->set_id(2519);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Eydis Plaie-sombre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M2519::init() {
}