#include<iostream>
using namespace std;

int trailingZeros(int n){
    int count = 0;
    while(n){
        count += n/5;
        n/=5;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<trailingZeros(n)<<endl;

};