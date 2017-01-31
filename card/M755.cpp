//
// Created by Jo on 19/12/2016.
//

#include "M755.h"

M755::M755(const EventHandler &e) : Minion(e) {
    this->set_id(755);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Chevalier de sang");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M755::init() {
}