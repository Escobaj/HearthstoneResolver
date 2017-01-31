//
// Created by Jo on 19/12/2016.
//

#include "M41841.h"

M41841::M41841(const EventHandler &e) : Minion(e) {
    this->set_id(41841);
    this->set_attackMax(4);
    this->set_defaultCost(6);
    this->set_name("Madame Goya");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M41841::init() {
}