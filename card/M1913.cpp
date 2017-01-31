//
// Created by Jo on 19/12/2016.
//

#include "M1913.h"

M1913::M1913(const EventHandler &e) : Minion(e) {
    this->set_id(1913);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Épées dansantes");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M1913::init() {
}