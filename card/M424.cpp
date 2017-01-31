//
// Created by Jo on 19/12/2016.
//

#include "M424.h"

M424::M424(const EventHandler &e) : Minion(e) {
    this->set_id(424);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Prêtresse d’Élune");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M424::init() {
}