//
// Created by Jo on 19/12/2016.
//

#include "M1634.h"

M1634::M1634(const EventHandler &e) : Minion(e) {
    this->set_id(1634);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Jeune prêtresse");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M1634::init() {
}