//
// Created by Jo on 19/12/2016.
//

#include "M40380.h"

M40380::M40380(const EventHandler &e) : Minion(e) {
    this->set_id(40380);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Furtif insoumis");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(6);
}

void M40380::init() {
}