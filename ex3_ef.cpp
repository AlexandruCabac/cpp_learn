#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int n,m,p1,p2,a1,a2;
    int b=0;
    int c=2;
    fstream f;
    f.open("bac.txt");
    f>>n>>m>>p1;
    while(n>1){
        n--;
        f>>p2;
    }
    f>>a1>>a2;
    while(m>2 && b==0){
        if(a1<p1 && p2<a2){
            b=1;
            break;
        }
        else{
            a1=a2;
            f>>a2;
            c++;
        }
        m--;
    }
    cout<<a2<<endl;
    if(b==1){
        cout<<c;
    }
    else{
        cout<<"Imposibil";
    }
}