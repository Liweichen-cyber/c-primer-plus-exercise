#include <stdio.h>

int main (void) {
    int mid = 50 ;
    int left = 1 ;       // 最小可能答案（包含1）
    int right = 100 ;    // 最大可能答案（包含100）

    // getchar()返回int，既可能是字符，也可能是表示输入结束的EOF。
    // 每次直接回答y/h/l，不再先回答n，因此只需要reply，不再需要response。
    int reply ;         // y：猜对；h：程序猜大了；l：程序猜小了
    int ch ;            // 只用于清理这一行剩余的输入

    printf ("Pick an integer from 1 to 100. I will try to guess it.\n") ;
    printf ("Respond with a y if my guess is right.\n") ;
    printf ("If my answer is higher than your number, respond with a h\n") ;
    printf ("If my answer is lower than your number, respond with a l\n") ;
    printf ("Uh...is your number 50?\n") ;

    reply = getchar() ;  // 第一次读取：只取走一个字符，还没有取走回车产生的换行

    // y表示猜对；EOF表示输入结束或读取失败，这两种情况都不再循环。
    while (reply != 'y' && reply != EOF) {
        /*
         * 例如输入h再按回车，输入流中通常有'h'、'\n'。
         * reply已经取走'h'，这里丢弃这一行剩余字符及换行。
         * 每次getchar()都会取走一个字符，直到遇到'\n'或EOF。
         * 如果只按回车，reply已经取走'\n'，不能再清理下一行。
         * 三种分支都需要清理，所以把这一段放在分支前面。
         */
        if (reply != '\n') {
            while ((ch = getchar()) != '\n' && ch != EOF) {
                continue ;
            }
        }

        // 原来判断response的h/l分支，现在直接判断reply。
        if (reply == 'h') {
            right = mid - 1 ;     // 猜大了，mid不可能是答案，上界要排除mid
            mid = (left + right) / 2 ;  // 取剩余区间的中值，整数除法舍弃小数
            printf ("Well, then, is it %d?\n", mid) ;
        }

        else if (reply == 'l') {
            left = mid + 1 ;      // 猜小了，mid不可能是答案，下界要排除mid
            mid = (left + right) / 2 ;
            printf ("Well, then, is it %d?\n", mid) ;
        }

        else {
            // y已由while条件处理；这里处理h/l之外的无效回答（包括n）。
            printf ("Sorry, I understand only y, h or l.\n") ;
            printf ("Is your number %d? (y/h/l):\n", mid) ;
        }

        /*
         * 三个分支结束后，都重新读取对当前猜测的回答。
         * 清理输入只改变输入流，不改变reply，必须在这里重新赋值。
         * 新回答是y或EOF时，下一轮while检查后就退出。
         */
        reply = getchar() ;
    }

    // 循环可能因为y结束，也可能因为EOF结束，不能都当作猜对。
    if (reply == 'y') {
        printf ("I knew I could do it! So easy!\n") ;
    }
    else {
        printf ("\nInput ended. Goodbye!\n") ;
    }

    return 0 ;
}
