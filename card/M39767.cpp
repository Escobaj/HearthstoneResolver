//
// Created by Jo on 19/12/2016.
//

#include "M39767.h"

M39767::M39767(const EventHandler &e) : Minion(e) {
    this->set_id(39767);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Valet de Medivh");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M39767::init() {
}