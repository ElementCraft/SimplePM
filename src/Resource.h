//
// Created by ElementCraft on 2018\4\2 0002.
//

#ifndef EASYPM_RESOURCE_H
#define EASYPM_RESOURCE_H

#include <boost/serialization/singleton.hpp>
#include <type_traits>
#include <iostream>
#include <fstream>
#include <vector>
#include <boost/format.hpp>
#include "Area.h"

#define RESOURCE_DIR_AREA "data/area"

template<typename T>
class Resource
        : public boost::serialization::singleton<Resource<T>>
{
private:

public:
    T *load(int index);

    Area *loadArea(int index);
};

template<typename T>
T *Resource<T>::load(int index)
{
    if (std::is_same<Area, T>::value)
    {
        return (T *) loadArea(index);
    } else
    {

    }

    return nullptr;
}

template<typename T>
Area *Resource<T>::loadArea(int index)
{
    int w, h;
    Area *area = nullptr;
    auto path = boost::format("%1%/%2%.m") % RESOURCE_DIR_AREA % index;

    std::ifstream in(path.str(), std::ios::in);

    if (!in.bad())
    {
        in >> w >> h;

        auto arr = std::vector<std::vector<std::shared_ptr<Tile>>>(h);

        for (int i = 0; i < h; ++i)
        {
            arr[i].resize(w);

            for (int j = 0; j < w; ++j)
            {
                int type = 0;

                in >> type;

                arr[i][j] = std::make_shared<Tile>(type);
            }

        }

        area = new Area(arr);

    }

    in.close();
    return area;
}


#endif //EASYPM_RESOURCE_H
