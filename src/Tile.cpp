//
// Created by ElementCraft on 2018\4\2 0002.
//

#include "Tile.h"

int Tile::getType() const
{
    return type;
}

void Tile::setType(int type)
{
    this->type = type;
}

Tile::Tile(int type)
        : type(type)
{

}

Tile::Tile()
        : Tile(0)
{

}
