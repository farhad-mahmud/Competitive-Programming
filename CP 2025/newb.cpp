//---  Bismillahir Rahmanir Rahim ---//

#include <bits/stdc++.h>
using namespace std;

#define int  long long
#define nl       "\n"
#define yes cout << "YES\n";
#define no cout << "NO\n";

const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

void solve ()
{  
    int n ; 
    cin >> n ;

    string x ; 
    cin >> x ;

    if(n % 2 == 1){
        if(x[0] == 'b'){
            no ;
            return ;
        }
    }

    map<char,int> mp ;
    for(auto c : x){
        mp[c]++ ;
    }

    if(n % 2 == 0){

        int needa = n/2 ;
        int needb = n/2 ;

        for(int i=0;i<n-2;i++){
            int j = i +1 ;

            if(j % 2 == 1){

                if(x[i] == 'b'){
                    no ;
                    return ;
                }
                else if(x[i] == '?'){
                    if(needa > mp['a']){
                        x[i] = 'a' ;
                        mp['a']++ ;
                    }
                    else{
                        no ;
                        return ;
                    }
                }

            }
            else {

                if(x[i]== 'a'){
                    no ;
                    return ;
                }
                else if(x[i] == '?'){
                    if(needb > mp['b']){
                        x[i] = 'b' ;
                        mp['b']++ ;
                    }
                    else{
                        no ;
                        return ;
                    }
                }
            }
        }

        string l = "";
        l += x[n-2];
        l += x[n-1];

        if(l == "ab" || l == "ba"){
            yes ;
            return;
        }

        if(x[n-1] == '?' && x[n-2] == '?'){
            if(needa - mp['a'] == 1 && needb - mp['b'] == 1){
                yes ;
            }
            else { no ; }
        }
        else if(x[n-1] == '?'){
            if(x[n-2] == 'a'){
                if(needb > mp['b']) { yes; }
                else { no ; }
            }
            else{
                if(needa > mp['a']) { yes; }
                else { no ; }
            }
        }
        else{
            if(x[n-1] == 'a'){
                if(needb > mp['b']) { yes; }
                else { no ; }
            }
            else{
                if(needa > mp['a']) { yes; }
                else { no ; }
            }
        }

    }
    else {

       
        map<char,int> mp1;
        for(auto c : x) mp1[c]++;

        int needa1 = (n/2)+1;
        int needb1 = n - needa1;

        bool ok1 = true;

        for(int i=0;i<n-2;i++){
            int j = i +1;

            if(j % 2 == 1){ 
                if(x[i] == 'b'){
                    ok1 = false;
                    break;
                }
                else if(x[i] == '?'){
                    if(needa1 > mp1['a']){
                        x[i] = 'a';
                        mp1['a']++;
                    }
                    else{
                        ok1 = false;
                        break;
                    }
                }
            }
            else{ 
                if(x[i] == 'a'){
                    ok1 = false;
                    break;
                }
                else if(x[i] == '?'){
                    if(needb1 > mp1['b']){
                        x[i] = 'b';
                        mp1['b']++;
                    }
                    else{
                        ok1 = false;
                        break;
                    }
                }
            }
        }

        string l1 = "";
        l1 += x[n-2];
        l1 += x[n-1];

        if(l1 == "ab" || l1 == "ba"){
            yes;
            return;
        }

        if(x[n-1] == '?' && x[n-2] == '?'){
            if(needa1 - mp1['a'] >= 1 && needb1 - mp1['b'] >= 1){
                yes;
                return;
            }
        }
        else if(x[n-1] == '?'){
            if(x[n-2] == 'a'){
                if(needb1 > mp1['b']) { yes; return; }
            }
            else{
                if(needa1 > mp1['a']) { yes; return; }
            }
        }
        else{
            if(x[n-1] == 'a'){
                if(needb1 > mp1['b']) { yes; return; }
            }
            else{
                if(needa1 > mp1['a']) { yes; return; }
            }
        }

        map<char,int> mp2;
        for(auto c : x) mp2[c]++;

        int needa2 = (n/2)+1;
        int needb2 = n - needa2;

        bool ok2 = true;

        for(int i=0;i<2;i++){
            if(x[i] == 'b'){
                ok2 = false;
                break;
            }
            else if(x[i] == '?'){
                if(needa2 > mp2['a']){
                    mp2['a']++;
                }
                else{
                    ok2 = false;
                    break;
                }
            }
        }

        if(ok2){
            for(int i=2;i<n-2;i++){

                if(i % 2 == 0){   
                    if(x[i] == 'a'){
                        ok2 = false;
                        break;
                    }
                    else if(x[i] == '?'){
                        if(needb2 > mp2['b']){
                            mp2['b']++;
                        }
                        else{
                            ok2 = false;
                            break;
                        }
                    }
                }
                else{  
                    if(x[i] == 'b'){
                        ok2 = false;
                        break;
                    }
                    else if(x[i] == '?'){
                        if(needa2 > mp2['a']){
                            mp2['a']++;
                        }
                        else{
                            ok2 = false;
                            break;
                        }
                    }
                }
            }
        }

        if(ok2){
            string last2 = "";
            last2 += x[n-2];
            last2 += x[n-1];

            if(last2 == "ab" || last2 == "ba"){
                yes;
                return;
            }
            else if(x[n-2] == '?' && x[n-1] == '?'){
                yes;
                return;
            }
            else if(x[n-2] == '?'){
                if(x[n-1] == 'a' || x[n-1] == 'b'){
                    yes;
                    return;
                }
            }
            else if(x[n-1] == '?'){
                if(x[n-2] == 'a' || x[n-2] == 'b'){
                    yes;
                    return;
                }
            }
            else{
                no;
                return;
            }
        }

        no;
    }

}

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t ;
    cin >> t ;

    while (t--) {
        solve() ;
    }

    return 0;
}