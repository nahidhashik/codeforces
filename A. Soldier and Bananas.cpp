#include<iostream>

using namespace std;

int main()
{

int k,n,w,sum=0;

cin>>k>>n>>w;

for(int i=1;i<=w;i++)
{
  sum+=k*i;

}

int result;

result=(sum-n);


if(result<0) result=0;
cout<<result<<endl;


return 0;
}
