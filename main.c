#include<stdio.h>


void putH(char *);
void swap(char * , char *);
char *reverse(char *);


int main()
{
	char test[30] = "987654321";
	reverse(test);
	printf("%s",test);
	return 0;
}

char *reverse(char *s)
{
	if(*s == '\0') return s;
	putH(s+1);
	reverse(s+1);
	return s;

}

void putH(char *s)
{
	if(*s == '\0') return;
	putH(s+1);
	swap(s-1,s);
	return ;
}
void swap(char *a , char *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
	return ;
}
