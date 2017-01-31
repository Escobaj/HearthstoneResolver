//
// Created by Jo on 19/12/2016.
//

#include "M40644.h"

M40644::M40644(const EventHandler &e) : Minion(e) {
    this->set_id(40644);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Wanda Super-Sabots");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M40644::init() {
}