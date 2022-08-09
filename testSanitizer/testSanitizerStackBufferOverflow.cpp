/*
 * @Author: john 1142008606slam@gmail.com
 * @Date: 2022-08-08 20:26:29
 * @LastEditors: john 1142008606slam@gmail.com
 * @LastEditTime: 2022-08-08 20:30:57
 * @FilePath: /WorkTestAndStudy/testSanitizer/testSanitizerStackBufferOverflow.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "testSanitizerStackBufferOverflow.h"

void testSanitizerStackBufferOverflow::callTestFunc(int *ptr)
{
    stackBufferOverflow();
}

void testSanitizerStackBufferOverflow::stackBufferOverflow()
{

    char str[4] = {0};
    strcpy(str, "1234");
    cout << "stackBufferOverflow" << endl;
}