//
// Created by Jo on 19/12/2016.
//

#include "M1009.h"

M1009::M1009(const EventHandler &e) : Minion(e) {
    this->set_id(1009);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Officier chanteguerre");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M1009::init() {
}