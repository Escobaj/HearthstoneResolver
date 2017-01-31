//
// Created by Jo on 19/12/2016.
//

#include "M40921.h"

M40921::M40921(const EventHandler &e) : Minion(e) {
    this->set_id(40921);
    this->set_attackMax(4);
    this->set_defaultCost(3);
    this->set_name("Limon d’égout toxique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(3);
}

void M40921::init() {
}