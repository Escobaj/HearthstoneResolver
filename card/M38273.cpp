//
// Created by Jo on 19/12/2016.
//

#include "M38273.h"

M38273::M38273(const EventHandler &e) : Minion(e) {
    this->set_id(38273);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Élémentaire du Crépuscule");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(2);
}

void M38273::init() {
}