//
// Created by Jo on 19/12/2016.
//

#include "M2060.h"

M2060::M2060(const EventHandler &e) : Minion(e) {
    this->set_id(2060);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Expérimentateur gnome");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M2060::init() {
}