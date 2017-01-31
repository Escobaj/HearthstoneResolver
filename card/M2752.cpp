//
// Created by Jo on 19/12/2016.
//

#include "M2752.h"

M2752::M2752(const EventHandler &e) : Minion(e) {
    this->set_id(2752);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Provocateur maléfique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M2752::init() {
}