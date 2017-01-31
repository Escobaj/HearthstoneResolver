//
// Created by Jo on 19/12/2016.
//

#include "M2070.h"

M2070::M2070(const EventHandler &e) : Minion(e) {
    this->set_id(2070);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Technicien de Brikabrok");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M2070::init() {
}