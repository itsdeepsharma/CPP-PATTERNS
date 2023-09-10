#include<iostream>
//#include<math.h>

 using namespace std;
 int main()
{
 long n;
cout<<"Enter the values"<<endl;

 long ans=0;
cin>>n;
long digit=0;


while(n!=0)
{
digit=n&1;
ans= (digit*10)+digit;
n=n>>1;
digit++;

}
cout<<"Answer is  "<<ans<<endl;
}


