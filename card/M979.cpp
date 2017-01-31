//
// Created by Jo on 19/12/2016.
//

#include "M979.h"

M979::M979(const EventHandler &e) : Minion(e) {
    this->set_id(979);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Démolisseur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(1);
    this->set_maxHealth(4);
}

void M979::init() {
}