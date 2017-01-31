//
// Created by Jo on 19/12/2016.
//

#include "M40323.h"

M40323::M40323(const EventHandler &e) : Minion(e) {
    this->set_id(40323);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Raza l’Enchaîné");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M40323::init() {
}