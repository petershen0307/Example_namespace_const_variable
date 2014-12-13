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
    extern InitialMap const MAP_STATIC123;
}


#endif // STATICMAP_H_INCLUDED
