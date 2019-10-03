#include<bits/stdc++.h>
using namespace std;
int main()
{
 int i,j,n,k,a,max1,cursum;
 vector<int> v;
 cout<<"Enter no. of elements:";
 cin>>n;
 for(i=0;i<n;i++)
 {
  cin>>a;
  v.push_back(a);
 }
 max1=v[0];
  for(i=0;i<n;i++)
  {
   for(j=i;j<n;j++)
   {
    int cursum=0;
    for(k=i;k<=j;k++)
    {
     cursum +=v[k];
    }
    if(cursum>max1)
     max1=cursum;
   }
  }
  cout<<max1<<endl;
}
