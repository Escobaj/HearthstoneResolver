//
// Created by Jo on 19/12/2016.
//

#include "M38403.h"

M38403::M38403(const EventHandler &e) : Minion(e) {
    this->set_id(38403);
    this->set_attackMax(3);
    this->set_defaultCost(4);
    this->set_name("Xaril l’Esprit empoisonné");
    this->set_membership(Class::ROGUE);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(2);
}

void M38403::init() {
}