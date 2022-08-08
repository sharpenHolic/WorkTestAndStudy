/*
 * @Author: john 1142008606slam@gmail.com
 * @Date: 2022-08-07 16:07:57
 * @LastEditors: john 1142008606slam@gmail.com
 * @LastEditTime: 2022-08-07 16:49:42
 * @FilePath: /WorkTestAndStudy/common/common.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef COMMOM_H
#define COMMOM_H

#include <iostream>
using namespace std;

enum TestAsanType
{
    USE_AFTER_FREE = 1,
    HEAP_BUFFER_OVERFLOW,
    STACK_BUFFER_OVERFLOW,
    GLOBAL_BUFFER_OVERFLOW,
    USE_AFTER_RETURN,
    USE_AFTER_SCOPE,
    INITIALIZATION_ORDER_BUGS,
    MEMORY_LEAKS
};

// 单例实现common类
class Common
{
public:
    ~Common(){}

    Common(const Common &) = delete;
    Common &operator=(const Common &) = delete;

    static Common &getInstance()
    {
        static Common instance;
        return instance;
    }

private:
    Common() {}

    public:
    // call testcase of Asan
    void callTestAsan(int, int *ptr = nullptr); 
    // show start menu
    void showStartMenu();
    // select option
    void selectOption(int option);
};

//


#endif // COMMOM_H