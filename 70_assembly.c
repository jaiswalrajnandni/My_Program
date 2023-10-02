// C program to add two numbers using assembly code
#include<stdio.h>

int main(){
    int a=10, b=20, c;
    asm {
        mov ax,a
        mov bx,b
        add ax,bx
        mo c,ax
    }
    printf("c=%d",c);
    return 0;
}