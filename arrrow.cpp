#include<iostream>
using namespace std;
 int main()
{

cout<<"Enter the number "<<endl;
 int n;
 cin>>n;
 
for(int i=1;i<=n;i++)
{
	
for(int p=1;p<=n-i;p++)
{
cout<<" ";

          }  

 for(int j=1;j<=i;j++)
{																			
             
  cout<<" *";
  
}




cout<<endl;
}


for(int i=n;i>=1;i--)
{
	
for(int p=1;p<=n-i;p++)
{
cout<<" ";

          }  

 for(int j=1;j<=i;j++)
{																			
             
  cout<<" *";
  
}





cout<<endl;




}
}
