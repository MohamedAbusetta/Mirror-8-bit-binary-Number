#include <stdio.h>
#include <stdlib.h>

unsigned char mirror (unsigned char num);

int main()
{
    unsigned char number = 0x0F; // test case
    number = mirror(number);
    printf("%X",number);
    return 0;
}

unsigned char mirror (unsigned char num)
{
    char i = 7; //could be -ve ,So don't use unsigned
    unsigned char j = 0;
    unsigned char temp = 0;
    while(i >= 0){
    temp |= ((num >> j) & 0b00000001) << i ; //bit mast each bit then save in temp (7-its old postion)
    i--;
    j++;
    }
    return temp;
}
