//
// Created by Jo on 19/12/2016.
//

#include "M38774.h"

M38774::M38774(const EventHandler &e) : Minion(e) {
    this->set_id(38774);
    this->set_attackMax(1);
    this->set_defaultCost(1);
    this->set_name("Villageois possédé");
    this->set_membership(Class::WARLOCK);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(1);
    this->set_maxHealth(1);
}

void M38774::init() {
}