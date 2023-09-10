#include<iostream>
 using namespace std;
 int main()
{
 int n;
cin>>n;
 int i=0;

while(i<=n)
{
int j=0;
int space=i-1;
while(space)
{
space=space -1;
cout<<" ";

}
while(j<=n-i)
{
 cout<<"*";

j=j+1;
}
cout<<endl;
i=i+1;
}
}