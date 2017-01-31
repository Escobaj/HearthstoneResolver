//
// Created by Jo on 19/12/2016.
//

#include "M40636.h"

M40636::M40636(const EventHandler &e) : Minion(e) {
    this->set_id(40636);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Barbefeu Tresse-Flammes");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(2);
}

void M40636::init() {
}