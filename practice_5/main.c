/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#pragma pack(1)

struct abhi{
    volatile int b;
    int h;
    char c;
};

union abhishek{
    int x;
    int y;
    char c;
};

struct abhin{
    int f;
    union {
        char alpha;
        int num;
        int num2;
        float g;
    };
};

struct abhinn{
    int f;
    struct {
        char alpha;
        int num;
        float g;
    };
};

union abhinnn{
    char t;
    struct{
        int i;
        char j;
        float k;
    };
};

volatile int a;

int main()
{
    
    struct abhi teststruct;
    union abhishek testunion;
    struct abhin anony;
    struct abhinn anonym;
    union abhinnn anonymm;
    
    teststruct.b = 50;
    teststruct.h = 100;
    printf("struct b = %d\n", teststruct.b);
    printf("struct h = %d\n\n", teststruct.h);
    
    
    
    printf("Hello World\n");
    printf("size of a = %ld\n", sizeof(a));
    printf("size of teststruct = %ld\n\n", sizeof(teststruct));
    
    
    testunion.x = 10;
    testunion.y = 11;
    //testunion.c = 'a';
    printf("x = %d\n", testunion.x);
    printf("y = %d\n", testunion.y);
    //printf("c = %c\n", testunion.c);
    printf("size of testunion = %ld\n\n", sizeof(testunion));
    
    anonym.alpha = 'W';
    anonym.f = 85;
    printf("alpha in anonym = %c\n", anonym.alpha);
    printf("f in anonym = %d\n\n", anonym.f);
    
    anony.f = 89;
    anony.alpha = 'Q';
    anony.num = 90;
    
    printf("f in anony = %d\n", anony.f);
    printf("alpha in anony = %c\n", anony.alpha);
    printf("num in anony = %d\n", anony.num);               
     printf("num2 in anony = %d\n\n", anony.num2);          //we can aceess num2 member without declaring
    
    printf("size of structabhin = %ld\n", sizeof(anony));
    printf("size of structabhinn = %ld\n", sizeof(anonym));
    printf("size of structabhinnn = %ld\n", sizeof(anonymm));
    
    return 0;
}

