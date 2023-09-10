#include<iostream>
 using namespace std;
 int main()
{
 int n;
cin>>n;
 int i=1;

while(i<=n)
{
int j=1;
int space=i-1;
while(space)
{
space=space -1;
cout<<" ";

}
while(j<=n-i)
{
 cout<<i;

j=j+1;
}
cout<<endl;
i=i+1;
}
}