//
// Created by Jo on 19/12/2016.
//

#include "M1063.h"

M1063::M1063(const EventHandler &e) : Minion(e) {
    this->set_id(1063);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Chef de guerre murloc");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M1063::init() {
}