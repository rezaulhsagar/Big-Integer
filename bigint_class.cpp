#include<bits/stdc++.h>
using namespace std;

class BigInt{
public:
    string s;

    friend ostream& operator << (ostream& out, const BigInt& data){
        cout<<data.s;
        return out;
    }

};

int main(){
    BigInt b;
    b.s = "asdf";
    cout<<b<<endl;

    return 0;
}
