//
// Created by Jo on 19/12/2016.
//

#include "M1109.h"

M1109::M1109(const EventHandler &e) : Minion(e) {
    this->set_id(1109);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Maître-lame blessé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(7);
}

void M1109::init() {
}