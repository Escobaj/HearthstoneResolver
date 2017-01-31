//
// Created by Jo on 19/12/2016.
//

#include "M1155.h"

M1155::M1155(const EventHandler &e) : Minion(e) {
    this->set_id(1155);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Worgen déchaîné");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M1155::init() {
}