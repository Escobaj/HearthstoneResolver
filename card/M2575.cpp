//
// Created by Jo on 19/12/2016.
//

#include "M2575.h"

M2575::M2575(const EventHandler &e) : Minion(e) {
    this->set_id(2575);
    this->set_attackMax(1);
    this->set_defaultCost(4);
    this->set_name("Médecin du tournoi");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(8);
}

void M2575::init() {
}