#include <stdio.h>

// argc是命令行参数的数量，通常包括程序名argv[0]
// argv[i]指向第i个参数字符串；argv[1]起是用户提供的参数

int main(int argc, char *argv[]) {
    for (int i = argc - 1; i > 0; i--) {
        printf("%s ", argv[i]);
    }
    return 0;

}
