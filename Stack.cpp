#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<string> s;

    s.push("love");
    s.push("babbar");
    s.push("kumar");

    cout<<"Top Element->"<<s.top()<<endl;
    s.pop();
    cout<<"Top Element->"<<s.top()<<endl;
    cout<<"Size of Stack->"<<s.size()<<endl;
    cout<<"Empty or Not "<<s.empty()<<endl;
}