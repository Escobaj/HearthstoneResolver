//
// Created by Jo on 19/12/2016.
//

#include "M2545.h"

M2545::M2545(const EventHandler &e) : Minion(e) {
    this->set_id(2545);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Héros défunt");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M2545::init() {
}