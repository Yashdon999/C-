// #include<iostream>
// using namespace std;

// void dummy(int n)p{

//     n++;
//     cout<<"n is "<<n <<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     dummy(n);
//     cout<<"number n is"<<n<<endl;
//     return 0;
// }

/////////////array

#include <iostream>
using namespace std;

// HOLD
void printArray(int arr[], int size)
{
    cout<<"Printing the array"<<endl;
    //print in array
      for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
       cout<<"Printing done"<<endl;
    
}
int main()
{

    // declare
    int number[15];


    // accessing an array
    cout << "Value ar 14 index" << number[14] << endl;

    // cout<<"Value ar 20 index"<<number[20]<<endl;

    // initalising an array
    int second[3] = {5, 7, 11};

    // accesing an element
    cout << "Value at 2 index" << second[2] << endl;

    int third[15] = {2, 7};

    int n = 15;
    printArray(third, 15);
    // print the array
    for (int i = 0; i < n; i++)
    {
        cout << third[i] << " ";
    }

 //initialising all location with 0
    int fourth[10] = {0};

    n = 10;
    // printArray(fourth, 15);
    

     //not possible with below line
    int fifth[10] = {1};

    n = 10;
    // printArray(fifth, 10);


    char ch[5] = {'a', 'b', 'c', 'r', 'p'};
    cout<<ch[5]<<endl;
    printArray(ch);


    cout << endl
         << "Everything is fine " << endl
         << endl;

    return 0;
}
