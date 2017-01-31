//
// Created by Jo on 19/12/2016.
//

#include "M2064.h"

M2064::M2064(const EventHandler &e) : Minion(e) {
    this->set_id(2064);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Déchiqueteur piloté");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M2064::init() {
}