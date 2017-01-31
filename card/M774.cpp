//
// Created by Jo on 19/12/2016.
//

#include "M774.h"

M774::M774(const EventHandler &e) : Minion(e) {
    this->set_id(774);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Élémentaire délié");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M774::init() {
}