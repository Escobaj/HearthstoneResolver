//
// Created by Jo on 19/12/2016.
//

#include "M1167.h"

M1167::M1167(const EventHandler &e) : Minion(e) {
    this->set_id(1167);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Garde-paix de l’Aldor");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M1167::init() {
}