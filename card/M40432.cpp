//
// Created by Jo on 19/12/2016.
//

#include "M40432.h"

M40432::M40432(const EventHandler &e) : Minion(e) {
    this->set_id(40432);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Prêtre de la serre de la Kabale");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(4);
}

void M40432::init() {
}