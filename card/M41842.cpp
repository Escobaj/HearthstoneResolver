//
// Created by Jo on 19/12/2016.
//

#include "M41842.h"

M41842::M41842(const EventHandler &e) : Minion(e) {
    this->set_id(41842);
    this->set_attackMax(10);
    this->set_defaultCost(5);
    this->set_name("Le gardien des tempêtes");
    this->set_membership(Class::SHAMAN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(10);
    this->set_maxHealth(10);
}

void M41842::init() {
}