//To find the roots of a quadratic equation
#include <stdio.h>
#include <math.h>
void main()
{
	float a, b, c, d, m,root1, root2, real, img;
	printf("\nEnter values a, b and c of the quadratic equation:");
	scanf("%f,%f,%f", &a, &b, &c);
	d = b*b-4*a*c;
	if(d<0)
	{
	printf("\nRoots are Imaginary.");
	m = sqrt(fabs(d));
	real = -b/(2*a);
	img = m/(2*a);
	printf("\nRoot1 = %.2f + %.2f i ", real, img);
	printf("\nRoot2 = %.2f - %.2f i ", real, img);
	}
	else
	{
	printf("\nRoots are real.");
	d = sqrt(d);
	root1 = (-b+d)/(2*a);
	root2 = (-b-d)/(2*a);
	printf("\nRoot1 = %.2f \t Root2 = %.2f", root1, root2);
	}
}
