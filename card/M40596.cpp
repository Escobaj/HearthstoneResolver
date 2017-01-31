//
// Created by Jo on 19/12/2016.
//

#include "M40596.h"

M40596::M40596(const EventHandler &e) : Minion(e) {
    this->set_id(40596);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Aya Patte Noire");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(3);
}

void M40596::init() {
}