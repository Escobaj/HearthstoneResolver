//
// Created by Jo on 19/12/2016.
//

#include "M490.h"

M490::M490(const EventHandler &e) : Minion(e) {
    this->set_id(490);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Gnome caché");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(3);
}

void M490::init() {
}