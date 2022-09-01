//Program to print the multiplication for the given number
/*
----algorithm---
1. declare the variables (n,i)
2. Get the input from the user as n
3. multiple n*i using for loop
            for(i=0;i<=10;i++)
            then ---> n*i;
4. print the result
5. end of algorithm.
*/

#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<< "Enter the table number:";
    cin>>n;
    for(i=0;i<=20;i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<"\n";
    }
    return 0;
}