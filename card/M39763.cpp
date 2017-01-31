//
// Created by Jo on 19/12/2016.
//

#include "M39763.h"

M39763::M39763(const EventHandler &e) : Minion(e) {
    this->set_id(39763);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Apprenti de l’archimage");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M39763::init() {
}