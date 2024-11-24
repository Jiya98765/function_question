#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}
// void function ka use isliye kiya jaya h jab hame koi bhi specal type ke output ko expect  nahi karta h
void func(){ 
    cout<<"code succsesfully exiqut";
}

int main()
{
    int a ,b,c,d;
    cout<<"enter your number:";
    cin>>a>>b>>c>>d;
    cout<<sum(a,b)<<endl;
    cout<<sum(c,d)<<endl;

    func();

}