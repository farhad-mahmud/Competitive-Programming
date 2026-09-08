#include <iostream>
#include <string>

using namespace std;

int count_zero_bits(const string& s) {
    int cnt = 0;
    for (char c : s) {
        int v = (c >= '0' && c <= '9') ? (c - '0') : (tolower(c) - 'a' + 10);
        for (int i = 0; i < 4; i++) {
            if (!(v & (1 << i))) cnt++;
        }
    }
    return cnt;
}

int main() {

    string sha256_hash = "f9295db2b0c6983cbc0ebf857137b57924f2aa03150655bdab80dfa9af76d5bd";
    string sha512_hash = "2fd111f4fb18b00d360274987151f92a5933788ececdf5fb2234f03f877ed92623669d3f235c74144edd8d86918f91bcef1eed7ddd139ffa1a7e39c6d82400fb";
    string md5 = "5cb5bd15035f4ca943f10c60e9ec7dd9";
    cout << count_zero_bits(sha256_hash) << endl; 
    cout << count_zero_bits(sha512_hash) << endl; 
    cout << count_zero_bits(md5) << endl; 


    int cnt_zero = 0 ;

    for(int i=0;i<sha256_hash.size();i++){
           if(sha256_hash[i] == '0'){
                    cnt_zero++ ;
           }
    }

    cout << cnt_zero << endl; 
    return 0;
}