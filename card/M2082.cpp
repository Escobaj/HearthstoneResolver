//
// Created by Jo on 19/12/2016.
//

#include "M2082.h"

M2082::M2082(const EventHandler &e) : Minion(e) {
    this->set_id(2082);
    this->set_attackMax(5);
    this->set_defaultCost(8);
    this->set_name("Vieux déchiqueteur de Sneed");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(5);
    this->set_maxHealth(7);
}

void M2082::init() {
}