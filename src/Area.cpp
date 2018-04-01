//
// Created by ElementCraft on 2018\4\2 0002.
//

#include "Area.h"

using namespace std;

Area::Area(vector<vector<shared_ptr<Tile>>> vector)
{
    this->m_vecTiles.swap(vector);
}

std::shared_ptr<Tile> Area::getTile(int x, int y) const
{
    return m_vecTiles[x][y];
}
