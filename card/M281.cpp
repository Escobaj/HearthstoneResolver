//
// Created by Jo on 19/12/2016.
//

#include "M281.h"

M281::M281(const EventHandler &e) : Minion(e) {
    this->set_id(281);
    this->set_attackMax(4);
    this->set_defaultCost(6);
    this->set_name("Commandant d’Argent");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(2);
}

void M281::init() {
}