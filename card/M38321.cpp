//
// Created by Jo on 19/12/2016.
//

#include "M38321.h"

M38321::M38321(const EventHandler &e) : Minion(e) {
    this->set_id(38321);
    this->set_attackMax(3);
    this->set_defaultCost(2);
    this->set_name("Tigre dent-de-sabre");
    this->set_membership(Class::DRUID);
    this->set_type(CardType::BEAST);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M38321::init() {
}