#include<iostream>
using namespace std;
int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}
int main(){
    int a,b,c;
    cout<<hcf(4,7)<<endl;
}