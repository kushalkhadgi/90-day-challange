
#include<iostream>
using namespace std;

int main()
{
    int number = 10;
    for(int i=0; i<number; i++)
    {
        for(int j=0; j<(number-i); j++)
        {
            cout<<"*";
        }
        
        for(int z=0; z<i; z++)
        {
            cout<<"  ";
        }
        
        for(int j=0; j<(number-i); j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
