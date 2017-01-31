//
// Created by Jo on 19/12/2016.
//

#include "M36111.h"

M36111::M36111(const EventHandler &e) : Minion(e) {
    this->set_id(36111);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Armure animée");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M36111::init() {
}