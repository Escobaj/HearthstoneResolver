//
// Created by Jo on 19/12/2016.
//

#include "M811.h"

M811::M811(const EventHandler &e) : Minion(e) {
    this->set_id(811);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Maître de culte");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(2);
}

void M811::init() {
}