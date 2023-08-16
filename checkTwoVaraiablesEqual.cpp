// program to take values of two variables a and b from the keyboard and t
// then check the condition 1. a<50    2. a<b    are true 

#include<iostream>
using namespace std;
int main()
{
int var1,var2;
cout << "Enter the first number : ";
cin >> var1;
cout << "Enter the second number : ";
cin >> var2;
cout<< ((var1 < 50) && (var1 < var2))?1:0;
return 0;
}

