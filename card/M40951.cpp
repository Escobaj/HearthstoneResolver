//
// Created by Jo on 19/12/2016.
//

#include "M40951.h"

M40951::M40951(const EventHandler &e) : Minion(e) {
    this->set_id(40951);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Maître de grouk-fu");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M40951::init() {
}