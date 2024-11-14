#include <iostream>
using namespace std;
int main()
{
    int nn;
    int sum=0;
    int num=1;
    cout<<"enter a posotive number";
    cin>>nn;
    if(nn<=0){
        cout<<"enter a positive number";
    }
    while(num<=nn){

    
    sum=sum+num;
    num++;
  
   
}
  cout<<"sum is"<<sum;
return 0;
}