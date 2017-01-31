//
// Created by Jo on 19/12/2016.
//

#include "M69.h"

M69::M69(const EventHandler &e) : Minion(e) {
    this->set_id(69);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Champion de la Main d’argent");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M69::init() {
}