//
// Created by Jo on 19/12/2016.
//

#include "M40931.h"

M40931::M40931(const EventHandler &e) : Minion(e) {
    this->set_id(40931);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Videur de l’arrière-salle");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M40931::init() {
}