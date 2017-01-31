//
// Created by Jo on 19/12/2016.
//

#include "M12.h"

M12::M12(const EventHandler &e) : Minion(e) {
    this->set_id(12);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Accro au mana");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(3);
}

void M12::init() {
}