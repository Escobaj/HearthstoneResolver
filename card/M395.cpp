//
// Created by Jo on 19/12/2016.
//

#include "M395.h"

M395::M395(const EventHandler &e) : Minion(e) {
    this->set_id(395);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Élémentaire d’eau");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(6);
}

void M395::init() {
}