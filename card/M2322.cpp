//
// Created by Jo on 19/12/2016.
//

#include "M2322.h"

M2322::M2322(const EventHandler &e) : Minion(e) {
    this->set_id(2322);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Moira Barbe-de-Bronze");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(3);
}

void M2322::init() {
}