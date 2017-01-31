//
// Created by Jo on 19/12/2016.
//

#include "M39684.h"

M39684::M39684(const EventHandler &e) : Minion(e) {
    this->set_id(39684);
    this->set_attackMax(0);
    this->set_defaultCost(1);
    this->set_name("Portail bleu");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(0);
    this->set_maxHealth(1);
}

void M39684::init() {
}