#include <stdio.h>

int main(void)
{
	int word;
	printf(" choose one of the following.\n apple\n orange\n banana\n peach\n");
	printf(" enter your choice here: ");
	scanf_s("%s", &word);
    
	printf(" --------------\n");

	if (word == "apple")
		printf(" your choice is apple.");
	else if (word == "orange")
		printf(" your choice is orange.");
	else if (word == "banana")
		printf(" your choice is banana.");
	else (word == "peach");
		printf(" your choice is peach.");
	
	return 0;
}