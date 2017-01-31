//
// Created by Jo on 19/12/2016.
//

#include "M40905.h"

M40905::M40905(const EventHandler &e) : Minion(e) {
    this->set_id(40905);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Shaku, le Collectionneur");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M40905::init() {
}