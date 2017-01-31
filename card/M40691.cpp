//
// Created by Jo on 19/12/2016.
//

#include "M40691.h"

M40691::M40691(const EventHandler &e) : Minion(e) {
    this->set_id(40691);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Piqueur de démons des mers");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(4);
    this->set_maxHealth(2);
}

void M40691::init() {
}