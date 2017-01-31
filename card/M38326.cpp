//
// Created by Jo on 19/12/2016.
//

#include "M38326.h"

M38326::M38326(const EventHandler &e) : Minion(e) {
    this->set_id(38326);
    this->set_attackMax(2);
    this->set_defaultCost(10);
    this->set_name("Maître des rouages Mécazod");
    this->set_membership(Class::NEUTRAL);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(2);
    this->set_maxHealth(95);
}

void M38326::init() {
}