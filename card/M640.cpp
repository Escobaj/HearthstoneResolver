//
// Created by Jo on 19/12/2016.
//

#include "M640.h"

M640::M640(const EventHandler &e) : Minion(e) {
    this->set_id(640);
    this->set_attackMax(4);
    this->set_defaultCost(6);
    this->set_name("Lardeur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M640::init() {
}