#include <iostream>
#include <queue>

using namespace std;

int main()
{

    queue<string> q;

    q.push("Love");
    q.push("You");
    q.push("YASH");

    cout<<"Size before pop"<<q.size()<<endl;

    cout<<"First element"<<q.front()<<endl;
    q.pop();
    cout<<"First Element"<<q.front()<<endl;

    cout<<"Size is "<<q.size()<<endl;
}