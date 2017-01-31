//
// Created by Jo on 19/12/2016.
//

#include "M40574.h"

M40574::M40574(const EventHandler &e) : Minion(e) {
    this->set_id(40574);
    this->set_attackMax(2);
    this->set_defaultCost(5);
    this->set_name("Armurière clandestine");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(7);
}

void M40574::init() {
}