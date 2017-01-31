//
// Created by Jo on 19/12/2016.
//

#include "M2021.h"

M2021::M2021(const EventHandler &e) : Minion(e) {
    this->set_id(2021);
    this->set_attackMax(5);
    this->set_defaultCost(6);
    this->set_name("Vierge guerrière");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M2021::init() {
}