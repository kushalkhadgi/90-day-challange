
#include <iostream>
using namespace std;


// Efficient method to calculate bit

int main()
{
    int num;
    cin>>num;

    int i=0;
    int answer[100];
    while(num != 0)
    {
        int digit = num % 2;
        answer[i]=digit;
        num/=2;
        i++;
    }
    i--;
    while(i>=0)
    {
        cout<<answer[i];
        i--;
    }
    return 0;
}

//Alternative method
/*
int main()
{
    int num;
    cin>> num;
    int answer = 0;
    int i=0;
    while(num>0)
    {
        // num = num%10;
        int bit = num &1;
        answer = (bit * pow(10 , i)) + answer;
        num=num>>10;
        i++;
    }
    cout<<answer;
    return 0;
}
*/
