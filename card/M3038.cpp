//
// Created by Jo on 19/12/2016.
//

#include "M3038.h"

M3038::M3038(const EventHandler &e) : Minion(e) {
    this->set_id(3038);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Robin Fredericksen");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M3038::init() {
}