#include <iostream>
using namespace std;

char toLoverCase(char ch){
    if (ch>= 'a' && ch<= 'z')
    return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
    
}

bool checkPalindrome(char a[], int n){
    int s = 0;
    int e = n-1;

    while (s<=e)
    {
        if(toLoverCase(a[s] ) != toLoverCase( a[e]))
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;

}

void reverse(char name[], int n){
    int s=0;
    int e= n-1;

    while (s<e)
    {
        swap(name[s++], name[e--]);
    }
    
}

int getLength(char name[]){

    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
    
}

int main()
{
    char name[20];

    cout << "Enter your name" << endl;
    cin >> name;
    // name[2] = '\0';

    cout << "Your name is ";
    cout << name << endl;
    int len= getLength(name);
    cout<<"Length "<< len<<endl;

    reverse(name,len);
    cout<<"Your name is ";
    cout<<name<<endl;

    cout<<"Palindrome or not "<<checkPalindrome(name,len)<<endl;

    cout<<"Character is "<<toLoverCase('b')<<endl;
    cout<<"Character is "<<toLoverCase('c')<<endl;

    return 0;
}