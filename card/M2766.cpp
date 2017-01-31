//
// Created by Jo on 19/12/2016.
//

#include "M2766.h"

M2766::M2766(const EventHandler &e) : Minion(e) {
    this->set_id(2766);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Vide-gousset");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M2766::init() {
}