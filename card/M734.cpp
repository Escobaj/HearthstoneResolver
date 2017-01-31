//
// Created by Jo on 19/12/2016.
//

#include "M734.h"

M734::M734(const EventHandler &e) : Minion(e) {
    this->set_id(734);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Contrôleur mental");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M734::init() {
}