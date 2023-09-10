#include<iostream>
 using namespace std;
int main()
{
 cout<<"enter the values"<<endl;
 int n=1;
 cin>>n;
int row=1;
int start=1;
 while(row<=n)
{
 int colm=1;

 while(colm<=n)
{
  start=row+colm-2;
cout<<start;

colm=colm+1;
}
cout<<endl;
row=row+1;
}

}
 