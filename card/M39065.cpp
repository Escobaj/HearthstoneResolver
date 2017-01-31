//
// Created by Jo on 19/12/2016.
//

#include "M39065.h"

M39065::M39065(const EventHandler &e) : Minion(e) {
    this->set_id(39065);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Anub’Rekhan");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M39065::init() {
}