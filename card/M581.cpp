//
// Created by Jo on 19/12/2016.
//

#include "M581.h"

M581::M581(const EventHandler &e) : Minion(e) {
    this->set_id(581);
    this->set_attackMax(8);
    this->set_defaultCost(9);
    this->set_name("Alexstrasza");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(8);
    this->set_maxHealth(8);
}

void M581::init() {
}