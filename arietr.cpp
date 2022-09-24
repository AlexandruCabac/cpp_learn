#include <iostream>
#include <cmath>
using namespace std;
float dis(int q, int w, int e, int r){
    return sqrt(pow(q-e,2)+pow(w-r,2));
}
float arie(float a, float b, float c){
    float sp=(a+b+c)/2;
    return sqrt(sp*(sp-a)*(sp-b)*(sp-c));
}
int main(){
    int ax,ay,bx,by,cx,cy,px,py;
    cin>>ax>>ay>>bx>>by>>cx>>cy>>px>>py;
    float st,s1,s2,s3;
    const float eps=0.0001;
    float ab=dis(ax,ay,bx,by);
    float ac=dis(ax,ay,cx,cy);
    float bc=dis(bx,by,cx,cy);
    float ap=dis(ax,ay,px,py);
    float cp=dis(cx,cy,px,py);
    float bp=dis(bx,by,px,py);
    st=arie(ab,ac,bc);
    s1=arie(ab,ap,bp);
    s2=arie(ac,ap,cp);
    s3=arie(bc,bp,cp);
    float sp=s1+s2+s3;
    if (fabs(st-sp)<eps){
        if(s1==0||s2==0||s3==0){
            cout<<"Pe contur";
        }
        else{
            cout<<"In interior";
        }
    }
    else {
        cout<<"In exterior";
    }
}
