//
// Created by Jo on 19/12/2016.
//

#include "M890.h"

M890::M890(const EventHandler &e) : Minion(e) {
    this->set_id(890);
    this->set_attackMax(6);
    this->set_defaultCost(8);
    this->set_name("Tirion Fordring");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M890::init() {
}