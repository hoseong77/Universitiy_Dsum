/*
#include<stdio.h>

void ft_str_is_uppercase(char* str);

int main(void) {
	char a[] = "asdf";
	char b[] = "ASDF";
	char c[] = "ASDFasdf";
	ft_str_is_uppercase(&a);
	ft_str_is_uppercase(&b);
	ft_str_is_uppercase(&c);
}

void ft_str_is_uppercase(char* str)
{
	int a = 0, b = 0;
	int len = sizeof(str);
	for (int i = 0; i < len; ++i)
	{
		if (*(str + i) >= 65 && *(str + i) <= 90) {
			a = a + 1;
		}
		else {
			continue;
		}	
	}
	if (a == 0)
		printf("0\n");
	else
		printf("1\n");
	
}
*/