//
// Created by Jo on 19/12/2016.
//

#include "M39074.h"

M39074::M39074(const EventHandler &e) : Minion(e) {
    this->set_id(39074);
    this->set_attackMax(5);
    this->set_defaultCost(8);
    this->set_name("Le Recousu");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(8);
}

void M39074::init() {
}