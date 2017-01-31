//
// Created by Jo on 19/12/2016.
//

#include "M67.h"

M67::M67(const EventHandler &e) : Minion(e) {
    this->set_id(67);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Patriarche dos-argenté");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(4);
}

void M67::init() {
}