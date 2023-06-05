# C-get-and-display-time
C语言获取并显示当前时间的程序
#include <stdio.h>：包含标准输入输出函数的头文件。
#include <time.h>：包含时间相关函数的头文件。
time_t currentTime：定义一个time_t类型的变量currentTime，用于存储时间值。
struct tm *localTime：定义一个指向struct tm类型的指针变量localTime，用于存储本地时间信息。
currentTime = time(NULL)：调用time()函数获取当前时间的时间戳，并将其赋值给currentTime变量。
localTime = localtime(&currentTime)：调用localtime()函数将时间戳转换为本地时间，并将结果保存在localTime指针变量中。
printf("Current time: %s", asctime(localTime))：使用printf()函数打印输出格式化后的时间。asctime()函数将localTime指针指向的时间结构体转换为字符串，并将结果作为参数传递给printf()函数进行输出。
return 0：表示程序正常结束。
