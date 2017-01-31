//
// Created by Jo on 19/12/2016.
//

#include "M40743.h"

M40743::M40743(const EventHandler &e) : Minion(e) {
    this->set_id(40743);
    this->set_attackMax(2);
    this->set_defaultCost(3);
    this->set_name("Contrebandière des bas-fonds");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M40743::init() {
}