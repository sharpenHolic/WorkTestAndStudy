/*
 * @Author: john 1142008606slam@gmail.com
 * @Date: 2022-08-07 00:57:59
 * @LastEditors: john 1142008606slam@gmail.com
 * @LastEditTime: 2022-08-07 17:29:35
 * @FilePath: /WorkTestAndStudy/testSanitizer/testSanitizerUseafterFree.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "testSanitizerUseafterFree.h"

void useAfterFree(int *ptr)
{
    int *iPtr = new int(1);
    cout << "iPtr: " << iPtr << endl;
    delete iPtr;
    *iPtr = 10;
    cout << *iPtr << endl;
    cout << "iPtr: " << iPtr << endl;
    cout << "useAfterFree" << endl;

    //ptr = iPtr;

    int * a = (int*)malloc(sizeof(int)*1);
    if ( a != NULL ) {
        *a = 1;
        printf("a is:%d.\n",*a);
        free(a);
        *a = 2;
        printf("error a is:%d.\n",*a);
    }
}