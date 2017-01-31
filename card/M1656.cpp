//
// Created by Jo on 19/12/2016.
//

#include "M1656.h"

M1656::M1656(const EventHandler &e) : Minion(e) {
    this->set_id(1656);
    this->set_attackMax(4);
    this->set_defaultCost(6);
    this->set_name("Le Chevalier noir");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(5);
}

void M1656::init() {
}