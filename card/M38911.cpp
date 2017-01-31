//
// Created by Jo on 19/12/2016.
//

#include "M38911.h"

M38911::M38911(const EventHandler &e) : Minion(e) {
    this->set_id(38911);
    this->set_attackMax(3);
    this->set_defaultCost(3);
    this->set_name("Régisseuse de Sombre-Comté");
    this->set_membership(Class::PALADIN);
    this->set_type(CardType::GENERAL);
    this->set_attackMax(3);
    this->set_maxHealth(3);
}

void M38911::init() {
}