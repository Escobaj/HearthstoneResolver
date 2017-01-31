//
// Created by Jo on 19/12/2016.
//

#include "M2442.h"

M2442::M2442(const EventHandler &e) : Minion(e) {
    this->set_id(2442);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Moira Barbe-de-Bronze");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(1);
}

void M2442::init() {
}