//
// Created by Jo on 19/12/2016.
//

#include "M285.h"

M285::M285(const EventHandler &e) : Minion(e) {
    this->set_id(285);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Sous-chef cruel");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M285::init() {
}