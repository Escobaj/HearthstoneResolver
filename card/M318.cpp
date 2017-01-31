//
// Created by Jo on 19/12/2016.
//

#include "M318.h"

M318::M318(const EventHandler &e) : Minion(e) {
    this->set_id(318);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Baine Sabot-de-Sang");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(5);
}

void M318::init() {
}