//
// Created by Jo on 19/12/2016.
//

#include "M40320.h"

M40320::M40320(const EventHandler &e) : Minion(e) {
    this->set_id(40320);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Diablotin dégoûtant");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DEMON);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M40320::init() {
}