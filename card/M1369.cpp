//
// Created by Jo on 19/12/2016.
//

#include "M1369.h"

M1369::M1369(const EventHandler &e) : Minion(e) {
    this->set_id(1369);
    this->set_attackMax(2);
    this->set_defaultCost(2);
    this->set_name("Crocilisque des rivières");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::BEAST);
    this->set_attackMax(2);
    this->set_maxHealth(3);
}

void M1369::init() {
}