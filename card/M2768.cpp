//
// Created by Jo on 19/12/2016.
//

#include "M2768.h"

M2768::M2768(const EventHandler &e) : Minion(e) {
    this->set_id(2768);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Marchand douteux");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M2768::init() {
}