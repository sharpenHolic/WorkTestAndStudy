/*
 * @Author: john 1142008606slam@gmail.com
 * @Date: 2022-08-07 16:08:23
 * @LastEditors: john 1142008606slam@gmail.com
 * @LastEditTime: 2022-08-08 21:16:34
 * @FilePath: /WorkTestAndStudy/common/common.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "common.h"
#include "../testSanitizer/testSanitizerGlobalBufferOverflow.h"
#include "../testSanitizer/testSanitizerUseafterFree.h"
#include "../testSanitizer/testSanitizerStackBufferOverflow.h"

void Common::callTestAsan(int option, int *ptr)
{
    switch (option)
    {
    case TestAsanType::USE_AFTER_FREE:
        testSanitizerUseafterFree().callTestFunc();
        break;
    case TestAsanType::HEAP_BUFFER_OVERFLOW:
        /* code */
        break;
    case TestAsanType::STACK_BUFFER_OVERFLOW:
        stackBufferOverflow();
        break;
    case TestAsanType::GLOBAL_BUFFER_OVERFLOW:
        /* code */
        break;
    case TestAsanType::USE_AFTER_RETURN:
        /* code */
        break;
    case TestAsanType::USE_AFTER_SCOPE:
        /* code */
        break;
    case TestAsanType::INITIALIZATION_ORDER_BUGS:
        /* code */
        break;
    case TestAsanType::MEMORY_LEAKS:
        /* code */
        break;

    default:
        break;
    }
}

void Common::showStartMenu()
{
    int option = 0;
    cout << "--------------"
         << "test start"
         << "--------------" << endl;
    cout << "test project: 1.sanitizer: " << endl;
}

void selectOption(int option)
{

}