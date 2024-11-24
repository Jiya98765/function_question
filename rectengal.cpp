#include<iostream>
using namespace std;

bool rectengal_fun(int a,int b,int c,int d){
    if((a==b && c==d) || (a==c && b==d) ||(a==d && c==b)){
        return 1;
    }
    else
    return 0;
}

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    cout<<rectengal_fun(a,b,c,d)<<endl;

}