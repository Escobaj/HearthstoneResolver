//
// Created by Jo on 19/12/2016.
//

#include "M2892.h"

M2892::M2892(const EventHandler &e) : Minion(e) {
    this->set_id(2892);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Dromadaire du désert");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M2892::init() {
}