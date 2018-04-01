//
// Created by ElementCraft on 2018\4\2 0002.
//

#ifndef EASYPM_AREA_H
#define EASYPM_AREA_H

#include <memory>
#include <vector>
#include <auto_ptr.h>
#include "Tile.h"

#define AREA_MAX_WIDTH 20
#define AREA_MAX_HEIGHT 12

class Area
{
public:
    explicit Area(std::vector<std::vector<std::shared_ptr<Tile>>> vector);

    std::shared_ptr<Tile> getTile(int x, int y) const;
private:
    // 地图tile二维数组
    std::vector<std::vector<std::shared_ptr<Tile>>> m_vecTiles;

};


#endif //EASYPM_AREA_H
