#include <iostream>

using namespace std;

//differenx=ce of product of its digit and sum of its digit

int main()
{
    int num;
    cin>>num;

    int product = 1;
    int sum = 0 ;

    while(num != 0)
    {
        int digit = num % 10;

        product = digit * product;
        sum = sum + digit;

        // num = num >> 1;

        num/=10;
    }

    int answer = product - sum;
    cout<< answer;
    return 0;
}
