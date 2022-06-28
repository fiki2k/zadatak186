/*  Program treba izracunat eksponencijal serije pomocu funkcije.  */

#include<stdio.h>
#include<math.h>

int faktorijal(int n)
{
        int i,fact=1;
        for(i=1;i<=n;i++)
                fact=fact*i;
        return fact;
}


int main()
{
        double x, ekponencijal=1, z, red;
    	int j, n, i;

        printf("Unesi vrijednost za x : ") ;  // Npr 4 5 6
        scanf("%lf", &x) ;
        printf("\nUnesi vrijednost za n : ") ;   // Npr 10 20
        scanf("%d", &n) ;

        x = x * 3.14159 / 180 ;   //pretvara stupnjeve u radijane
    i=0;
    z=exp(x);

        for(i=1;i<=n;i=i+1)
    {
            red=pow(x,i)/faktorijal(i);
        ekponencijal=ekponencijal+red;
    }
        printf("\nexp(x) je priblizno %.15lf\n", ekponencijal);
    printf("\nexp(x) prema zadanoj funkciji je %.15lf\n", z);

    return 0;
}
