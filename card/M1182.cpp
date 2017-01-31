//
// Created by Jo on 19/12/2016.
//

#include "M1182.h"

M1182::M1182(const EventHandler &e) : Minion(e) {
    this->set_id(1182);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Grizzly Ferpoil");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M1182::init() {
}