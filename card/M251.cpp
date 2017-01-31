//
// Created by Jo on 19/12/2016.
//

#include "M251.h"

M251::M251(const EventHandler &e) : Minion(e) {
    this->set_id(251);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Amasseur de butin");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M251::init() {
}