
#include<stdio.h>

void ft_str_is_alpha(char* str);

int main(void) {
	char a[] = "asdf";
	char b[] = "1234";
	char c[] = "a1s2s3df4";
	ft_str_is_alpha(&a);
	ft_str_is_alpha(&b);
	ft_str_is_alpha(&c);

}

void ft_str_is_alpha(char* str)
{
	int a = 0, b = 0;
	int len = sizeof(str);

	for (int i = 0; i < len; ++i)
	{
		if ((*(str + i) >= 97 && *(str + i) <= 122) || (*(str + i) >= 65 && *(str + i) <= 90))
			a = a + 1;

		else {
			continue;
		}
	}
	if (a == 0)
		printf("0\n");
	else
		printf("1\n");
}
