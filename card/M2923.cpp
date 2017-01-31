//
// Created by Jo on 19/12/2016.
//

#include "M2923.h"

M2923::M2923(const EventHandler &e) : Minion(e) {
    this->set_id(2923);
    this->set_attackMax(4);
    this->set_defaultCost(4);
    this->set_name("Sélénien de la jungle");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::BEAST);
    this->set_attackMax(4);
    this->set_maxHealth(4);
}

void M2923::init() {
}