//
// Created by Jo on 19/12/2016.
//

#include "M39692.h"

M39692::M39692(const EventHandler &e) : Minion(e) {
    this->set_id(39692);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Dragonnet");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M39692::init() {
}