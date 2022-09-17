#include<iostream>
#include<map>

using namespace std;
int main(){
    map<int,string> m;

    m[1]="Mai";
    m[13]="Kon";
    m[2]="Hu";

    m.insert({5,"YaBoi"});

    cout<<"Before erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding -13-> "<<m.count(-13)<<endl;

    m.erase(13);
    cout<<"after erase "<<endl;
     for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(5);

    for (auto i = it; i != m.end(); i++)
    {
        cout<<(*i).first<<endl;
    }
    

}