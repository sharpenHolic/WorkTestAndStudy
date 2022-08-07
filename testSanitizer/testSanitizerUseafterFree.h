#ifndef TEST_SANITIZER_USEAFTER_FREE_H
#define TEST_SANITIZER_USEAFTER_FREE_H

#include <iostream>
using namespace std;

class Top
{
public:
    Top() : _topPtr(nullptr) {}
    ~Top() {}

private:
    int *_topPtr;
};
//
void useAfterFree(int *dataInAndOut)
{
    dataInAndOut = new int(10);
    cout << "useAfterFree" << endl;
}

#endif // TEST_SANITIZER_USEAFTER_FREE_H
