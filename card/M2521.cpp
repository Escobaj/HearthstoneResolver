//
// Created by Jo on 19/12/2016.
//

#include "M2521.h"

M2521::M2521(const EventHandler &e) : Minion(e) {
    this->set_id(2521);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Combattante de la fosse");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(6);
}

void M2521::init() {
}