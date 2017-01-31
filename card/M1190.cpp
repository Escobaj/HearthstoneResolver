//
// Created by Jo on 19/12/2016.
//

#include "M1190.h"

M1190::M1190(const EventHandler &e) : Minion(e) {
    this->set_id(1190);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Écureuil");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M1190::init() {
}