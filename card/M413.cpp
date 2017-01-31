//
// Created by Jo on 19/12/2016.
//

#include "M413.h"

M413::M413(const EventHandler &e) : Minion(e) {
    this->set_id(413);
    this->set_attackMax(4);
    this->set_defaultCost(5);
    this->set_name("Commando foudrepique");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(4);
    this->set_maxHealth(2);
}

void M413::init() {
}