//
// Created by Jo on 19/12/2016.
//

#include "M40693.h"

M40693::M40693(const EventHandler &e) : Minion(e) {
    this->set_id(40693);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Illusionniste du Lotus");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M40693::init() {
}