#include <iostream>
#include "staticMap.h"
using namespace std;
void func();
int main()
{
    cout << "Hello world!" << endl;
    func();
    cout << endl << TestMap::MAP_STATIC123.at(1);
    cout << TestMap::MAP_STATIC123.at(2);
    cout << TestMap::MAP_STATIC123.at(3);
    cout << endl << std::hex << &TestMap::MAP_STATIC123;
    return 0;
}
