// #include <iostream>
// using namespace std;
// int main()
// {
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

// }


//functions
// #include<iostream>
// using namespace std;
    // int func1(int y)
    // {
    //     int ans=y*2;
    //     return ans;
    // }
    // int main()
    // {
    //     cout<<func1(5);
    // }

    // int doubleValue(int &num)
    // {
    //     num*=2;
    //     cout<<"value inside:"<<num<<endl;
    // }
    // int main()
    // {
    //     int x=5;
    //     doubleValue(x);
    //     cout<<"value outside:"<<x<<endl;
    // }
    //if we have to do changes in original value we pass it by reference (with & sign) and when we don't want to change the original value we pass it by value(create copy of it).



//Pointers : special type of variable which stores the address of another variable.(pointer type is same as the type of variable whoes address it holds)
// #include<iostream>
// using namespace std;    
// int main()
// {
//     int a=10;
//     int *ptr=&a;
//     cout<<&a<<endl;   
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;  //dereferencing the pointer to get the value of variable a
//     cout<<*(ptr+1)<<endl;  //giving the garbage value because we are trying to access the next memory location which is not allocated to us.
//     cout<<*ptr+1<<endl;  //gives the value of a+1 because we are dereferencing the pointer and then adding 1 to it.
// }

//memory 
//1. static memory allocation : memory is allocated at compile time and the size of data structure must be known at compile time. (eg: int a=10; int arr[10];)
//2. dynamic memory allocation : memory is allocated at run time and the size of data structure can be changed at run time. (eg: int *ptr=new int; int *arr=new int[n];)


//if we created a pointer it must be initialized with some value or with null.



//class and objects 
//class don't contain any memory space until the object of that class is created.
//constructor : same as class name, no return type, automatically called when object is created, used to initialize the object.

// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int val)
//     {
//         data=val;
//         next=NULL;
//     }
    
// }
// int main()
// {
//     Node *head = new Node(10);
//     return 0;
// }


