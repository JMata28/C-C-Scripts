#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c, response;
	char x;
	do {
		printf("Please enter three different numbers: \n");
		scanf("%d%d%d", &a, &b, &c);
		printf("Do you want to know the smallest, largest, or middle number. Write s for smallest, l for largest and m for middle.\n");
		scanf("%c", &x);
		while (x == '\n')
			scanf("%c", &x);
		switch (x) {
		case 'l':
				if ((a > b && b >= c) || (a > c && c >= b)) 
					printf("The largest number is: %d.\n", a);
				if ((b > a && a >= c) || (b > c && c >= a))
					printf("The largest number is: %d.\n", b);
				if ((c > a && a >= b) || (c > b && b >= a))
					printf("The largest number is: %d.\n", c);
			break;
		case 's':
				if ((a < b && b <= c) || (a < c && c <=b))
					printf("The smallest number is: %d.\n", a);
				if ((b < a && a <= c) || (b < c && c <=a))
					printf("The smallest number is: %d.\n", b);
				if ((c < a && a <= b) || (c < b && b <= a))
						printf("The smallest number is: %d.\n", c);
			break;
		case 'm':
				if (a > b && c > a || a > c && b > a)
					printf("The middle number is: %d.\n", a);
				if (b > a && c > b || b > c && a > b)
						printf("The middle number is: %d.\n", b);
				if (c > a && b > c || c > b && a > c)
						printf("The middle number is: %d.\n", c);
			break;
		} 
		printf("Do you want to do it again? Enter a positive number for yes and a negative one for no.\n");
		scanf("%d", &response);
	} while (response >= 0);
	getchar();
	return 0;
}