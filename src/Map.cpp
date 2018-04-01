//
// Created by ElementCraft on 2018\4\1 0001.
//

#include "Map.h"
#include "Resource.h"

using namespace std;

bool Map::loadArea(int index)
{
    Area* area = Resource<Area>::get_mutable_instance().load(1);
    cout << area->getTile(1,1)->getType();
    return false;
}
