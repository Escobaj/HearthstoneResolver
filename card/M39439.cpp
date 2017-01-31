//
// Created by Jo on 19/12/2016.
//

#include "M39439.h"

M39439::M39439(const EventHandler &e) : Minion(e) {
    this->set_id(39439);
    this->set_attackMax(4);
    this->set_defaultCost(6);
    this->set_name("Cavalier en ivoire");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M39439::init() {
}