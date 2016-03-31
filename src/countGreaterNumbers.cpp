/*
OVERVIEW: You are given a bank statement where transactions are ordered by date. Write a function that finds the number of transactions in that statement after a given date.
-- find the count of numbers greater than a given number in a sorted array.
E.g.: Input: A[3] = { { 10, "09-10-2003", "First" }, { 20, "19-10-2004", "Second" }, { 30, "03-03-2005", "Third" } };
date = "19-10-2004"
Output: 1 (as there is only one transaction { 30, "03-03-2005", "Third" })

INPUTS: One bank statement (array of transactions) and date.

OUTPUT: Return the number of transactions in that statement after a given date.

ERROR CASES: Return NULL for invalid inputs.

NOTES:
*/
#include<malloc.h>
struct transaction {
	int amount;
	char date[11];
	char description[20];
};
int* strtodate(char *a)
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
 int check(char* date1, char*date2)
{
	 int* d1 = (int*)malloc(sizeof(int) * 3);
	 int* d2 = (int*)malloc(sizeof(int) * 3);
	 d1 = strtodate(date1);
	 d2 = strtodate(date2);
	 if (d1[2] == d2[2])
	 {
		 if (d1[1] == d2[1])
		 {
			 if (d1[0] > d2[0])
				 return 1;
			 else
				 return 0;
		 }
		 else if (d1[2] > d2[2])
			 return 1;
		 else
			 return 0;
		 
	 }
	 else if (d1[2] > d2[2])
		 return 1;
	 else
		 return 0;

}
int countGreaterNumbers(struct transaction *Arr, int len, char *date) {
	int i = 0,k,count=0;
	if (Arr&&len > 0)
	{
		for (i = len - 1; i >= 0; i--)
		{
			k = check(Arr[i].date, date);
			if (k == 1)
				count++;
			else
				break;

		}
		return count;
	}
	
}
