#include <iostream>
using namespace std;
void factorial(int n,int &f){
    if (n==0){
        f=1;
    }
    else{
        factorial(n-1,f);
        f=f*n;
    }
}
int main()
{
    int x;
    int f;
    cin>>x;
    factorial(x,f);
    cout<<f;
    return 0;
}
