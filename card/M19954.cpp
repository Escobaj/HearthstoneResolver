//
// Created by Jo on 19/12/2016.
//

#include "M19954.h"

M19954::M19954(const EventHandler &e) : Minion(e) {
    this->set_id(19954);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Voleur JcJ");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(6);
}

void M19954::init() {
}