//
// Created by Jo on 19/12/2016.
//

#include "M39696.h"

M39696::M39696(const EventHandler &e) : Minion(e) {
    this->set_id(39696);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Gardienne de la Ménagerie");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M39696::init() {
}