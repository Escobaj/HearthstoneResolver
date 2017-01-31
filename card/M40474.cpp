//
// Created by Jo on 19/12/2016.
//

#include "M40474.h"

M40474::M40474(const EventHandler &e) : Minion(e) {
    this->set_id(40474);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Informateur des bas-fonds");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M40474::init() {
}