//
// Created by Jo on 19/12/2016.
//

#include "M39313.h"

M39313::M39313(const EventHandler &e) : Minion(e) {
    this->set_id(39313);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Illusionniste pourpre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M39313::init() {
}