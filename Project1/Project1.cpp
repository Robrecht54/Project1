#include <stdlib.h>
#include <stdio.h>
int main()
{
	float getal_a, getal_b, teller, som;

	printf("\nTeller\t\tGetal\t\tMin\t\tMax\t\tsom\t\tGem");
	printf("\n_ _ _\t\t_ _ _\t\t_ _\t\t_ _\t\t_ _\t\t_ _");
	teller = 0;
	getal_b = 0;
	do
	{
		printf("\n%.f", teller = teller + 1);
		printf("\t\t");
		scanf_s("%f", &getal_a);

		if (getal_a < getal_b)
		{
			printf("\t%.f", getal_a); /*minimum*/
			printf("\t%.f", getal_b); /*maximum*/
		}
		if (getal_a > getal_b)
		{
			printf("\t%.f", getal_b); /*minimum*/
			printf("\t%.f", getal_a); /*maximum*/
		}
		printf("\t%.f", getal_a + getal_b);
		printf("\t%.2f", ((getal_a + getal_b) / 2));
		(getal_b = getal_a + 0);

	} while (teller < 10);
	return 0;
}