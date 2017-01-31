//
// Created by Jo on 19/12/2016.
//

#include "M1652.h"

M1652::M1652(const EventHandler &e) : Minion(e) {
    this->set_id(1652);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Recrue de la Main d’argent");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M1652::init() {
}