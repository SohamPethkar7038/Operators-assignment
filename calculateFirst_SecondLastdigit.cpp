// program to calculate the first and second last digit of the 5 digit number //


#include <iostream>
using namespace std;
int main()
{
int n, first_digit, second_digit, third_digit, fourth_digit, fifth_digit, sum;
n = 23456;
/*Take out each digit of this number and then finally add the first and the second last digits*/
first_digit = n/10000; //first digit
n = n%10000;
second_digit = n/1000; //second digit
n = n%1000;
third_digit = n/100; //third digit
n = n%100;
fourth_digit = n/10; //fourth digit
fifth_digit = n%10; //fifth digit
sum = first_digit + fourth_digit;
cout << "sum of first and fourth digit is: " << sum << endl;
return 0;
}