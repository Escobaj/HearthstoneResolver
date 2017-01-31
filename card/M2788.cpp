//
// Created by Jo on 19/12/2016.
//

#include "M2788.h"

M2788::M2788(const EventHandler &e) : Minion(e) {
    this->set_id(2788);
    this->set_attackMax(6);
    this->set_defaultCost(7);
    this->set_name("Chevalier des étendues sauvages");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(6);
    this->set_maxHealth(6);
}

void M2788::init() {
}