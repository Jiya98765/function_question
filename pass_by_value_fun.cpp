#include<iostream>
using namespace std;
void incr(int &n){ // this is consept of pass by value or use & is pass by refrence 
    n++;
}

int main(){
    int n = 5;
    incr(n);
    cout<<n;
};