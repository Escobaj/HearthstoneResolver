//
// Created by Jo on 19/12/2016.
//

#include "M2488.h"

M2488::M2488(const EventHandler &e) : Minion(e) {
    this->set_id(2488);
    this->set_attackMax(2);
    this->set_defaultCost(4);
    this->set_name("Damoiselle du Lac");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(6);
}

void M2488::init() {
}