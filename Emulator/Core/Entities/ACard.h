//
// Created by escoba_j on 29/11/2016.
//

#ifndef HEARTHSTONERESOLVER_ACARD_H
#define HEARTHSTONERESOLVER_ACARD_H

#include <string>
#include <vector>
#include "../Type/Target.h"
#include "../Type/Class.h"
#include "../Type/State.h"
#include "../Event/EventHandler.h"

class ACard {
private:
    std::string  _name;
    Target       _target;
    Class        _membership;
    unsigned int _id;
    unsigned int _order;
    unsigned int _defaultCost;
    int          _currentCost;

public:

    ACard(EventHandler e);

    /**
     * return the cost original of this inherited card
     * @return unsigned int cost
     */
    unsigned int get_defaultCost() const;

    /**
     * set the cost original of this inherited card
     * @param _defaultCost
     */
    void set_defaultCost(unsigned int _defaultCost);

    /**
     * return the card cost
     * @return
     */
    unsigned int get_currentCost() const;

    void set_currentCost(int _currentCost);

    Target get_target() const;

    void set_target(Target _target);

    unsigned int get_order() const;

    void set_order(unsigned int _order);

    unsigned int get_id() const;

    const std::string get_name() const;

    Class get_membership() const;

    virtual State play(unsigned int order) = 0;

protected:
    void set_name(const std::string &_name);

    void set_membership(Class _membership);

    void set_id(unsigned int _id);

    EventHandler _event;
};


#endif //HEARTHSTONERESOLVER_ACARD_H
