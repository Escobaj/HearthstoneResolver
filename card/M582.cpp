//
// Created by Jo on 19/12/2016.
//

#include "M582.h"

M582::M582(const EventHandler &e) : Minion(e) {
    this->set_id(582);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Soigneuse sombrécaille");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(5);
}

void M582::init() {
}