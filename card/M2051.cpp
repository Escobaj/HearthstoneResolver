//
// Created by Jo on 19/12/2016.
//

#include "M2051.h"

M2051::M2051(const EventHandler &e) : Minion(e) {
    this->set_id(2051);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Robot réparateur amélioré");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M2051::init() {
}