//
// Created by Jo on 19/12/2016.
//

#include "M40598.h"

M40598::M40598(const EventHandler &e) : Minion(e) {
    this->set_id(40598);
    this->set_attackMax(5);
    this->set_defaultCost(3);
    this->set_name("Apothicaire clandestin");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::DEMON);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M40598::init() {
}