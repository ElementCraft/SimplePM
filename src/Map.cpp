//
// Created by ElementCraft on 2018\4\1 0001.
//

#include <boost/serialization/singleton.hpp>
#include <unordered_map>
#include "Map.h"
#include "Resource.h"

using namespace std;

bool Map::loadArea(unsigned int index)
{
    Area *area = Resource<Area>::get_mutable_instance().load(index);

    if (area == nullptr) return false;

    m_mapAreas.insert(pair_map(index, shared_ptr<Area>(area)));
    return true;
}

void Map::render()
{
    render(m_nCurrentAreaIndex);
}

void Map::render(unsigned int index)
{
    shared_ptr<Area> area = m_mapAreas.at(index);
    if (area != nullptr)
    {
        auto vec = make_shared<vector<shared_ptr<ScreenCell>>>();
        for (unsigned int i = 0; i < area->getHeight(); ++i)
        {
            for (unsigned int j = 0; j < area->getWidth(); ++j)
            {
                vec->push_back(shared_ptr<ScreenCell>(tile2ScreenCell(area->getTile(i, j), j, i)));
            }
        }

        Screen::get_mutable_instance().clear();
        Screen::get_mutable_instance().draw(vec);
    }
}

/**
 * 地格转化成屏幕绘制用的单元格
 * @param tile 地格
 * @param x x坐标
 * @param y y坐标
 * @return 屏幕单元格
 */
ScreenCell *Map::tile2ScreenCell(std::shared_ptr<Tile> tile, unsigned int x, unsigned int y)
{
    return new ScreenCell(x, y, tile->getType(), 0);
}
