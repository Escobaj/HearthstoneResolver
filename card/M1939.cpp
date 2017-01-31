//
// Created by Jo on 19/12/2016.
//

#include "M1939.h"

M1939::M1939(const EventHandler &e) : Minion(e) {
    this->set_id(1939);
    this->set_attackMax(7);
    this->set_defaultCost(7);
    this->set_name("Léviathan des flammes");
    this->set_membership(Class::MAGE);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(7);
    this->set_maxHealth(7);
}

void M1939::init() {
}