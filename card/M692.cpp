//
// Created by Jo on 19/12/2016.
//

#include "M692.h"

M692::M692(const EventHandler &e) : Minion(e) {
    this->set_id(692);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Druide de la Griffe");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M692::init() {
}