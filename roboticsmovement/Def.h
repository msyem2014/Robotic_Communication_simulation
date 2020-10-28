#include <stdio.h>
#include <stdlib.h>

struct Finger{
    int Volt ;
    int degree;
};
struct Wrest{
    int Volt ;
    int degree;
     struct Finger *f ;
};
struct Elbow{
    int Volt ;
    int degree;
     struct Wrest *w ;
};
struct Shoulder{
    int Volt ;
    int degree;
    struct Elbow *e ;
};

struct ARM {
    struct Shoulder S ;
    struct Elbow  E;
    struct  Wrest W;
    struct Finger F ;

}RA,LA;
