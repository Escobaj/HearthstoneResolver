//
// Created by Jo on 19/12/2016.
//

#include "M699.h"

M699::M699(const EventHandler &e) : Minion(e) {
    this->set_id(699);
    this->set_attackMax(2);
    this->set_defaultCost(5);
    this->set_name("Rhino de la toundra");
    this->set_membership(Class::HUNTER);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(5);
}

void M699::init() {
}