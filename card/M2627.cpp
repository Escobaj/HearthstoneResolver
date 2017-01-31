//
// Created by Jo on 19/12/2016.
//

#include "M2627.h"

M2627::M2627(const EventHandler &e) : Minion(e) {
    this->set_id(2627);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Cheval de guerre cuirassé");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(5);
    this->set_maxHealth(3);
}

void M2627::init() {
}