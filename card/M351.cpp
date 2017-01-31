//
// Created by Jo on 19/12/2016.
//

#include "M351.h"

M351::M351(const EventHandler &e) : Minion(e) {
    this->set_id(351);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Maître fabricant d’épées");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(3);
}

void M351::init() {
}