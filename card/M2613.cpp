//
// Created by Jo on 19/12/2016.
//

#include "M2613.h"

M2613::M2613(const EventHandler &e) : Minion(e) {
    this->set_id(2613);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Grave-totem draeneï");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M2613::init() {
}