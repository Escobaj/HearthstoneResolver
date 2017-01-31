//
// Created by Jo on 19/12/2016.
//

#include "M2286.h"

M2286::M2286(const EventHandler &e) : Minion(e) {
    this->set_id(2286);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Dragonnet du Crépuscule");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M2286::init() {
}