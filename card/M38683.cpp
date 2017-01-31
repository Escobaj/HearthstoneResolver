//
// Created by Jo on 19/12/2016.
//

#include "M38683.h"

M38683::M38683(const EventHandler &e) : Minion(e) {
    this->set_id(38683);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Seigneur Ondulance");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M38683::init() {
}