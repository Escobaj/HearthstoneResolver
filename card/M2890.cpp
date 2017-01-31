//
// Created by Jo on 19/12/2016.
//

#include "M2890.h"

M2890::M2890(const EventHandler &e) : Minion(e) {
    this->set_id(2890);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Trogg des tunnels");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(3);
}

void M2890::init() {
}