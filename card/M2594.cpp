//
// Created by Jo on 19/12/2016.
//

#include "M2594.h"

M2594::M2594(const EventHandler &e) : Minion(e) {
    this->set_id(2594);
    this->set_attackMax(5);
    this->set_defaultCost(3);
    this->set_name("Enragé de glace");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(2);
}

void M2594::init() {
}