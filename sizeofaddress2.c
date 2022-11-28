#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 3.14;
    double d = 9.567;

    printf("Values form the variables are:\n");
    printf("%c\n",ch);
    printf("%c\n",i);
    printf("%c\n",f);
    printf("%c\n",d);

    printf("size of each variable\n");
    printf("size of character : %d\n",sizeof(ch));
    printf("size of integer : %d\n",sizeof(i));
    printf("size of float : %d\n",sizeof(f));
    printf("size of double : %d\n",sizeof(d));

    printf("Address of each variable\n");
    printf("Address of ch : %p\n",&ch);
    printf("Address of i :  %p\n",&i);
    printf("Address of f :  %p\n",&f);
    printf("Address of d :  %p\n",&d);

    return 0;
}

