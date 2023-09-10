#include<iostream> 
 using namespace std;
 int main()
{
 cout<<"value"<<endl;
 int n;
cin>>n;
char ch='a';
 int row=1;
 while(row<=n)
{
 int col=1;
 while(col<=n)
{
 char ch ='A'+col-1;
cout<<ch;
 col=col+1;

}
 cout<<endl;
 row=row+1;
}
}
 
