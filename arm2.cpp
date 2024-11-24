#include<iostream>
#include<math.h>
using namespace std;

int count_digit(int num){
    int count = 0;
    while(num){
        count++;
        num/=10;
    }
    return count ;

}

bool Armstrong_num(int num ,int digit){
    int n = num , ans=0 , rem ;
    while(n){
         rem = n%10;
         n/=10;
         ans = ans +pow(rem, digit );
    }
    return ans ;
}



int main()
{
    int num ;
    cout<<"enter your number: ";
    cin>>num;

    int digit = count_digit(num);
    cout<<digit<<endl;

    cout<<Armstrong_num(num,digit)<<endl;

};