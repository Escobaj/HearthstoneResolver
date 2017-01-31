//
// Created by Jo on 19/12/2016.
//

#include "M1078.h"

M1078::M1078(const EventHandler &e) : Minion(e) {
    this->set_id(1078);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Éclaireur murloc");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M1078::init() {
}