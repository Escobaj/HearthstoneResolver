//
// Created by Jo on 19/12/2016.
//

#include "M39269.h"

M39269::M39269(const EventHandler &e) : Minion(e) {
    this->set_id(39269);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Magicien de la Ménagerie");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M39269::init() {
}