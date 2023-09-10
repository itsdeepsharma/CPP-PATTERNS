#include<iostream> 
#include<math.h>
 using namespace std;

 int main()
{
int n;
cout<<"enter the values"<<endl;
cin>>n;
long ans=1;
long i=0;
while(n!=0)
{
long digit=n  & 1;
ans=(digit * pow( 10 , i) )+ ans ;
n = n >> 1;
i++;
}
cout<<"Answer is  "<<ans<<endl;
}

 