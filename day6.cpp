#include<math.h>
#include <iostream>

using namespace std;

int factorial(int num)
{
    int fact =1;
    int i=1;
    while(i<=num){
        fact=fact*i;
        i++;
    }
    return fact;
}

int calculate(int n, int r)
{
    int numerator = factorial(n);

    int denominator = factorial(r) * factorial(n-r);

    return numerator/denominator;
}

int main()
{
    int n, r;
    cin>>n>>r;

    cout<<n<<"C"<<r<<" = "<<calculate(n,r);
}
