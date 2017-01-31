//
// Created by Jo on 19/12/2016.
//

#include "M2310.h"

M2310::M2310(const EventHandler &e) : Minion(e) {
    this->set_id(2310);
    this->set_attackMax(5);
    this->set_defaultCost(3);
    this->set_name("Druidesse de la Flamme");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::BEAST);
    this->set_attackMax(5);
    this->set_maxHealth(2);
}

void M2310::init() {
}