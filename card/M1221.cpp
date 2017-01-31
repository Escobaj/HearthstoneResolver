//
// Created by Jo on 19/12/2016.
//

#include "M1221.h"

M1221::M1221(const EventHandler &e) : Minion(e) {
    this->set_id(1221);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Terreur du Vide");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M1221::init() {
}