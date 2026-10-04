#include <stdio.h>
int main(void) {
    char choice ;
    int ch ;  //【新增】保存清理菜单输入时读到的字符，也能保存EOF
    float first_number , second_number , result ;

    while (1)
    {
        printf("Enter the operation of your choice:\n");
        printf("a. add              s. subtract\n");
        printf("m. multiply         d. divide\n");
        printf("q. quit\n");
        scanf(" %c" , &choice) ;

        /*
         *【修改】有效、无效选项都先清理这一行，再判断choice。
         * 例如输入a23并回车：scanf只读走a，下面读走2、3和换行，
         * 避免残留的23被后面的scanf当作第一个数字。
         * 每次getchar()取走一个字符，遇到换行或EOF就停止。
         */
        while ((ch = getchar()) != '\n' && ch != EOF) {
            continue;
        }

        //对于选择菜单内容错误进行处理
        if (choice != 'a' && choice != 's' && choice != 'm' && choice != 'd' && choice != 'q' ) {
            //【原代码】只在选项错误时清理输入，现在已统一移到上面。
            // while (getchar() != '\n') {
            //     continue;
            // }
            // 这里不能再清理一次，否则会读走下一行。
            printf("Please enter a letter from  a, s, m, d and q.\n ") ;
            continue ;
        }

        else if (choice == 'q') {
            printf("bye!") ;
            return 0;
        }

        //对于数字输入错误进行处理
        else {
            printf("Enter first number: ");
            while (1) {
                if (scanf("%f", &first_number) != 1) {
                    while (getchar() != '\n') {           //清除错误的内容
                        continue;
                    }
                    printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
                }

                else {
                    break;
                }
            }
            if (choice == 'd') {
                printf("Enter a number other than O:") ;
            }

            else {
                printf("Enter second number :") ;
            }

            while (1) {
                if (scanf("%f", &second_number) != 1) {
                    while (getchar() != '\n') {
                        continue;
                    }
                    printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
                }

                else if (choice == 'd' && second_number == 0) {
                    printf("Please enter a second number which is not 0\n") ;
                }

                else {
                    break;
                }
            }

            switch (choice) {
                case 'a' :
                    result = first_number + second_number ;
                    printf("%.2f + %.2f is %.2f\n" , first_number , second_number , result) ;
                    break;

                case 's' :
                    result = first_number - second_number ;
                    printf("%.2f - %.2f is %.2f\n" , first_number , second_number , result) ;
                    break;

                case 'm' :
                    result = first_number * second_number ;
                    printf("%.2f * %.2f is %.2f\n" , first_number , second_number , result) ;
                    break;

                case 'd' :
                    result = first_number / second_number ;
                    printf("%.2f / %.2f is %.2f\n" , first_number , second_number ,result) ;
                    break;

            }
        }
    }

    return 0;
}
