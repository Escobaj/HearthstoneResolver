//
// Created by Jo on 19/12/2016.
//

#include "M42333.h"

M42333::M42333(const EventHandler &e) : Minion(e) {
    this->set_id(42333);
    this->set_attackMax(0);
    this->set_defaultCost(4);
    this->set_name("Portail énigmatique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(10);
}

void M42333::init() {
}