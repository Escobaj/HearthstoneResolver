//
// Created by Jo on 19/12/2016.
//

#include "M41118.h"

M41118::M41118(const EventHandler &e) : Minion(e) {
    this->set_id(41118);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Sergent Sally");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M41118::init() {
}