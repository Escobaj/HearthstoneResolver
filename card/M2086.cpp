//
// Created by Jo on 19/12/2016.
//

#include "M2086.h"

M2086::M2086(const EventHandler &e) : Minion(e) {
    this->set_id(2086);
    this->set_attackMax(6);
    this->set_defaultCost(7);
    this->set_name("Troggzor le Terreminator");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M2086::init() {
}