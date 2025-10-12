/*
  In the name of Allah, the Most Gracious, the Most Merciful.
*/
//ceil : (a + b - 1) / b
#include <bits/stdc++.h>
using namespace std;

#define nl          '\n'
#define int         long long int
#define all(x)      x.begin(), x.end()
#define allr(x)     x.rbegin(), x.rend()
#define print(x)    for (auto u : x) cout << u << ' '
#define trace(x)    cout << #x << ": " << x << " \n";

const int N = 1e6 + 5;
int d[N];

/*
-------- Bit Stuffs (GCC Built-in) --------
Count of set bits                 => __builtin_popcount(x) / __builtin_popcountll(x)
Count of leading zeros            => __builtin_clz(x) / __builtin_clzll(x)
Count of trailing zeros           => __builtin_ctz(x) / __builtin_ctzll(x)
Index of Lowest SET bit (0-based) => __builtin_ffs(x) - 1 / __builtin_ffsll(x) - 1
Index of Lowest UNSET bit         => __builtin_ffs(~x) - 1 / __builtin_ffsll(~x) - 1
Index of Highest SET bit          => __lg(x)
Check Power of Two                => __builtin_popcountll(x) == 1
*/
// int decimalValue = std::stoi(binaryString, nullptr, 2); // The '2' indicates base 2 (binary)
// msb position of a number n is __lg(n)
/*
print the binary representation
void BNY (int x) {
    bitset<10> bs(x);
    cout << x << " = " << bs << nl;
}
*/

/*
Class 2 - bit stuffs - ykw
#include<bits/stdc++.h>
using namespace std;

// Checks if kth bit of x is set (1) or not (0)
int check_kth_bit(int x, int k) {
  return (x >> k) & 1;
}

// Prints the positions of all set (1) bits in binary representation of x
void print_on_bits(int x) {
  for (int k = 0; k < 32; k++) {
    if (check_kth_bit(x, k)) {
      cout << k << ' '; // prints the position of the set bit
    }
  }
  cout << '\n';
}

// Returns the count of set (1) bits in binary representation of x
int count_on_bits(int x) {
  int ans = 0;
  for (int k = 0; k < 32; k++) {
    if (check_kth_bit(x, k)) {
      ans++;
    }
  }
  return ans;
}

// Checks if x is even or odd
bool is_even(int x) {
  if (x & 1) {
    return false;
  }
  else {
    return true;
  }
}

// Sets the kth bit of x to 1 and returns the result
int set_kth_bit(int x, int k) {
  return x | (1 << k);
}

// Sets the kth bit of x to 0 and returns the result
int unset_kth_bit(int x, int k) {
  return x & (~(1 << k));
}

// Toggles the kth bit of x and returns the result
int toggle_kth_bit(int x, int k) {
  return x ^ (1 << k);
}

// Checks if x is a power of 2
bool check_power_of_2(int x) {
  return count_on_bits(x) == 1;
}

int main() {
  // Bitwise AND (&)
  int and_result = 12 & 25;  // 12 (binary 1100) & 25 (binary 11001) = 8 (binary 1000)
  cout << "AND result: " << and_result << '\n'; // Output: 8

  // Bitwise OR (|)
  int or_result = 12 | 25;  // 12 (binary 1100) | 25 (binary 11001) = 29 (binary 11101)
  cout << "OR result: " << or_result << '\n'; // Output: 29

  // Bitwise XOR (^)
  int xor_result = 12 ^ 25;  // 12 (binary 1100) ^ 25 (binary 11001) = 21 (binary 10101)
  cout << "XOR result: " << xor_result << '\n'; // Output: 21

  // Bitwise NOT (~)
  int not_result = ~12;
  cout << "NOT result: " << not_result << '\n'; // Output: -13

  // Left shift (<<)
  int left_shift_result = 3 << 2;  // 3 (binary 11) << 2 = 12 (binary 1100)
  cout << "Left shift result: " << left_shift_result << '\n'; // Output: 12

  // Right shift (>>)
  int right_shift_result = 12 >> 2;  // 12 (binary 1100) >> 2 = 3 (binary 11)
  cout << "Right shift result: " << right_shift_result << '\n'; // Output: 3

  // Difference between 1 << x and 1LL << x
  int x = 31;
  long long res1 = 1 << x;  // This can lead to overflow if x is large
  long long res2 = 1LL << x;  // This avoids overflow since we're shifting on a long long
  cout << "1 << x result: " << res1 << '\n';  // Output: -2147483648 (due to overflow)
  cout << "1LL << x result: " << res2 << "\n\n";  // Output: 2147483648 (correct value)


  x = 11; // binary representation: 1011

  cout << "Check 2nd bit of 11: " << check_kth_bit(x, 2) << '\n'; // Output: 0
  cout << "Set bits in 11 are at positions: ";
  print_on_bits(x); // Output: 0 1 3
  cout << "Number of set bits in 11: " << count_on_bits(x) << '\n'; // Output: 3
  cout << "Is 11 even? " << is_even(x) << '\n'; // Output: 0 (false)
  cout << "11 after setting 2nd bit: " << set_kth_bit(x, 2) << '\n'; // Output: 15
  cout << "15 after unsetting 2nd bit: " << unset_kth_bit(15, 2) << '\n'; // Output: 11
  cout << "11 after toggling 3rd bit: " << toggle_kth_bit(x, 3) << '\n'; // Output: 3
  cout << "Is 8 a power of 2: " << check_power_of_2(8) << '\n'; // Output: 1 (true)

  return 0;
}
*/

