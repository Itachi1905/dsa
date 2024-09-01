#include<iostream>
#include<string>
using namespace std;
void reverse(char name[],int n) {
    int s=0;
    int e=n-1;
    while (s<=e) {
        swap(name[s++],name[e--]);
    }
}
int findLength(char name[]) {
    int count=0;
    for (int i = 0; name[i]!=0 ; i++) {
        count++;
    }
    return count;
}
int main() {
    char name[20];
    cin>>name;
    int n;
    n = findLength(name);
    reverse(name,n);
    cout << name<<endl;
    return 0;
}