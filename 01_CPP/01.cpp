#include <iostream>
using namespace std;
int main()
{
    // int marks;
    // int leaves;
    // cin>>marks>>leaves;
    // if(marks>50 && leaves>10)
    // {
    //     cout<<"pass";
    // }
    // else
    // {
    //     cout<<"fail";
    // }

    //switch 
    // char grade;
    // cin>>grade;
    // switch(grade)
    // {
    //     case 'A':
    //         cout<<"Excellent"<<endl;
    //         break;
    //     case 'B':
    //         cout<<"Good"<<endl;
    //         break;          
    //     case 'C':
    //         cout<<"Average"<<endl;
    //         break;
    //     default:
    //         cout<<"Invalid grade";
    // }

    //ternary operator
    // int x,y;
    // cin>>x>>y;
    // int max = (x>y) ? x : y;
    // cout<<"max is "<<max;

    // int i=0;
    // while(i<5)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    //hollow rectangle
    int n=5;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0||i==4 ||j==0||j==4)
            {
                cout<<" *";
        
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}