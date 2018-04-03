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

/**
 * 区域类。游戏中每个场景都是一个区域
 *
 * @author ElementCraft
 * @date 2018-04-03 06:33:30
 */
class Area
{
public:
    explicit Area(std::vector<std::vector<std::shared_ptr<Tile>>> vector);

    Area(std::vector<std::vector<std::shared_ptr<Tile>>> &m_vecTiles, int m_w, int m_h);

    std::shared_ptr<Tile> getTile(int x, int y) const;

    int getWidth() const;

    int getHeight() const;

private:
    // 地图tile二维数组
    std::vector<std::vector<std::shared_ptr<Tile>>> m_vecTiles;

    // 宽
    int m_w;

    // 高
    int m_h;
};


#endif //EASYPM_AREA_H
