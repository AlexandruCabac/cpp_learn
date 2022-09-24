#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int x=1;
    int a,n;
    fstream f;
    f.open("numere.txt");
    f>>n;
    while(!f.eof()){
        f>>a;
        for(int i=x;i<a;i++){
            cout<<i<<" ";
        }
        x=a+1;
    }
    for(int i=x;i<=n;i++){
        cout<<i<<" ";
    }
}