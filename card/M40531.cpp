//
// Created by Jo on 19/12/2016.
//

#include "M40531.h"

M40531::M40531(const EventHandler &e) : Minion(e) {
    this->set_id(40531);
    this->set_attackMax(2);
    this->set_defaultCost(1);
    this->set_name("Affranchi sinistrécaille");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(2);
    this->set_maxHealth(1);
}

void M40531::init() {
}