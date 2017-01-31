//
// Created by Jo on 19/12/2016.
//

#include "M39308.h"

M39308::M39308(const EventHandler &e) : Minion(e) {
    this->set_id(39308);
    this->set_attackMax(0);
    this->set_defaultCost(2);
    this->set_name("Bouclier animé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(5);
}

void M39308::init() {
}