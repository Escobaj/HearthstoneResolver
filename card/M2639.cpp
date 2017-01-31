//
// Created by Jo on 19/12/2016.
//

#include "M2639.h"

M2639::M2639(const EventHandler &e) : Minion(e) {
    this->set_id(2639);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Maître des écuries");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(2);
}

void M2639::init() {
}