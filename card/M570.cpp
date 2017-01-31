//
// Created by Jo on 19/12/2016.
//

#include "M570.h"

M570::M570(const EventHandler &e) : Minion(e) {
    this->set_id(570);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Suprétincelle");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M570::init() {
}