//
// Created by Jo on 19/12/2016.
//

#include "Minion1.h"

Minion1::Minion1(const EventHandler &e) : Minion(e) {
    this->set_id(2);
    this->set_attackMax(1);
    this->set_defaultCost(3);
    this->set_name("Minion 1");
    this->set_description("blah blah, c'est un minion, blah blah");
    this->set_membership(Class::WARRIOR);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void Minion1::init() {

}