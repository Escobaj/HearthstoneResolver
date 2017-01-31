//
// Created by Jo on 19/12/2016.
//

#include "M204.h"

M204::M204(const EventHandler &e) : Minion(e) {
    this->set_id(204);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Serpent");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M204::init() {
}