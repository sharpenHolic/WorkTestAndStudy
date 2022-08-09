#include "testSanitizerGlobalBufferOverflow.h"

void testSanitizerGlobalBufferOverflow::callTestFunc(int *ptr)
{
    globalBufferOverflow();
}

void testSanitizerGlobalBufferOverflow::globalBufferOverflow()
{ 
    cout << "globalBufferOverflow" << endl;
}