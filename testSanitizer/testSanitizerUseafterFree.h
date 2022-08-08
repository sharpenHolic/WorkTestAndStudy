/*
 * @Author: john 1142008606slam@gmail.com
 * @Date: 2022-08-07 00:57:59
 * @LastEditors: john 1142008606slam@gmail.com
 * @LastEditTime: 2022-08-08 21:04:39
 * @FilePath: /WorkTestAndStudy/testSanitizer/testSanitizerUseafterFree.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef TEST_SANITIZER_USEAFTER_FREE_H
#define TEST_SANITIZER_USEAFTER_FREE_H

#include "testSanitizerBase.h"

class testSanitizerUseafterFree : public testSanitizerBase
{
public:
    testSanitizerUseafterFree(){};
    ~testSanitizerUseafterFree(){};

public:
    virtual void callTestFunc(int *ptr = nullptr/*if we want the memory changed*/); 
    // use after free
    void useAfterFree(int *ptr = nullptr);
};



#endif // TEST_SANITIZER_USEAFTER_FREE_H
