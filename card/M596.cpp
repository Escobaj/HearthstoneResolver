//
// Created by Jo on 19/12/2016.
//

#include "M596.h"

M596::M596(const EventHandler &e) : Minion(e) {
    this->set_id(596);
    this->set_attackMax(1);
    this->set_defaultCost(2);
    this->set_name("Fabricante d’armures");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(4);
}

void M596::init() {
}