// bitmask
// for (int mask = 0; mask < (1 << n); mask++) {
//     for (int i = 0; i < n; i++) {
//       if ((mask >> i) & 1) {

//     }
//   }
// }

/*
bitset stuffs
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<10> bs("1111101001");
    bitset<10> p("0110110100");

    // Function: []
    cout << "bs[1]: " << bs[1] << '\n'; // Output: 0

    // Function: set
    bs.set(1);
    cout << "bs.set(1): " << bs << '\n'; // Output: 1111101011

    // Function: reset
    bs.reset(0);
    cout << "bs.reset(0): " << bs << '\n'; // Output: 1111101010

    // Function: flip
    bs.flip(0);
    cout << "bs.flip(0): " << bs << '\n'; // Output: 1111101011

    // Function: set
    bs.set();
    cout << "bs.set(): " << bs << '\n'; // Output: 1111111111

    // Function: reset
    bs.reset();
    cout << "bs.reset(): " << bs << '\n'; // Output: 0000000000

    bs = bitset<10>("1111101001");
    // Function: flip
    bs.flip();
    cout << "bs.flip(): " << bs << '\n'; // Output: 0000010110

    bs = bitset<10>("1111101001");
    // Function: count
    cout << "bs.count(): " << bs.count() << '\n'; // Output: 7

    // Function: size
    cout << "bs.size(): " << bs.size() << '\n'; // Output: 10

    // Function: to_ullong
    cout << "bs.to_ullong(): " << bs.to_ullong() << '\n'; // Output: 1001

    // Function: to_string
    cout << "bs.to_string(): " << bs.to_string() << '\n'; // Output: 1111101001

    // Function: any
    cout << "bs.any(): " << bs.any() << '\n'; // Output: 1 (true)

    // Function: none
    cout << "bs.none(): " << bs.none() << '\n'; // Output: 0 (false)

    // Function: all
    cout << "bs.all(): " << bs.all() << '\n'; // Output: 0 (false)

    // Function: <<
    bs = bs << 1;
    cout << "bs << 1: " << bs << '\n'; // Output: 1111010010

    bs = bitset<10>("1111101001");
    // Function: >>
    bs = bs >> 1;
    cout << "bs >> 1: " << bs << '\n'; // Output: 0111110100

    bs = bitset<10>("1111101001");
    // Function: &
    bs = bs & p;
    cout << "bs & p: " << bs << '\n'; // Output: 0110100000

    bs = bitset<10>("1111101001");
    // Function: ^
    bs = bs ^ p;
    cout << "bs ^ p: " << bs << '\n'; // Output: 1001011101

    bs = bitset<10>("1111101001");
    // Function: ~
    bs = ~bs;
    cout << "~bs: " << bs << '\n'; // Output: 0000010110

    return 0;
}
*/

/*
-------- 2D Stuffs --------
2D Prefix Sum => pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + a[i][j];
2D Sub-Rectangle sum => ans = pref[x2][y2] - pref[x1 - 1][y2] - pref[x2][y1 - 1] + pref[x1 - 1][y1 - 1];
d[x1][y1] += x;
d[x2 + 1][y1] -= x;
d[x1][y2 + 1] -= x;
d[x2 + 1][y2 + 1] += x;
*/

// -------- Math Tools --------
void countDivisor() {
  for (int i = 1; i < N; i++) {
    for (int j = i; j < N; j += i) d[j]++;
  }
}

bool isPrime(int n) {
  if (n == 1) return false;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int power(int x, int y) {
  int result = 1;
  while (y > 0) {
    if (y & 1) {
      result *= x;
    }
    x *= x;
    y >>= 1;
  }
  return result;
}


//check if there is a substring a, in the string s
book is_there (string &s, string &a) {
  return (s.find(a) != std::string::npos);
}

/* Contribution technique
Sum of pair sums => (2 * n * a[i])
Sum of subarray sums => (a[i] * i * (n - i + 1))
Sum of subset sums => (((1 << n) - 1) * a[i])
Product of pair product => a[i]^2n
Number of pairs => (n * (n - 1)) / 2
Number of subarrays => (n * (n + 1)) / 2
Expected value : sum of values of all ways / number of ways
*/

/*
  In the name of Allah, the Most Gracious, the Most Merciful.
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n";



int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);



  return 0;
}