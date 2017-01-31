//
// Created by Jo on 19/12/2016.
//

#include "M40441.h"

M40441::M40441(const EventHandler &e) : Minion(e) {
    this->set_id(40441);
    this->set_attackMax(5);
    this->set_defaultCost(5);
    this->set_name("Assassin du Lotus");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(5);
    this->set_maxHealth(5);
}

void M40441::init() {
}