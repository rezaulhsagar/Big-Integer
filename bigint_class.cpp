#include<bits/stdc++.h>
using namespace std;

class BigInt{
public:
    string s;

    BigInt& operator = (string Int){
        s = Int;
    }

    friend istream& operator >> (istream& in, BigInt& data){
        cin>>data.s;
        return in;
    }

    friend ostream& operator << (ostream& out, const BigInt& data){
        cout<<data.s;
        return out;
    }

};

int main(){

    return 0;
}
