//
// Created by Jo on 19/12/2016.
//

#include "M1810.h"

M1810::M1810(const EventHandler &e) : Minion(e) {
    this->set_id(1810);
    this->set_attackMax(5);
    this->set_defaultCost(4);
    this->set_name("Embusqué anub’ar");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M1810::init() {
}