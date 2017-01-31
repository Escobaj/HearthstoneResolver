//
// Created by Jo on 19/12/2016.
//

#include "M378.h"

M378::M378(const EventHandler &e) : Minion(e) {
    this->set_id(378);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Apprenti pourpre");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M378::init() {
}