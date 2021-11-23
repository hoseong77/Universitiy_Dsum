/*
#include<stdio.h>

void *ft_to_lower(char* str);

int main(void) {

    char a[] = "asdf";
    char b[] = "ASDF";
    char c[] = "ASDFasdf";
    ft_to_lower(&a);
    ft_to_lower(&b);
    ft_to_lower(&c);
}



void* ft_to_lower(char* str)
{
    int len = sizeof(str);
    for (int i = 0; i < len; ++i)
    {
        if (*(str + i) >= 65 && *(str + i) <= 90)
            printf("%c", *(str + i) + 32);
        else{
            printf(str);
            break;
        }
    }
    printf("\n");
}

*/