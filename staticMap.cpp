#include <iostream>
#include "staticMap.h"
using namespace std;
TestMap::InitialMap const TestMap::MAP_STATIC123 = TestMap::InitialMap()
        << std::pair<int, int>(1 , 1)
        << std::pair<int, int>(2 , 2)
        << std::pair<int, int>(3 , 3);
void func()
{
    cout << TestMap::MAP_STATIC123.at(1);
    cout << TestMap::MAP_STATIC123.at(2);
    cout << TestMap::MAP_STATIC123.at(3);
    cout << endl << std::hex << &TestMap::MAP_STATIC123;
}
