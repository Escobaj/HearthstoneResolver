//
// Created by Jo on 19/12/2016.
//

#include "M2039.h"

M2039::M2039(const EventHandler &e) : Minion(e) {
    this->set_id(2039);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Haut-trotteur égaré");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M2039::init() {
}