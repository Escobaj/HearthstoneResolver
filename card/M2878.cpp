//
// Created by Jo on 19/12/2016.
//

#include "M2878.h"

M2878::M2878(const EventHandler &e) : Minion(e) {
    this->set_id(2878);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Conservateur du musée");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(2);
}

void M2878::init() {
}