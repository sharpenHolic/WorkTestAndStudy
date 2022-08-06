#include <iostream>
#include "testSanitizer/testSanitizerUseafterFree.h"
using namespace std;
int a = 10;

int main() {

    int *ptr = nullptr;
    useAfterFree(ptr);
    cout << ptr << endl;
    cout << "test all" << endl;
    return 0;
}