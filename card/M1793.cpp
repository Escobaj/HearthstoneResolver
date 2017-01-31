//
// Created by Jo on 19/12/2016.
//

#include "M1793.h"

M1793::M1793(const EventHandler &e) : Minion(e) {
    this->set_id(1793);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Crache-vase");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M1793::init() {
}