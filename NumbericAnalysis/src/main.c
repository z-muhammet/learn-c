#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int calc = 0;

int calculeFirst(int a,int b, int c, int d, double x1, double x2){
    double result1 = (a*pow(x1,3))+(b*pow(x1,2))+(c*x1)+d;
    double result2 = (a*pow(x2,3))+(b*pow(x2,2))+(c*x2)+d;

    if (result1 * result2 < 0)
    {
        printf("x1 = %lf\n x2 = %lf\n noktalarında 0 var",x1,x2);
       return 0;
    }
        else if (fabs(x1-x2)< 0.000001) {
            printf("fonksiyon bolzano teoremine göre çözülemiyor");
        return 1;
    } 
    else
    {
        return calculeFirst(a,b,c,d,x1,(x1+x2)/2);
    }
}
int main(int argc, char const *argv[])
{
        // Test etmek için örnek değerler
    int a = 1, b = 0, c = -1, d = -1;
    double x1 = 2, x2 = 4;
    calculeFirst(a, b, c, d, x1, x2);
    return 0;
}
