#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int p=-1;
    int imp=-1;
    int b=0;
    int a;
    fstream f;
    f.open("input.txt");
    while(!f.eof()){
        f>>a;
        if(a%2==0){
            if(p==-1){
                p=a;
            }
            else{
                if(p<=a){
                    b=1;
                    break;
                }
            }
        }
        else{
            if(imp==-1){
                imp=a;
            }
            else{
                if(imp>=a){
                    b=1;
                    break;
                }
            }
        }
    }
    if(b==0){
        cout<<"DA";
    }
    else{
        cout<<"NU";
    }
}