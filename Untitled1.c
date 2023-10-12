#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct packet_t {
    int type;
    int age;
}packet_t;

typedef struct MyStruct{
    int Val_1;
    int Val_2;
}MyStr;


int main(int argc, char **argv)
{
    MyStr str2 = {.Val_1 = 15, .Val_2 = 20};
    MyStr *str;
    int array[2] = {1,5};
    packet_t *packets = malloc(sizeof(packet_t)*10);


    str = (MyStr*)array;
    packet_t *p2 = packets + 2;

    printf("packets = %p, p2 = %p, sizeof(packet_t) = %lu\n", packets, p2,sizeof(packet_t));
    printf(" MyStruct = %d , %d\n", str->Val_1, str->Val_2);
}
