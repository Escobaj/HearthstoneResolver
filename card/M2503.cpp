//
// Created by Jo on 19/12/2016.
//

#include "M2503.h"

M2503::M2503(const EventHandler &e) : Minion(e) {
    this->set_id(2503);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Régente de la Main d’argent");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M2503::init() {
}