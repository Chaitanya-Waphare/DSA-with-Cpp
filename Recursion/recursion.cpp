#include<iostream>
#include<vector>
using namespace std;

int factorial(int n) {
    if(n == 0) {
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main()
{
    /* code */
    int n;
    cin>>n;
    int ans = factorial(n);
    cout << ans << endl;
    return 0;
}