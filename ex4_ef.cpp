#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int a;
    int lm=0;
    int l=0;
    int c=0;
    fstream f;
    f.open("input.txt");
    while(!f.eof()){
        f>>a;
        if(a%2==0){
            l++;
        }
        else{
            if(lm<l){
                lm=l;
                c=0;
            }
            if(lm==l){
                c++;
            }
            l=0;
        }
    }
    if(lm<l){
        l=lm;
        c=0;
    }
    if(lm==l){
        c++;
    }
    cout<<c;
}