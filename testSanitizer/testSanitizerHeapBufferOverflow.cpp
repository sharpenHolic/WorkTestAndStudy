#include "testSanitizerHeapBufferOverflow.h"

void testSanitizerHeapBufferOverflow::callTestFunc(int *ptr)
{
    heapBufferOverflow();
}

void testSanitizerHeapBufferOverflow::heapBufferOverflow()
{
    
    cout << "heapBufferOverflow" << endl;
}