//
// Created by Jo on 19/12/2016.
//

#include "M533.h"

M533::M533(const EventHandler &e) : Minion(e) {
    this->set_id(533);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Esprit du loup");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M533::init() {
}