#ifndef TEST_SANITIZER_HEAP_BUFFER_OVERFLOW_H
#define TEST_SANITIZER_HEAP_BUFFER_OVERFLOW_H

#include "testSanitizerBase.h"

class testSanitizerHeapBufferOverflow
{
private:
    /* data */
public:
    testSanitizerHeapBufferOverflow(){};
    ~testSanitizerHeapBufferOverflow(){};

public:
    virtual void callTestFunc(int *ptr = nullptr /*if we want the memory changed*/);
    // Heap buffer overflow
    void heapBufferOverflow();
};

#endif // TEST_SANITIZER_HEAP_BUFFER_OVERFLOW_H
