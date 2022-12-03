#include  <stdio.h>

/*Container_of macro is used to find the container structure address of the given member.*/ 
/*Use Linux system to run this program*/

#define offsetof(TYPE, MEMBER) ((size_t) &((TYPE *)0)->MEMBER)

#define container_of(ptr, type, member) ({         \
    const typeof( ((type *)0)->member ) *__mptr = (ptr); \
    (type *)( (char *)__mptr - offsetof(type,member) );})

int main(void)
{
    struct sample {
        int mem1;
        char mem2;
    };
    
    char havetodo [30] = "myembeddedcpractice";
    typeof(havetodo) goal = "embeddedsoftware Developer";
    printf("%s  %s\n", havetodo, goal);
    printf("%ld  %ld\n", sizeof(havetodo), sizeof(goal));

    struct sample sample1;
    
    printf("Address of Structure sample1 (Normal Method) = %p\n", &sample1);
    
    printf("Address of Structure sample1 (container_of Method) = %p\n", 
                            container_of(&sample1.mem2, struct sample, mem2));
    
    return 0;
}