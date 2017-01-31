//
// Created by Jo on 19/12/2016.
//

#include "M1068.h"

M1068::M1068(const EventHandler &e) : Minion(e) {
    this->set_id(1068);
    this->set_attackMax(5);
    this->set_defaultCost(7);
    this->set_name("Gardien des rois");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(6);
}

void M1068::init() {
}