//
// Created by Jo on 19/12/2016.
//

#include "M2634.h"

M2634::M2634(const EventHandler &e) : Minion(e) {
    this->set_id(2634);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Écaille-d’effroi");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(4);
    this->set_maxHealth(2);
}

void M2634::init() {
}