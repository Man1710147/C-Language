#include <stdio.h>
#define P printf
#define S scanf

int main()
{
    int a, b, c, d;

    P("enter the number of A :");
    S("%d", &a);
    P("enter the number of B :");
    S("%d", &b);
    P("enter the number of C :");
    S("%d", &c);
    P("enter the number of D :");
    S("%d", &d);

    (a>b)
        ?(a>c)
            ?(a>d)
                ?P("a is big")
                :P("d is big")
            :(c>d)
                ?P("c is big")
                :P("d is big")
        :(b>c)
            ?(b>d)
                ?P("b is big")
                :P("d is big")   
            :(c>d)
                ?P("c is big")
                :P("d is big"); 

}
