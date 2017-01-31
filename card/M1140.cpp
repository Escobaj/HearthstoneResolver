//
// Created by Jo on 19/12/2016.
//

#include "M1140.h"

M1140::M1140(const EventHandler &e) : Minion(e) {
    this->set_id(1140);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Garde de Baie-du-Butin");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M1140::init() {
}