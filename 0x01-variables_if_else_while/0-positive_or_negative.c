#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/* main- random numbers to n to check whether the answer is positive or negative or zero */
/* Return-accept return 0 */
int main(void)
{
		int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
			if (n > 0)
			{
				printf("%d is positive\n", n);
			}
				else if (n < 0)
				{
				printf("%d is negative\n", n);
				}
					else
					{
				printf("%d is zero\n", n);
					}
						return (0);
}
