#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() 
{
int i=2;
    double n, x, szereg, epsilon,pi=3.1415926535897932384626433832795;
       printf("Podaj wartosc x[stopnie]: ");
       scanf("%lf",&x);
       printf("Podaj wartosc epsilon: ");
       scanf("%lf",&epsilon);
    if (epsilon>=0.01)
       epsilon=0.000000000000000000001;
       x=(pi/180)*x;	
       n=x;
       szereg=n;
     while(fabs(n)>epsilon*fabs(szereg)) 
	 {
       n*=-x*x/((i+1)*i);
       szereg+=n;
       i+=2;
}
       printf("wynik to: %0.15lf\n",szereg);
       system("pause");
return 0;
}
