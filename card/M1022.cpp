//
// Created by Jo on 19/12/2016.
//

#include "M1022.h"

M1022::M1022(const EventHandler &e) : Minion(e) {
    this->set_id(1022);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Protecteur d’Argent");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M1022::init() {
}