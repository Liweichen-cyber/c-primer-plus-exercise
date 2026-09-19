#include <stdio.h>
int main(void) {
    int numbers [8] ;
    int power = 2 ; //对power初始化，注意不能放到循环里面，否则一直都是2
    int i = 0 ;  //提前定义i，for中不要再次int i，否则会创建新的变量

    for (i = 0 ; i < 8 ; i ++){
        numbers [i] = power ;  //给数组每个标记赋值
        power = power * 2 ;            //更新power，为下一轮保存新的值

    }
    i = 0 ; //for结束后i=8，需要重新初始化i，方便do while遍历数组
    do {
        printf("%d   " , numbers[i]) ;
        i ++ ;
    }while (i < 8);


    return 0 ;
}
//本题中for的目的是得到数组的数值，do while 负责输出数组，其中do 负责print，while负责判断什么时候停止
//i控制数组位置，power保存不断变化的数据
