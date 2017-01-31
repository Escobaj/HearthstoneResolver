//
// Created by Jo on 19/12/2016.
//

#include "M2311.h"

M2311::M2311(const EventHandler &e) : Minion(e) {
    this->set_id(2311);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Druidesse de la Flamme");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(5);
}

void M2311::init() {
}