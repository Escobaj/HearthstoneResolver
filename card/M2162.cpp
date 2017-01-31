//
// Created by Jo on 19/12/2016.
//

#include "M2162.h"

M2162::M2162(const EventHandler &e) : Minion(e) {
    this->set_id(2162);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Adorateur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M2162::init() {
}