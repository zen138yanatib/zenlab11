#include<iostream>
using namespace std;

int gcd(int x,int y);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}
int gcd(int x,int y){
    int ans;
    if(x%y == 0){
        ans = y;
        return ans;
    }else{
        ans = gcd(y,x%y);
        return ans;
    }
}
