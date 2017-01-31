//
// Created by Jo on 19/12/2016.
//

#include "M2491.h"

M2491::M2491(const EventHandler &e) : Minion(e) {
    this->set_id(2491);
    this->set_attackMax(8);
    this->set_defaultCost(6);
    this->set_name("Champion de Mogor");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(8);
    this->set_maxHealth(5);
}

void M2491::init() {
}