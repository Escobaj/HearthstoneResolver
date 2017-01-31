//
// Created by Jo on 19/12/2016.
//

#include "M40381.h"

M40381::M40381(const EventHandler &e) : Minion(e) {
    this->set_id(40381);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Géode de mana");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M40381::init() {
}