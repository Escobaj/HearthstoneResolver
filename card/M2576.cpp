//
// Created by Jo on 19/12/2016.
//

#include "M2576.h"

M2576::M2576(const EventHandler &e) : Minion(e) {
    this->set_id(2576);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Saboteur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M2576::init() {
}