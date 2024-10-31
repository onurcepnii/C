#include <stdio.h>

int main() {
    
    int x  = 1;
    
    if(*(char*)&x)
        printf("Big Endian");
        
    else
        printf("Little Endian");

}
