//
// Created by Jo on 19/12/2016.
//

#include "M3019.h"

M3019::M3019(const EventHandler &e) : Minion(e) {
    this->set_id(3019);
    this->set_attackMax(6);
    this->set_defaultCost(4);
    this->set_name("Beomki Hong");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(3);
}

void M3019::init() {
}