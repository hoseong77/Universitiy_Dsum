/*
#include <stdio.h> 
#include <stdlib.h> 
// typedef sturct ���� 
// struct�� ������ 3�� (int, int, char) 
typedef struct t_struct {
	int a;
	int b;
	char c[100];
}t_struct;

void ft_print_struct(t_struct *str) { 
	printf("%d\n",str->a);
	printf("%d\n",str->b);
	printf("%s\n",str->c);
} 
void ft_set_struct(t_struct* a, t_struct* b, t_struct* c) {  // �Ķ���ͷ� set�� ���� 3���� �ֱ� 
	
} 
int main() { 
	t_struct *str; 
	if (!(str = malloc(sizeof(t_struct)))) 
		return 0; 
	ft_set_struct(str->a, str->b, str->c);
	// �Ķ���ͷ� set�� ���� 3���� �ֱ� 
	ft_print_struct(str); 
}*/