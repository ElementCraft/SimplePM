//
// Created by ElementCraft on 2018\4\1 0001.
//

#ifndef EASYPM_GAME_H
#define EASYPM_GAME_H

#include <boost/serialization/singleton.hpp>

class Game
    : public boost::serialization::singleton<Game>
{

public:
    void init() const;

    void cmd() const;

    void stop() const;
};


#endif //EASYPM_GAME_H
