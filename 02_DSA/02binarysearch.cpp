//finding square root of a number using binary search
#include<iostream>
#include<vector>
using namespace std;
int squareroot(vector<int> arr, int key)
{
  int n=arr.size();
  int s=0;
  int e=n-1;
  int ans=-1;
  while(s<=e)
  {
    int mid=s+(e-s)/2;
    if(mid*mid==key)
    {
      return mid;
    }
    else if(mid*mid>key)
    {
      e=mid-1; 
    }
    else{
      ans=mid;
      s=mid+1;
    }
  }
  return ans;
}
int main()
{
  vector<int>arr={1,2,3,4,5,6,7,8,9,10};
  int key=22;
  int res=squareroot(arr,key);
  cout<<res<<endl;

  int precision;
  cin>>precision;

  double step=0.1;
  double ans=res;
  for(int i=0;i<precision;i++)         //this loop go for the given  precision value
  {
    for(double j=ans;j*j<key;j+=step)  //this loop check the precise value true or not
    {
      ans=j;
    }
    step/=10;                      // break down the precision till the precison value.
  }
  cout<<ans<<endl;
}

