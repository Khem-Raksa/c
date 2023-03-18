#include <stdio.h>
#include <math.h>
int main(){
	// ax2 + bx + c = 0
	double a , b , c , discriminant, root1, root2, realPart, imagPart;
	
	printf("Enter coefficients a,b and c:");
	scanf("%lf %lf %lf", &a, &b, &c);
	
	discriminant = (b*b) - (4 * a * c); 
	
	//condition for real and different roots
	if (discriminant > 0){
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("Root1 = %.2lf and Root2 = %.2lf", root1, root2);
	}
	else if (discriminant == 0){
		root1 = root2 = -b /(2 *a);
		printf("root1 = root2 = %.2lf", root1);
	}
	//discriminant < 0
	else{
		realPart = -b / (2 * a);
		//discriminant is less than zero so we put a minus to make it positive so the square root can work on it
		imagPart = sqrt(-discriminant) / (2*a);
		printf("Root1 = %.2lf + %.2lf and root2 = %.2f - %.2f", realPart, imagPart, realPart, imagPart);
		
		return 0;
	}
}
