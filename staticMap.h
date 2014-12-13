#ifndef STATICMAP_H_INCLUDED
#define STATICMAP_H_INCLUDED

#include <map>

namespace TestMap
{
    class InitialMap : public std::map<int, int>
    {
        public:
        InitialMap& operator<<(const std::pair<int, int>& rhs)
        {
            insert(rhs);
            return *this;
        }
    };
    // equal static InitialMap const MAP_STATIC123 = ...
    InitialMap const MAP_STATIC123 = TestMap::InitialMap()
        << std::pair<int, int>(1 , 1)
        << std::pair<int, int>(2 , 2)
        << std::pair<int, int>(3 , 3);
}


#endif // STATICMAP_H_INCLUDED
