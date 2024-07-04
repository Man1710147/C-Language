#include <stdio.h>

#define P printf
#define S scanf

int main()
{
    int a, b, c, d, e, f;

    P("enter the number of A: ");
    S("%d", &a);
    P("enter the number of B: ");
    S("%d", &b);
    P("enter the number of C: ");
    S("%d", &c);
    P("enter the number of D: ");
    S("%d", &d);
    P("enter the number of E: ");
    S("%d", &e);
    P("enter the number of F: ");
    S("%d", &f);

    (a > b)
        ? (a > c)
            ? (a > d)
                ? (a > e)
                    ? (a > f)
                        ? P("a is big\n")
                        : P("f is big\n")
                    : (e > f)
                        ? P("e is big\n")
                        : P("f is big\n")
                : (d > e)
                    ? (d > f)
                        ? P("d is big\n")
                        : P("f is big\n")
                    : (e > f) 
                        ? P("e is big\n")
                        : P("f is big\n")
            : (c > d)
                ? (c > e)
                    ? (c > f) 
                        ? P("c is big\n")
                        : P("f is big\n")
                    : (e > f) 
                        ?P("e is big\n")
                        : P("f is big\n")
                : (d > e)
                    ? (d > f) 
                        ? P("d is big\n") 
                        : P("f is big\n")
                    : (e > f) 
                        ? P("e is big\n")
                        : P("f is big\n")
        : (b > c)
            ? (b > d)
                ? (b > e)
                    ? (b > f)   
                        ? P("b is big\n")   
                        : P("f is big\n")
                    : (e > f) 
                        ? P("e is big\n")
                        : P("f is big\n")
                : (d > e)
                    ? (d > f) 
                        ? P("d is big\n") 
                        : P("f is big\n")
                    : (e > f) 
                        ? P("e is big\n")
                        : P("f is big\n")
            : (c > d)
                ? (c > e)
                    ? (c > f) 
                        ? P("c is big\n") 
                        : P("f is big\n")
                    : (e > f) 
                        ? P("e is big\n")
                        : P("f is big\n")
                : (d > e)
                    ? (d > f) 
                        ? P("d is big\n") 
                        : P("f is big\n")
                    : (e > f) 
                        ? P("e is big\n")
                        : P("f is big\n");
}
