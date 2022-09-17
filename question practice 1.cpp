
// class solution
// {
// public:
//     int reverse(int x)
//     {
//         int ans = 0;
//         while (x != 0)
//         {
//             int digit = x % 10;
//             ans = (ans * 10) + digit;
//             x = x / 10;
//         }
//         return ans;
//     }
// }

                                //Switch case

// #include<iostream>
// using namespace std;
// int main(){
//     char ch = '1';
//     cout<<endl;
//     switch (num)
//     {
//     case 1: cout<<"First"<<endl;
        
//         break;
//     case '1': cout<<"character one"<<endl;
//     break;
//     default: cout<<"It is default case"<<endl;
       

//     }

//     cout<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a "<<endl;
    cin>>a;

    cout<<"Enter the value of b "<<endl;
    cin>>b;

    char op;
    cout<<"Enter the operation you want to perform"<<endl;
    cin>>op;

    switch ( op )
    {
    case '+': cout<< (a+b) <<endl;
        break;
    case '-':cout<<(a-b) <<endl;
        break;
    case '*':cout<<(a*b) <<endl;
        break;
    case '/':cout<<(a/b) <<endl;
        break;
    case '%':cout<<(a%b) <<endl;
        break;
    default: cout<< "Please enter a valid Operation "<<endl;
        break;
    }
}