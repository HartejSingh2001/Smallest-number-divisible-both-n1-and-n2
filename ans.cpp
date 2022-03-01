#include <iostream>

using namespace std;

int main()
{
   int n1=2,n2,temp;
   cout<<"Enter n ";
   cin>>n2;
   while(n1!=n2)// calculating gcd(n1,n2)=n1(after the calculation of n1 through while loop)
   {
       if(n1>n2)
       {
           n1=n1-n2;
       }
       else
       {
           n2=n2-n1;
       }
   }
   cout<<(n1*n2)/n1;
   

    return 0;
}
