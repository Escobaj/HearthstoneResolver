//
// Created by Jo on 19/12/2016.
//

#include "M40803.h"

M40803::M40803(const EventHandler &e) : Minion(e) {
    this->set_id(40803);
    this->set_attackMax(2);
    this->set_defaultCost(5);
    this->set_name("Bourbinja, l’étoile volante");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::MURLOC);
    this->set_attackMax(2);
    this->set_maxHealth(4);
}

void M40803::init() {
}