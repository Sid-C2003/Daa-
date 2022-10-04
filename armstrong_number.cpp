#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int n,count=0,initial,i2,digit,digit1,arm=0;
    cout<<"enter n :";
    cin>>n;
    initial = n;
    i2=n;
    while(n>0){
        digit=n%10;
        n=n/10;
        count++;
    }
    while(i2>0) {
        digit1=i2%10;
        arm=arm +pow(digit1,count);
        i2=i2/10;
    } 
    if(arm==initial){
        cout<<"armstrong number";
    }
    else{
        cout<<"not an armstrong number";
    }
    return 0;
}