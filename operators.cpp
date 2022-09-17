// #include<iostream>
// using namespace std;
// int main(){
//     int a = 4;
//     int b = 6;

//     cout<<" a&b "<< (a&b) <<endl;
//     cout<<" a|b "<< (a|b) <<endl;
//     cout<<" ~a "<< (~a) <<endl;
//     cout<<" a^b "<< (a^b) <<endl;

//     cout<<(17>>1)<<endl;
//     cout<<(17>>2)<<endl;
//     cout<<(19<<1)<<endl;
//     cout<<(21<<2)<<endl;

//     int i = 7;

//     cout<<(++i)<<endl;
//     // 8
//     cout<<(i++)<<endl;
//     // 8  i = 9;
//     cout<<(i--)<<endl;
//     // 9 , i=8;
//     cout<<(--i)<<endl;
//     // 7 , i = 7;

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b = 1;
//     a = 10;
//     if (++a)
//     {
//         cout << b;
//     }
//     else
//     {
//         cout << ++b;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 3;
//     cout<<(25 * (++n));
// }

// for loop

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;

//     cout << "Printing cout form 1 to n" << endl;

//     for (int i = 1; i <= n; ++i)
//     {
//         cout << i << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;

//     int sum = 0;

//     for (int i = 1; i <=n; i++)
//     {
//         // sum = sum + i;
//         sum += i;
//     }
//     cout<<sum<<endl;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 10;
//     int b = 1;
//     int a = 0;
//     cout<<a<<" "<<b<<" ";

//     for (int i = 1; i <=n; i++)
//     {
//         int nextnumber = a + b;
//         cout<<nextnumber<<" ";

//         a = b;
//         b = nextnumber;
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    bool isPrime = 1;

    for (int i = 2; i <= n; i++)
    {
        // rem = 0; not a prime no
        if (n % i == 0)
        {

            // cout<<"Not a prime no "<<endl;
            isPrime = 0;
            break;
        }

        if (isPrime == 0)
        {
            cout << "Not a prime no" << endl;
        }
        else
        {
            cout << "is a prime no" << endl;
        }
    }
}