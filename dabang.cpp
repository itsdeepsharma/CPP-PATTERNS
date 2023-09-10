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
while(j<=n-i+1)
{
cout<<j;
j=j+1;
}


//2nd triangle
 
 int star=i-1;
	while(star)
{
 cout<<"*";
star=star-1;
}

//3rd triangle star
int star2=i-1;
while(star2)
{
 cout<<"*";
star2=star2-1;
}
 

 //4th triangle
int j2=n-i+1;
while(j2)
{
cout<<j2;
j2=j2-1;
}
 






 cout<<endl;
i=i+1;
}



//yha s dusra pattern start hoga bro

 int p=n;
while(p>=1)
{
 int j=1;
while(j<=n-p+1)
{
cout<<j;
j=j+1;
}


//2nd triangle
 
 int star=p-1;
	while(star)
{
 cout<<"*";
star=star-1;
}

//3rd triangle star
int star2=p-1;
while(star2)
{
 cout<<"*";
star2=star2-1;
}
 

 //4th triangle
int j2=n-p+1;
while(j2)
{
cout<<j2;
j2=j2-1;
}

/////////y kcuh alg krna hai yha se mujh


 

////////////yha s or star print krna hai aaj to





 cout<<endl;
p=p-1;
}







}
