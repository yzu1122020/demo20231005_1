/ ***  
  *  hw 20231005
  *  @author:1122020
  ***  name:鍾佑澤/
#include <iostream>
using namespace std;
int Fib(int n)
{
    if Fib(1==n)
      return 1;
    else
      return Fib(n-1)+n; 
}
int main()
{
    cout<<Fib(1)<<endl;
    cout<<Fib(2)<<endl;
    cout<<Fib(3)<<endl;
    cout<<Fib(4)<<endl;
    cout<<Fib(5)<<endl;
   return 0;
}
