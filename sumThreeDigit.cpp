// calculate sum of the three digit number //

#include<iostream>
using namespace std;
int main(){
    int num;
    int first_digit,second_digit,third_digit;
    cout<<"enter the three digit number :";
    cin>>num;
    first_digit=num/100;
    num=num%100;
    second_digit=num/10;
    num=num%10;
    third_digit=num%10;
    int sum=first_digit+second_digit+third_digit;
    cout<<"sum of the three digit number is :"<<sum<<endl;
    return 0;
    
}