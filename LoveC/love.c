/*
**  JERRY_Z. 2020/1/8
*/
#include <stdio.h>

int main()
{
    char head_file[18] = {'#','i','n','c','l','u','d','e',' ',\
                         '<','s','t','d','i','o','.','h','>'};
    char main_function[10] = {'i','n','t',' ','m','a','i','n','(',')'};
    char love_code[22] = {'p', 'r','i','n','t','f','(','"','H','e','l',\
                        'l','o',' ','W','o','r','l','d','"',')',';'};
    char return_int[9] = {'r','e','t','u','r','n',' ','0',';'};

    printf("\n");
    for (int i = 0; i < 18; i++) {
        printf("%c", head_file[i]);
    }
    printf("\n\n");
    for (int i = 0; i < 10; i++) {
        printf("%c", main_function[i]);
    }
    printf("\n%c\n\t", '{');
    for (int i = 0; i < 22; i++) {
        printf("%c", love_code[i]);
    }
    printf("\n\n\t");
    for (int i = 0; i < 9; i++) {
        printf("%c", return_int[i]);
    }
    printf("\n%c\n", '}');

    return 0;
}
