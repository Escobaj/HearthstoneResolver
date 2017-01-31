//
// Created by Jo on 19/12/2016.
//

#include "M39026.h"

M39026::M39026(const EventHandler &e) : Minion(e) {
    this->set_id(39026);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Colporteur de Fossoyeuse");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M39026::init() {
}