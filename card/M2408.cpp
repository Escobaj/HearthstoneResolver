//
// Created by Jo on 19/12/2016.
//

#include "M2408.h"

M2408::M2408(const EventHandler &e) : Minion(e) {
    this->set_id(2408);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Technicienne de l’Aile noire");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M2408::init() {
}