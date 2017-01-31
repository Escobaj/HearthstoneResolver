//
// Created by Jo on 19/12/2016.
//

#include "M40281.h"

M40281::M40281(const EventHandler &e) : Minion(e) {
    this->set_id(40281);
    this->set_attackMax(2);
    this->set_defaultCost(5);
    this->set_name("Wyrm de mana rouge");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(6);
}

void M40281::init() {
}