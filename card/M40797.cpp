//
// Created by Jo on 19/12/2016.
//

#include "M40797.h"

M40797::M40797(const EventHandler &e) : Minion(e) {
    this->set_id(40797);
    this->set_attackMax(3);
    this->set_defaultCost(6);
    this->set_name("Béhémoth de jade");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(6);
}

void M40797::init() {
}