//
// Created by Jo on 19/12/2016.
//

#include "M38429.h"

M38429::M38429(const EventHandler &e) : Minion(e) {
    this->set_id(38429);
    this->set_attackMax(6);
    this->set_defaultCost(5);
    this->set_name("Soigneuse du Crépuscule");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(5);
}

void M38429::init() {
}