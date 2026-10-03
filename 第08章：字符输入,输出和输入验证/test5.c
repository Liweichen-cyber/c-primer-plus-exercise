#include <stdio.h>

int main (void) {
    int mid = 50 ;
    int left = 1 ;       // 最小可能答案（包含1）
    int right = 100 ;    // 最大可能答案（包含100）

    // getchar()返回int，既可能是字符，也可能是表示输入结束的EOF。
    int response ;      // 保存h或l，说明程序猜大了还是猜小了
    int reply ;         // 保存y或n，说明当前猜测是否正确
    int ch ;            // 只用于清理这一行剩余的输入

    printf ("Pick an integer from 1 to 100. I will try to guess it.\n") ;
    printf ("Respond with a y if my guess is right and with\n") ;
    printf ("an n if it is wrong.\n") ;
    printf ("If my answer is higher than your number, respond with a h\n") ;
    printf ("If my answer is lower than your number, respond with a l\n") ;
    printf ("Uh...is your number 50?\n") ;

    reply = getchar() ;  // 第一次读取：只取走一个字符，还没有取走回车产生的换行

    // y表示猜对；EOF表示输入结束或读取失败，这两种情况都不再循环。
    while (reply != 'y' && reply != EOF) {
        if (reply == 'n') {
            /*
             * 例如输入n再按回车，输入流中通常有'n'、'\n'。
             * reply已经取走'n'，这里继续读取，丢弃剩余字符及换行。
             * 每次getchar()都会取走一个字符，直到遇到'\n'或EOF。
             * 用ch保存返回值，才能同时判断这两种结束情况。
             */
            while ((ch = getchar()) != '\n' && ch != EOF) {
                continue ;
            }

            printf ("Lower or higher? (h/l):\n") ;
            response = getchar() ;  // 上一行已清理完，现在读取新一行的第一个字符

            if (response == EOF) {
                // 这里没有读到方向，结束游戏，不再计算新的mid。
                printf ("\nInput ended. Goodbye!\n") ;
                return 0 ;
            }

            if (response == 'h') {
                // 读取h后，它后面的换行仍然留着，先清理这一行。
                while ((ch = getchar()) != '\n' && ch != EOF) {
                    continue ;
                }

                right = mid - 1 ;     // 猜大了，mid不可能是答案，上界要排除mid
                mid = (left + right) / 2 ;  // 取剩余区间的中值，整数除法舍弃小数
                printf ("Well, then, is it %d?\n", mid) ;
            }

            else if (response == 'l') {
                // 读取l后，也要清理它后面的换行及其他字符。
                while ((ch = getchar()) != '\n' && ch != EOF) {
                    continue ;
                }

                left = mid + 1 ;      // 猜小了，mid不可能是答案，下界要排除mid
                mid = (left + right) / 2 ;
                printf ("Well, then, is it %d?\n", mid) ;
            }

            else {
                /*
                 * 无效方向也需要清理这一行。
                 * 如果只按了回车，response已经是'\n'，这一行已读完，
                 * 不能继续清理，否则会把下一行也读走。
                 */
                if (response != '\n') {
                    while ((ch = getchar()) != '\n' && ch != EOF) {
                        continue ;
                    }
                }

                printf ("Sorry, I understand only h or l.\n") ;
                // 保留原来的流程：方向无效时，mid不变，重新回答y/n。
                printf ("Is your number still %d? (y/n):\n", mid) ;
            }

            // 对新猜测（或未改变的猜测）重新回答；下一轮while检查这个新reply。
            reply = getchar() ;
        }

        else {
            // 这里处理无效的y/n；只按回车时不再清理下一行。
            if (reply != '\n') {
                while ((ch = getchar()) != '\n' && ch != EOF) {
                    continue ;
                }
            }

            printf ("Sorry, I understand only y or n.\n") ;
            printf ("Is your number %d? (y/n):\n", mid) ;

            /*
             * 必须重新读取reply！清理输入只改变输入流，不改变reply。
             * 如果不赋新值，reply会一直保存原来的无效字符。
             */
            reply = getchar() ;
        }
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
