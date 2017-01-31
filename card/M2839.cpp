//
// Created by Jo on 19/12/2016.
//

#include "M2839.h"

M2839::M2839(const EventHandler &e) : Minion(e) {
    this->set_id(2839);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Lanceur de sorts draconien");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(4);
    this->set_maxHealth(6);
}

void M2839::init() {
}