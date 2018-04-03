//
// Created by ElementCraft on 2018\4\2 0002.
//

#include "Area.h"

using namespace std;


Area::Area(vector<vector<shared_ptr<Tile>>> vec)
{
    int w = -1, h = -1;
    if (!vec.empty())
    {
        h = vec.size();
        if (!vec[0].empty())
        {
            w = vec[0].size();
        }
    }

    new(this)Area(vec, w, h);
}

/**
 * 获取指定坐标的地格
 * @param x x坐标
 * @param y y坐标
 * @return 地格ptr
 */
std::shared_ptr<Tile> Area::getTile(int x, int y) const
{
    return m_vecTiles[x][y];
}

Area::Area(vector<vector<shared_ptr<Tile>>> &vec, int m_w, int m_h)
        : m_w(m_w), m_h(m_h)
{
    this->m_vecTiles.swap(vec);
}

/**
 * 获取area宽度
 * @return 宽
 */
int Area::getWidth() const
{
    return m_w;
}

/**
 * 获取area高度
 * @return 高
 */
int Area::getHeight() const
{
    return m_h;
}
