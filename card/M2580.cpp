//
// Created by Jo on 19/12/2016.
//

#include "M2580.h"

M2580::M2580(const EventHandler &e) : Minion(e) {
    this->set_id(2580);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Jongleur de flammes");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M2580::init() {
}