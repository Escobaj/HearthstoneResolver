//
// Created by Jo on 19/12/2016.
//

#include "M186.h"

M186::M186(const EventHandler &e) : Minion(e) {
    this->set_id(186);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Ancien maître brasseur");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M186::init() {
}