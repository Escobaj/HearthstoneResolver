//
// Created by Jo on 19/12/2016.
//

#include "M40285.h"

M40285::M40285(const EventHandler &e) : Minion(e) {
    this->set_id(40285);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Eauracle jinyu");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(6);
}

void M40285::init() {
}