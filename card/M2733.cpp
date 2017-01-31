//
// Created by Jo on 19/12/2016.
//

#include "M2733.h"

M2733::M2733(const EventHandler &e) : Minion(e) {
    this->set_id(2733);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Partenaire d’entraînement");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M2733::init() {
}