#include<iostream>
#include<math.h>
using namespace std;

int count_fun(int &row,int &column ){
    int count_total_M = 0;

    count_total_M += min(8-row,8-column);
    count_total_M  += min(8-row,column-1);
    count_total_M  += min(row-1,column -1);
    count_total_M  += min(row-1,8-column);

    cout<<count_total_M <<endl;   
}

int main()
{
  int row,column;
  cout<<"entr your row and column :";
  cin>>row>>column;

  if(row>=1 && row<=8 && column>=1 && column<=8){
     count_fun( row, column) ;

  }

  else 
  cout<<"invelad number pair";
 

// chasse game me bishop ki move count 

 

};