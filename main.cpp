
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **charSquare(int n);
void drawCharSquare(char **square, int n);
void oneLoop(int n);

int main(int argc, char **argv)
{
	int n=atoi(argv[1]);
	srand(argc==3 ? atoi(argv[2]) : time(NULL));
	//drawCharSquare(charSquare(n), n);	
	oneLoop(n);
	/* oneLoop to zadanie na 5, wydaje mi się, że można
	   traktować if jako jedną instrukcje */
}

char **charSquare(int n)
{
	char **square = new char*[n];
	for(int i=0; i<n; i++)
	{
		square[i]= new char[n];
		for(int j=0; j<n; j++) square[i][j]='a' + rand()%('z'-'a');
			
	}
	return square;
}

void drawCharSquare(char **square, int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%c ", square[i][j]);
		}
		printf("\n");
	}
}

void oneLoop(int n)
{
	for(int i=0; i<n*n; i++)
	{
		if(i%n==n-1) printf("%c \n", 'a'+rand()%('z'-'a'));
		else printf("%c ", 'a'+rand()%('z'-'a'));
	}
}