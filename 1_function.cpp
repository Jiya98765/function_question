#include<iostream>
using namespace std;

bool prime(int n){
    if (n<2)
    return 0;
    for(int i=2; i<n ; i++){
        if(n%i==0)
        return n," is not prime" ,0;
    }
    return 1;
}

int fact(int n = 5){
    int ans = 1;
    for(int i=1; i<=n ; i++){
        ans = ans * i;

    }
    return ans ;
}

int main()
{
    int a ,b;
    cout<<"enter your numbers:" <<endl;
    cin>>a>>b;

    cout<<prime(a)<<endl;
    cout<<fact(a)<<endl;
    
    cout<<prime(b)<<endl;
    cout<<fact()<<endl;

    cout<<prime(b-a)<<endl;
    cout<<fact(b-a)<<endl;
    
};
