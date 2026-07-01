#include<iostream>
using namespace std;

//factorial

// int factorial(int n)
// {
//   if(n==0||n==1) return 1;
//   return n*factorial(n-1);
// }
// int main()
// {
//   int n;
//   cin>>n;
//   int res=factorial(n);
//   cout<<res;
// }

//fibbonacci series
// int fibbonacci(int n)
// {
//   if(n==0) return 0;
//   if(n==1) return 1;
//   return fibbonacci(n - 1) + fibbonacci(n - 2);

// }
// int main()
// {
//   int n;
//   cin>>n;
//   int res=fibbonacci(n);
//   cout<<res;
// }


//linear search using recursion
// bool linearSearch(int arr[],int n,int key)
// {
//   if(n==0) return false;
//   if(arr[0]==key) return true;
//   return linearSearch(arr+1,n-1,key);
// }

// int main()
// {
//   int arr[]={1,2,3,4,5,6,7,8,9};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   int key;
//   cin>>key;
//   int result=linearSearch(arr,n,key);
//   cout<<result;
// }

//binary search using recursion
// int binarysearch(int arr[],int s,int e,int key)
// {
//   int mid=s+(e-s)/2;
//   if(s>e) return -1;
//   if(arr[mid]==key) return mid;
// if(arr[mid]<key) return binarysearch(arr,mid+1,e,key); 
// if(arr[mid]>key) return binarysearch(arr,s,mid-1,key); 
// }
// int main()
// {
//   int arr[]={1,2,3,4,5,6,7,8,9};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   int key;
//   cin>>key;
//   int s=0;
//   int e=n-1;
//   int result=binarysearch(arr,s,e,key);
//   cout<<result;
// }

// int main()
// {
// int arr[3][4];
// for(int i=0;i<3;i++)
// {
//   for(int j=0;j<4;j++)
//   {
//     cin>>arr[i][j];
//   }
// }
// for(int i=0;i<3;i++)
// {
//   for(int j=0;j<4;j++)
//   {
//     if(j%2==0)
//     {
//       cout<<arr[i][j]<<" ";
//     };
//   }
// }
// }


// int passing(int arr[][3], int n)
// {
//   for(int i=0;i<n;i++)
//   {
//     for(int j=0;j<3;j++)
//     {
//       if(j%2==0)
//       {
//         cout<<arr[i][j]<<" ";
//       }
//     }
//   }
// }
// int main()
// {
//   int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   int res=passing(arr,n);
//   cout<<res;
// }


//printing numbers from n to 1 using recursion

// void counting(int n)
// {
//   if(n==0)
//   {
//     return; 
//   };
//   cout<<n<<" ";
//   counting(n-1);
  
// }

// int main()
// {
//   int n;
//   cin>>n;
//   counting(n);

// }

int print(int arr[],int n,int i)
{
  if(i==n) return 0;
  cout<<arr[i]<<" ";
  return print(arr,n,i+1);
}
int main()
{
  int arr[]={1,2,3,4,5,6,7,8,9};
  int n=9;
  int i=0;
  int res=print(arr,n,i);
  cout<<res;
}

