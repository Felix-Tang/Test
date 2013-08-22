// test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "malloc.h"
#include "string.h"

void test(char** addr)
{
	*addr = (char*)malloc(10);

	memset(*addr, 0 ,10);

	memcpy(*addr,  "123456789", 9);
}


int main(int argc, char* argv[])
{
	char **temp;
	char *temp1 = NULL;

	test(&temp1);

	printf("temp1 is %s \r\n", temp1);


	return 0;
}
