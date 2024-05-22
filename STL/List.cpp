#include<iostream>
#include<list>
using namespace std;
int main() {
    list<int> l;
    list<int> n(5,100);
    l.push_back(1);
    l.push_front(2);

    cout<<"Printing n"<<endl;
    for(int i:n) cout<<i<<" ";
    l.erase(l.begin());
    cout<<endl<<"After Erase"<<endl;
    for(int i:l) cout<<i<<" ";
    cout<<endl<<"Size of List -> "<<l.size()<<endl;
}