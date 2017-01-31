//
// Created by Jo on 19/12/2016.
//

#include "M205.h"

M205::M205(const EventHandler &e) : Minion(e) {
    this->set_id(205);
    this->set_attackMax(8);
    this->set_defaultCost(8);
    this->set_name("Protecteur Écorcefer");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(8);
    this->set_maxHealth(8);
}

void M205::init() {
}