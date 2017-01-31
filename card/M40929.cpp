//
// Created by Jo on 19/12/2016.
//

#include "M40929.h"

M40929::M40929(const EventHandler &e) : Minion(e) {
    this->set_id(40929);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Vole-chant de la Kabale");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M40929::init() {
}