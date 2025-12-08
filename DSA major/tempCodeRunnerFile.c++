#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3,largest;
    cout << "Enter three numbers: "<<endl;
    cin>> num1 >> num2 >> num3;
    
    if(num1 >= num2 && num1 >= num3)
    {
        largest = num1;
        cout<< "largest number is: "<< largest<< endl;
    }
    else if(num2 >= num1 && num2 >= num3)
    {
        largest = num2;
        cout<< "largest number is: "<< largest<< endl;
    }
    else
        {largest = num3;
        cout<< "largest number is: "<< largest<< endl;}
     return 0;
}