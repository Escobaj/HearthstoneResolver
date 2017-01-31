//
// Created by Jo on 19/12/2016.
//

#include "M415.h"

M415::M415(const EventHandler &e) : Minion(e) {
    this->set_id(415);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Jeune maître brasseur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M415::init() {
}