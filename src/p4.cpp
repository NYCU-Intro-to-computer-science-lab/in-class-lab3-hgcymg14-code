// 題目 4：遞迴的足跡 (Footsteps of Recursion) - 30分

#include <iostream>
using namespace std;

void tab(int d) {
    if (d == 0) return;
    cout << "|--";
    tab(d - 1);
}

int f(int n, int d){
    tab(d);
    cout<<"SEARCH fib("<<n<<")\n";

    if (n==1||n==2){
        tab(d);
        cout<<"GET fib("<<n<<")=1\n";
        return 1;
    }

    int x=f(n-1,d+1);
    int y=f(n-2,d+1);
    int z=x+y;

    tab(d);
    cout<<"GET fib("<<n<<")="<<z<<"\n";

    return z;
}

int main(){
    int n;
    cin>>n;

    int ans=f(n,0);
    cout<<ans<<"\n";

    return 0;
}
