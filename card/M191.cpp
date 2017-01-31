//
// Created by Jo on 19/12/2016.
//

#include "M191.h"

M191::M191(const EventHandler &e) : Minion(e) {
    this->set_id(191);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Écumeur murloc");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M191::init() {
}