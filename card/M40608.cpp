//
// Created by Jo on 19/12/2016.
//

#include "M40608.h"

M40608::M40608(const EventHandler &e) : Minion(e) {
    this->set_id(40608);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Boucanier de petite envergure");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::PIRATE);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M40608::init() {
}