//
// Created by Jo on 19/12/2016.
//

#include "M866.h"

M866::M866(const EventHandler &e) : Minion(e) {
    this->set_id(866);
    this->set_attackMax(0);
    this->set_defaultCost(1);
    this->set_name("Porte-bouclier");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(4);
}

void M866::init() {
}