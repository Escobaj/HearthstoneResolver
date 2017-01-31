//
// Created by Jo on 19/12/2016.
//

#include "M39008.h"

M39008::M39008(const EventHandler &e) : Minion(e) {
    this->set_id(39008);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Maître de l’évolution");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(5);
}

void M39008::init() {
}