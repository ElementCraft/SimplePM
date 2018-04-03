//
// Created by ElementCraft on 2018\4\3 0003.
//

#include <algorithm>
#include <iostream>
#include "Screen.h"

using namespace std;

/**
 * 清屏
 */
void Screen::clear()
{
    system("cls");
}

/**
 * 绘制
 * @param vecCells
 */
void Screen::draw(shared_ptr<vector<shared_ptr<ScreenCell>>> vecCells)
{
    for (auto cell = vecCells->begin(); cell != vecCells->end(); cell++)
    {
        auto c = cell->get();

        cout << 0x1b << "[" << c->x << ";" << c->y;
        cout << c->type;
    }
}
