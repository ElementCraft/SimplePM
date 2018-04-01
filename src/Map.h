//
// Created by ElementCraft on 2018\4\1 0001.
//

#ifndef EASYPM_MAP_H
#define EASYPM_MAP_H

#include <boost/serialization/singleton.hpp>
#include <memory>
#include <map>
#include "Area.h"

class Map
        : public boost::serialization::singleton<Map>
{
public:
    bool loadArea(int index);
    bool unloadArea(int index);

private:
    // 保存所有区域信息的map
    std::map<int, std::shared_ptr<Area>> m_mapAreas;
};


#endif //EASYPM_MAP_H
