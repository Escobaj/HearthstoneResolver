//
// Created by Jo on 19/12/2016.
//

#include "M25275.h"

M25275::M25275(const EventHandler &e) : Minion(e) {
    this->set_id(25275);
    this->set_attackMax(3);
    this->set_defaultCost(1);
    this->set_name("Perroquet mécanique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(3);
    this->set_maxHealth(6);
}

void M25275::init() {
}