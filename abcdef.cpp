#include<iostream> 
 using namespace std;
 int main()
{
 int n;
cin>>n;
 int i=0;
char value='a';
 while(i<n)

{
 int j=0;

while(j<n)
{
 
 value++;

j=j+1;
cout<<value;
}
 cout<<endl;
i=i+1;
}
}