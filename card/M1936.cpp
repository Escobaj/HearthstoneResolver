//
// Created by Jo on 19/12/2016.
//

#include "M1936.h"

M1936::M1936(const EventHandler &e) : Minion(e) {
    this->set_id(1936);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Réducteur fou");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M1936::init() {
}