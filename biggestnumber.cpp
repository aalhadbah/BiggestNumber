//Author:abdulaziz alhadbah
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
  int first,second;  //declaring whole number


  cout<<"Please enter a whole number:\n";
cin>> first; 
   //storing variables

  
  cout<<"Please enter another whole number:\n";
cin>> second;
    //storing variables

  //cout<<"Of those two numbers, the biggest is: ";
  
    if( first > second) {
    cout<< "Of those two numbers, the biggest is: "<<first;
    cout<<endl;
}
   
   else {
    cout<<"Of those two numbers, the biggest is: "<<second;
    cout<<endl;
    } 
   


  cout<<endl<<"Thank you for playing.\n";

  return 0;
}
