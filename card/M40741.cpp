//
// Created by Jo on 19/12/2016.
//

#include "M40741.h"

M40741::M40741(const EventHandler &e) : Minion(e) {
    this->set_id(40741);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Journaliste intrépide");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M40741::init() {
}