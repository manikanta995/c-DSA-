#include<iostream>
using namespace std;


int main()

  /* numeric, lowercase and upper case
  {
  char ch;
  cout<<"enter your value:"<<endl;
  cin>>ch;

  if(ch>=48 && ch<=57){
   cout<<"value is numeric"<<endl;
  }
  else if (ch>=97 && ch<=122)
  {
   cout<<"value is lowercase"<<endl;
  }c
  else if(ch>=65 && ch<=90)
  {
   cout<<"value is Uppercase"<<endl;
  }
  
}

*/

// no is prime or not prime
{
  int n;
  cin>> n;

  int i = 2;

  while(i<n){
   if (n%i ==0)
   {
    cout<<"not prime for "<< i << endl;

   }
   else{
    cout<<"prime" << i << endl;
   }
   i = i + 1;
  }
}



