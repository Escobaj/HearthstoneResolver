//
// Created by Jo on 19/12/2016.
//

#include "M40583.h"

M40583::M40583(const EventHandler &e) : Minion(e) {
    this->set_id(40583);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Livre-cristaux de la Kabale");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M40583::init() {
}