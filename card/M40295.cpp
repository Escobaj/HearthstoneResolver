//
// Created by Jo on 19/12/2016.
//

#include "M40295.h"

M40295::M40295(const EventHandler &e) : Minion(e) {
    this->set_id(40295);
    this->set_attackMax(6);
    this->set_defaultCost(7);
    this->set_name("Protecteur des Dessoudeurs");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M40295::init() {
}