#include <stdio.h>
#include <time.h>

int main() {
    time_t currentTime;
    struct tm *localTime;
  
    // 获取当前时间
    currentTime = time(NULL);
  
    // 将时间转换为本地时间
    localTime = localtime(&currentTime);
  
    // 格式化并显示时间
    printf("当前时间: %s", asctime(localTime));
  
    return 0;
}
