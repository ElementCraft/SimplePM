//
// Created by ElementCraft on 2018\4\3 0003.
//

#ifndef EASYPM_SCREEN_H
#define EASYPM_SCREEN_H


#include <boost/serialization/singleton.hpp>
#include <memory>
#include <vector>

/**
 * 屏幕格子信息
 */
typedef struct tagScreenCell
{
    unsigned int x;
    unsigned int y;
    unsigned int type;
    unsigned int color;

    tagScreenCell(unsigned int x, unsigned int y, unsigned int type, unsigned int color)
            : x(x), y(y), type(type), color(color)
    {

    }
} ScreenCell;

/**
 * 屏幕绘制管理类
 */
class Screen
        : public boost::serialization::singleton<Screen>
{
public:
    void clear();
    void draw(std::shared_ptr<std::vector<std::shared_ptr<ScreenCell>>> vecCells);
};


#endif //EASYPM_SCREEN_H
