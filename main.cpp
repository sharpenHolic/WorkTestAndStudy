/*
 * @Author: john 1142008606slam@gmail.com
 * @Date: 2022-08-07 00:57:59
 * @LastEditors: john 1142008606slam@gmail.com
 * @LastEditTime: 2022-08-07 17:31:52
 * @FilePath: /WorkTestAndStudy/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include "testSanitizer/testSanitizerUseafterFree.h"
#include "testSanitizer/testSanitizerHeapBufferOverflow.h"
#include "testSanitizer/testSanitizerGlobalBufferOverflow.h"
#include "common/common.h"

#include <time.h>
using namespace std;




int main()
{
    Common& com = Common::getInstance();

    // program start
    clock_t timeStart, timeStop;
    timeStart = clock();

    /*********************************/
    /*********Use after free**********/
    /*********************************/
    int *useAfterFreePtr = nullptr;
    com.callTestAsan(TestAsanType::USE_AFTER_FREE, useAfterFreePtr);
    useAfterFree();
    //cout << *useAfterFreePtr << endl;
    

    /***************************************/
    /*********Heap buffer overflow**********/
    /***************************************/


    // program end
    timeStop = clock();
    double endTime = (double)(timeStop - timeStart) / CLOCKS_PER_SEC;
    std::cout << "time: " << endTime << "s" << std::endl;

    return 0;
}