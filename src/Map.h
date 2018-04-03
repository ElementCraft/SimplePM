//
// Created by ElementCraft on 2018\4\1 0001.
//

#ifndef EASYPM_MAP_H
#define EASYPM_MAP_H

#include <boost/serialization/singleton.hpp>
#include <memory>
#include <map>
#include "Area.h"
#include "Screen.h"

class Map
        : public boost::serialization::singleton<Map>
{
public:
    bool loadArea(unsigned int index);
    bool unloadArea(unsigned int index);

    void render();
    void render(unsigned int index);

    ScreenCell* tile2ScreenCell(std::shared_ptr<Tile> tile, unsigned int x, unsigned int y);

private:
    typedef std::pair<unsigned int, std::shared_ptr<Area>> pair_map;

    // 保存所有区域信息的map
    std::map<unsigned int, std::shared_ptr<Area>> m_mapAreas;

    /**
     * 当前区域
     */
    unsigned int m_nCurrentAreaIndex;
};


#endif //EASYPM_MAP_H
