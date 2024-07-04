#include <stdio.h>
#define P printf
#define S scanf

int main()
{
    int a, b, c, d,e;

    P("enter the number of A :");
    S("%d", &a);
    P("enter the number of B :");
    S("%d", &b);
    P("enter the number of C :");
    S("%d", &c);
    P("enter the number of D :");
    S("%d", &d);
    P("enter the number of E :");
    S("%d", &e);

    (a>b)
        ?(a>c)
            ?(a>d)
                ?(a>e)
                    ?P("a is big")
                    :P("e is big")
                :(d>e)
                    ?P("d is big")
                    :P("e is big")
            :(c>d)
                ?(c>e)
                    ?P("c is big")
                    :P("e is big")  
                :(d>e)
                    ?P("d is big")
                    :P("e is big")
        :(b>c)
            ?(b>d)
                ?(b>e)
                    ?P("b is big")
                    :P("e is big") 
                :(d>e)
                    ?P("d is big")
                    :P("e is big")
            :(c>d)
                ?(c>e)
                    ?P("c is big")
                    :P("e is big")
                :(d>e)
                    ?P("d is big")
                    :P("e is big");
            

   
}
