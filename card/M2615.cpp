//
// Created by Jo on 19/12/2016.
//

#include "M2615.h"

M2615::M2615(const EventHandler &e) : Minion(e) {
    this->set_id(2615);
    this->set_attackMax(3);
    this->set_defaultCost(5);
    this->set_name("Vaillant des Pitons-du-Tonnerre");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(6);
}

void M2615::init() {
}