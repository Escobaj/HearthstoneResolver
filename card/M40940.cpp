//
// Created by Jo on 19/12/2016.
//

#include "M40940.h"

M40940::M40940(const EventHandler &e) : Minion(e) {
    this->set_id(40940);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Trafiquante de la Kabale");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M40940::init() {
}