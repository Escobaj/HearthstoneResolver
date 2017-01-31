//
// Created by Jo on 19/12/2016.
//

#include "M40742.h"

M40742::M40742(const EventHandler &e) : Minion(e) {
    this->set_id(40742);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Agents du Lotus");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(3);
}

void M40742::init() {
}