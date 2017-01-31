//
// Created by Jo on 19/12/2016.
//

#include "M2520.h"

M2520::M2520(const EventHandler &e) : Minion(e) {
    this->set_id(2520);
    this->set_attackMax(9);
    this->set_defaultCost(9);
    this->set_name("Kraken de la mer Boréale");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(9);
    this->set_maxHealth(7);
}

void M2520::init() {
}