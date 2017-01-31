//
// Created by Jo on 19/12/2016.
//

#include "M287.h"

M287::M287(const EventHandler &e) : Minion(e) {
    this->set_id(287);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Kidnappeur");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(3);
}

void M287::init() {
}