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
int fibbonacci(int n)
{
  if(n==0) return 0;
  if(n==1) return 1;
  return fibbonacci(n - 1) + fibbonacci(n - 2);

}
int main()
{
  int n;
  cin>>n;
  int res=fibbonacci(n);
  cout<<res;
}