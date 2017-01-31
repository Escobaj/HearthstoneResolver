//
// Created by Jo on 19/12/2016.
//

#include "M2704.h"

M2704::M2704(const EventHandler &e) : Minion(e) {
    this->set_id(2704);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Vendeur de rafraîchissements");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(5);
}

void M2704::init() {
}