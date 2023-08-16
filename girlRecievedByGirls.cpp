// There are 45 total pupils in the class, 25 of whom are boys.
// Write a program to find how many girls
// received grades "A" if 17 boys made up 80% of the 
//students that received grades


#include<iostream>
using namespace std;
int main()
{
int Total, Boys, Girls;
Boys = 17;
Total = (80*45)/100; //total students getting grade A
Girls = Total - Boys; //total number of girls getting grade A
cout << "Number of girls who passed with grade A is := " << Girls << endl;
return 0;
}