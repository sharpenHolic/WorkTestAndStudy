/*
 * @Author: john 1142008606slam@gmail.com
 * @Date: 2022-08-08 20:55:44
 * @LastEditors: john 1142008606slam@gmail.com
 * @LastEditTime: 2022-08-08 21:16:12
 * @FilePath: /WorkTestAndStudy/testSanitizer/testSanitizerBase.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef TEST_SANITIZER_BASE_H
#define TEST_SANITIZER_BASE_H

#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

// Base
class testSanitizerBase
{
    public:
    friend class Common;
public:
    testSanitizerBase() {};
    ~testSanitizerBase() {};

    public:
    virtual void callTestFunc(int *ptr = nullptr) = 0;
};

#endif // TEST_SANITIZER_BASE_H
