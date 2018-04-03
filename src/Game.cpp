//
// Created by ElementCraft on 2018\4\1 0001.
//

#include "Game.h"

// 初始化
void Game::init() const
{
    Map::get_mutable_instance().loadArea(1);
    Map::get_mutable_instance().render(1);

}

// 处理用户操作
void Game::cmd() const
{
    while (true)
    {

    }
}

// 游戏结束
void Game::stop() const
{

}
