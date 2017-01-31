//
// Created by Jo on 19/12/2016.
//

#include "M2556.h"

M2556::M2556(const EventHandler &e) : Minion(e) {
    this->set_id(2556);
    this->set_attackMax(5);
    this->set_defaultCost(7);
    this->set_name("Confesseur d’argent Paletress");
    this->set_membership(Class::PRIEST);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(4);
}

void M2556::init() {
}