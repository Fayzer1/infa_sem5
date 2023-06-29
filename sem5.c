#include <stdio.h>
#include "sem5.h"
#define MAX_SIZE 30

int main()
{
	char s1[MAX_SIZE], s2[MAX_SIZE];
	int position;

	int symbol; 
	int count_s2 = 0; 
	int count_s1 = 0;

	puts("Input s1:");
        while((symbol = getchar()) != '\n')
        {
        	s1[count_s1++] = symbol;
    	}
    	s1[count_s1] = '\0';

	puts("Input s2:");
    	while((symbol = getchar()) != '\n')
    	{
        	s2[count_s2++] = symbol;
    	}
    	s2[count_s2] = '\0';


	position = search_positions(s1, s2);
	printf("Position: %d\n", position);

}
