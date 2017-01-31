//
// Created by Jo on 19/12/2016.
//

#include "M2544.h"

M2544::M2544(const EventHandler &e) : Minion(e) {
    this->set_id(2544);
    this->set_attackMax(6);
    this->set_defaultCost(6);
    this->set_name("Drake de Frimarra");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::DRAGON);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M2544::init() {
}