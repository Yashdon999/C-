#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<string> s;

   s.push("Love");
   s.push("You");
   s.push("YASH"); 

   cout<<"Top Element -> "<<s.top()<<endl;

   s.pop();
   cout<<"Top Element -> "<<s.top()<<endl;

   cout<<"Size of the Element is -> "<<s.size()<<endl;

   cout<<"Empty or not "<<s.empty()<<endl;
}