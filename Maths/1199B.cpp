#include<bits/stdc++.h>
using namespace std;

int main(){
    int h,l;
    cin>>h>>l;
    float R=(pow(h,2)+pow(l,2))/(2*h);
    printf("%.10f",R-h);
}