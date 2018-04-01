//
// Created by ElementCraft on 2018\4\2 0002.
//

#ifndef EASYPM_TILE_H
#define EASYPM_TILE_H


class Tile
{
public:
    int getType() const;

    void setType(int type);

    Tile();

    Tile(int type);

private:
    int type;
};


#endif //EASYPM_TILE_H
