//
// Created by Jo on 19/12/2016.
//

#include "M340.h"

M340::M340(const EventHandler &e) : Minion(e) {
    this->set_id(340);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Sœur rieuse");
    this->set_membership(Class::DREAM);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M340::init() {
}