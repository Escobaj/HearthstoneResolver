//
// Created by Jo on 19/12/2016.
//

#include "M40935.h"

M40935::M40935(const EventHandler &e) : Minion(e) {
    this->set_id(40935);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Incante-âme démente");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M40935::init() {
}