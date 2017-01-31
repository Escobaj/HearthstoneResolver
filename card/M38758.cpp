//
// Created by Jo on 19/12/2016.
//

#include "M38758.h"

M38758::M38758(const EventHandler &e) : Minion(e) {
    this->set_id(38758);
    this->set_attackMax(8);
    this->set_defaultCost(8);
    this->set_name("Ragnaros, porteur de Lumière");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(8);
    this->set_maxHealth(8);
}

void M38758::init() {
}