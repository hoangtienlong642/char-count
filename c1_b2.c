//Viết chương trình nhập vào một xâu ký tự và hiển thị số lần xuất hiện của mỗi ký tự có trong xâu 
#include<stdio.h>
#define alphabet_len 26
int main() 
{
    int i;
    char c;
    int count[alphabet_len]={0};
    printf("Nhap vao xau ki tu: \n");
    c = getchar();
    while ( c != '\n' && c >= 0 )
    {
        if ( c >= 'a' && c <= 'z' ) ++count[c - 'a'];
        if ( c >= 'A' && c <= 'Z' ) ++count[c - 'A'];
        c = getchar(); 
    };
    for ( i = 0; i < alphabet_len; i++)
    { 
        if (count[i] != 0 ) printf("The letter \'%c\' appears %d time \n",'a' + i, count[i] );
    }
    return 0; 
}
