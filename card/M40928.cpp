//
// Created by Jo on 19/12/2016.
//

#include "M40928.h"

M40928::M40928(const EventHandler &e) : Minion(e) {
    this->set_id(40928);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Enquêteur perspicace");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(6);
}

void M40928::init() {
}