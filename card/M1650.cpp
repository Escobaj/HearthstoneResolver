//
// Created by Jo on 19/12/2016.
//

#include "M1650.h"

M1650::M1650(const EventHandler &e) : Minion(e) {
    this->set_id(1650);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Clerc de Comté-du-Nord");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(3);
}

void M1650::init() {
}