#include<iostream>
#include<math.h>
using namespace std;

int count_digit(int n){
    int count_digit = 0;
    while(n){
        count_digit ++;
        n /= 10;    
    }
    return count_digit;
}

bool Armstrong_num(int n ,int digit){
    int num= n ,ans =0,rem;
    while(n){
        rem = n%10;
        n /= 10;
        ans = ans + pow(rem, digit);
    }

    if(ans==n)
    return 1;
    else
    return 0;
}



int main()
{
 int n ;
 cout<<"enter your number:";
 cin>>n;
 int digit = count_digit(n);

 cout<<" total count_digit: "<<digit<<endl;

 cout<<"Armstrong_num: "<<Armstrong_num( n , digit);


};