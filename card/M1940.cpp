//
// Created by Jo on 19/12/2016.
//

#include "M1940.h"

M1940::M1940(const EventHandler &e) : Minion(e) {
    this->set_id(1940);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Méca-téléporteur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M1940::init() {
}