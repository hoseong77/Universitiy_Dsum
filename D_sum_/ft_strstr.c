#include<stdio.h>

char* ft_strstr(char* str, char* to_find);

int main(void) {
	char* str_1 = "asdfghjkl";
	char* str_2 = "fghj";
	ft_strstr(str_1, str_2);
}

char* ft_strstr(char* str, char* to_find)
{

	if (*str == *to_find) {
		while (*str != 0 && *to_find!=0 && *str == *to_find) {
			str++;
			to_find++;
		}
	}
	return printf("%s",&str);
}
