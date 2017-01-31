//
// Created by Jo on 19/12/2016.
//

#include "M1090.h"

M1090::M1090(const EventHandler &e) : Minion(e) {
    this->set_id(1090);
    this->set_attackMax(3);
    this->set_defaultCost(1);
    this->set_name("Diablotin des flammes");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M1090::init() {
}