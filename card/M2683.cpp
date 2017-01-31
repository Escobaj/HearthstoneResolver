//
// Created by Jo on 19/12/2016.
//

#include "M2683.h"

M2683::M2683(const EventHandler &e) : Minion(e) {
    this->set_id(2683);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Champion du Nexus Saraad");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(5);
}

void M2683::init() {
}