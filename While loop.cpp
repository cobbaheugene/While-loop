#include <iostream>
using namespace std;

int main(){
    int a=0, sum=0;
    while(a!=10){
        if(a%2==0){
            sum+=5;
        }
        else{
            sum-=2;
            a++;
        }
        cout<<sum;
    }
    return 0;
}
