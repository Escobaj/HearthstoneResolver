//
// Created by Jo on 19/12/2016.
//

#include "M635.h"

M635::M635(const EventHandler &e) : Minion(e) {
    this->set_id(635);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Maître-bouclier de Sen’jin");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M635::init() {
}