//
// Created by Jo on 19/12/2016.
//

#include "M40605.h"

M40605::M40605(const EventHandler &e) : Minion(e) {
    this->set_id(40605);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Commissaire-priseur Beardo");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M40605::init() {
}