//
// Created by Jo on 19/12/2016.
//

#include "M2002.h"

M2002::M2002(const EventHandler &e) : Minion(e) {
    this->set_id(2002);
    this->set_attackMax(7);
    this->set_defaultCost(6);
    this->set_name("Méca chat-ours");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(7);
    this->set_maxHealth(6);
}

void M2002::init() {
}