//
// Created by Jo on 19/12/2016.
//

#include "M2262.h"

M2262::M2262(const EventHandler &e) : Minion(e) {
    this->set_id(2262);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Empereur Thaurissan");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M2262::init() {
}