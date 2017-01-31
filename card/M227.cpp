//
// Created by Jo on 19/12/2016.
//

#include "M227.h"

M227::M227(const EventHandler &e) : Minion(e) {
    this->set_id(227);
    this->set_attackMax(0);
    this->set_defaultCost(1);
    this->set_name("Poulet à tête chercheuse");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MECHANICAL);
    this->set_attackMax(0);
    this->set_maxHealth(1);
}

void M227::init() {
}