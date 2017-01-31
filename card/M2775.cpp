//
// Created by Jo on 19/12/2016.
//

#include "M2775.h"

M2775::M2775(const EventHandler &e) : Minion(e) {
    this->set_id(2775);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Moira Barbe-de-Bronze");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M2775::init() {
}