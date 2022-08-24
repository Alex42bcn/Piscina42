#include<stdio.h>
#include <string.h>

int main()
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;

	ptr = strstr(largestring, smallstring);
	printf("%s", ptr);



	return (0);
}
