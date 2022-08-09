#ifndef TEST_SANITIZER_GLOBAL_BUFFER_OVERFLOW_H
#define TEST_SANITIZER_GLOBAL_BUFFER_OVERFLOW_H

#include "testSanitizerBase.h"

class testSanitizerGlobalBufferOverflow
{
private:
    /* data */
public:
    testSanitizerGlobalBufferOverflow(){};
    ~testSanitizerGlobalBufferOverflow(){};

public:
    virtual void callTestFunc(int *ptr = nullptr /*if we want the memory changed*/);
    // Heap buffer overflow
    void globalBufferOverflow();
};

#endif // TEST_SANITIZER_GLOBAL_BUFFER_OVERFLOW_H
