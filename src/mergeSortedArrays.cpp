/*
OVERVIEW: You are given 2 bank statements that are ordered by date - 
Write a function that produces a single merged statement ordered by dates.
E.g.: Input: A[3] = { { 10, "09-10-2003", "First" }, { 20, "19-10-2004", "Second" }, { 30, "03-03-2005", "Third" } };
B[2] = { { 10, "09-10-2003", "First" }, { 220, "18-01-2010", "Sixth" } };
Output: { { 10, "09-10-2003", "First" }, { 10, "09-10-2003", "First" }, { 20, "19-10-2004", "Second" },  30, "03-03-2005", "Third" }, { 220, "18-01-2010", "Sixth" } }

INPUTS: Two bank statements (array of transactions).

OUTPUT: Combined statement ordered by transaction date.

ERROR CASES: Return NULL for invalid inputs.

NOTES:
*/

#include <iostream>
#include<malloc.h>

struct transaction {
	int amount;
	char date[11];
	char description[20];
};
/*int* strtodate2(char *a)
{
	int sum = 0, i = 0, j = 0, k = 0;
	int* c = (int*)malloc(sizeof(int) * 3);

	for (i = 0; a[i] != '\0'; i++)
	{

		if (a[i] != 45)
		{

			sum = sum * 10 + (a[i] - 48);

		}
		else

		{

			c[j] = sum;

			j++;
			sum = 0;

		}


	}

	c[j] = sum;

	return c;
}
int check2(char* date1, char*date2)
{
	int* d1 = (int*)malloc(sizeof(int) * 3);
	int* d2 = (int*)malloc(sizeof(int) * 3);
	d1 = strtodate2(date1);
	d2 = strtodate2(date2);
	if (d1[2] == d2[2])
	{
		if (d1[1] == d2[1])
		{
			if (d1[0] == d2[0])

				return 1;
		

		else if (d1[0] < d2[0])
			return 1;
		else
			return 0;



	}
		else if (d1[1] < d2[1])
			return 1;
		else
			return 0;

	}
	else if (d1[2] <d2[2])
		return 1;
	else
		return 0;

}*/

struct transaction * mergeSortedArrays(struct transaction *A, int ALen, struct transaction *B, int BLen) {
	/*int i=0, j=0, k = 0, l = 0;
	struct transaction *C;
	if (A && (ALen > 0) && (B) && (BLen > 0))
	{
		
			C = (struct transaction *)malloc(sizeof(struct transaction *)*(ALen+BLen+1));
		
		

			while ((i < ALen) && (j < BLen))
		{
			
				k = check2(A[i].date, B[j].date);
				
				 if(k==1)
				{
					
					C[l] = A[i];
					i++;
					
					
				}
				else
				{
					C[l] = B[j];
					
					j++;
				}
				 l++;
				
			}
			if (i >= ALen)
			{
				while (j < BLen)
				{
					C[l] = B[j];

					j++;
					l++;
				}

			}
			if (j >= BLen)
			{
				while (i < ALen)
				{
					C[l] = A[i];

					i++;
					l++;
				}

			}
		
		
		return C;
	}
	else*/
		return NULL;
}
