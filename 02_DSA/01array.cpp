// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
  // int arr[5]={1,2,3,4,5};
  // for(int i=0; i<5; i++)
  // {
  //   cout<<arr[i]<<endl;
  // }
  // for(auto x:arr)
  // {
  //   cout<<x<<endl;
  // }

  //vectors
  
  // vector<int>arr={1,2,3,4,5};
  // arr.push_back(6);
  // for(auto x:arr)
  // {
  //   cout<<x<<endl;
  // }
  // arr.pop_back();
  // for(auto x:arr)
  // {
  //   cout<<x<<endl;
  // }
  // int n=arr.size();
  // cout<<n<<endl;
  // arr.clear();
  // for(auto x:arr)
  // {
  //   cout<<x<<endl;
  // }

  

// }

#include<iostream>
using namespace std;  
int checkElement(int arr[],int size,int key)
{
  for(int i=0;i<size;i++)
  {
    if(arr[i]==key)
    {
      if(key>20)
      {
        return key*2;
      }
      else
      {
        return key/2;
      }
    }
  }
  return -1;
}
int main()
{
  int arr[]={12,32,55,1,26,53,78};
  int size=7;
  int key=53;
  int res=checkElement(arr,size,key);
  cout<<res<<endl;

}