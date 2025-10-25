//---  Bismillahir Rahmanir Rahim ---//

//------------------------------//
//        Author: Farhad       //
//------------------------------//

#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n"

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end()
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;

// constrains
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

int a[N] ;

auto bny(int x) {

	bitset<80>bs(x) ;

	auto s = bs.to_string() ;
	return s ;
}



void solve ()
{

	int x ; cin >> x;
	int msb = __lg(x) ;

	string s = bny(x) ;

	reverse(all(s)) ;

	string ss = "" ;

	for (int i = 0; i <= msb; i++) {
		ss += s[i] ;
	}
	reverse(all(ss)) ;
	// cerr << ss << nl;

	int n = ss.size() ;

	// cerr << ss << nl ;

	string kk = ss ;
	string pp = ss;

	reverse(all(pp)) ;

	if (kk == pp) {
		cout << x << nl;
		return ;
	}


	//cerr << ss << nl ;

	int ans = 0 ;

	if (n & 1) {



		int mid = n / 2 ;

		int l = mid - 1 ;
		int r = mid + 1;

		//cerr << l << nl ;
		//cerr << r << nl ;

		while (l >= 0) {

			if (ss[l] == ss[r]) {
				l-- ;
				r++ ;
			}
			else {

				ss[l] = '1' ; ss[r] = '1' ;

				int a = stoll(ss, nullptr, 2);

				//cout << a << nl ;

				if (a >= x) {

					ss[mid] ^= 1 ;

					a = stoll(ss, nullptr, 2);

					if (a >= x) {

						ss[l] = '0'  ; ss[r] = '0' ;
					}

				}

				a = stoll(ss, nullptr, 2);
				//cout << a << nl;
				r++ ;
				l-- ;
			}
		}

		ans = stoll(ss , nullptr, 2) ;


	}
	else {

		int mid = (n + 1) / 2 ;

		int l = mid - 1 ; int  r = mid ;


		while (l >= 0) {

			if (ss[l] == ss[r]) {
				l-- ;
				r++ ;
			}
			else {

				ss[l] = '1' ; ss[r] = '1' ;

				int a = stoll(ss, nullptr, 2);

				// cout << a << nl ;

				if (a >= x) {

					ss[l] = '0'  ; ss[r] = '0' ;
				}

				a = stoll(ss, nullptr, 2);
				// cout << a << nl;
				r++ ;
				l-- ;
			}
		}
		ans = stoll(ss , nullptr, 2) ;
	}




	cout << ans << nl;





}

int32_t main() {
	ios_base:: sync_with_stdio(0);
	cin.tie(0);

	int t = 1 ;

	//cin >> t ;

	while (t--) {

		solve() ;

	}


	return 0;
}
