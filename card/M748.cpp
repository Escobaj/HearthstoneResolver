//
// Created by Jo on 19/12/2016.
//

#include "M748.h"

M748::M748(const EventHandler &e) : Minion(e) {
    this->set_id(748);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Mage du Kirin Tor");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M748::init() {
}