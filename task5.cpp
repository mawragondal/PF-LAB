#include <iostream>
using namespace std;
int main()
{
   int value;
    cin>>value;
   int  digit=1;
   while(value=value/10){
    digit++;

   }
   cout<<digit;
   

}