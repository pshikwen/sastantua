#include <unistd.h>
#include <stdio.h>

void sastantua()
{
	int size;

	printf("number of rows to be displayed:\t");
	scanf("%d", &size);

	int row;
	int space;
	int star;
	
	for(row = 1; row  <= size; row++)
	{
	for(space = size -row; space >= 1; space--)
	{
	printf(" ");
	}
	for(star = 1; star <= (row*2)-1; star++)
	{
		printf("*");
	}
	printf("\n");
 }
}

int main()
{
	sastantua();
	return 0;
}
