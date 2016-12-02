//
// Created by escoba_j on 29/11/2016.
//

#ifndef HEARTHSTONERESOLVER_AHEROPOWER_H
#define HEARTHSTONERESOLVER_AHEROPOWER_H


#include "ACard.h"

class HeroPower : public ACard {
    private:
        int _remainUsage;
        int _currentUsage;
    public:
    HeroPower(const EventHandler &e);

    State play(unsigned int order);

    int get_remainUsage() const;

    void set_remainUsage(int _remainUsage);

    int get_currentUsage() const;

    void set_currentUsage(int _currentUsage);
};

#endif //HEARTHSTONERESOLVER_AHEROPOWER_H
