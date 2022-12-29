#include<bits/stdc++.h>
using namespace std;

template<typename A, typename B> istream& operator>>(istream &is, pair<A, B> &p) { return is >> p.first >> p.second;} template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> istream& operator>>(istream &is, T_container &v) { for (T& x : v) is >> x; return is;} bool debug;
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return debug ? os << '<'<<p.first<<"," <<p.second<<">" : os << p.first << " " << p.second;} template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { if(debug) { os << "["; string sep; for (const T &x : v) os << sep << x, sep = ", "; os << "]\n"; } else { bool f = false; for (const T &x : v) { if(f) {os << " ";} os << x, f = true; } } return os;}
template <typename T, typename T1, typename... Tail> T amin(T& a, T1 b, Tail... c) { if(b < a) a = b; if constexpr (sizeof...(c) != 0) { amin(a, c...); } return a; } template <typename T, typename T1, typename... Tail> T amax(T& a, T1 b, Tail... c) { if(b > a) a = b; if constexpr (sizeof...(c) != 0) { amax(a, c...); } return a; }
void dbg_out() { cerr << endl; } template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
 
#ifdef ONLINE_JUDGE
#define dbg(...)
#else
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "]:\n", debug = true, dbg_out(__VA_ARGS__), debug = false
#endif

template<typename T> T gcd(T a, T b){return(b?__gcd(a,b):a);} 
template<typename T> T lcm(T a, T b){return(a*(b/gcd(a,b)));} 


// #define int long long
const long long MOD = 1e9 + 7;
const long long INF = 2e9;
#define ff first
#define ss second
#define endl "\n"
#define ll long long
#define pii pair<int,int>
#define sz(x) (int)(x).size()
#define ppc(x) __builtin_popcount(x)
#define ppcll(x) __builtin_popcountll(x)
#define for0(i,a,b) for(int i=a;i<b;i++)

void feature1(){
    // merging with main branch after merging feature2 and feature1_1.
    // this feature1 has no presolve line, want to see whether merge conflict 
    // will arise.
}

void solve(){
// this is a test to add a feature in my cloned repo.
// adding this line after making changes in feature2  branch template.cpp file. 
}

void presolve(){
}

signed main() {
    #ifndef ONLINE_JUDGE
        freopen("error.txt","w",stderr)
    #endif
ios::sync_with_stdio(false);
cin.tie(0);
    int tests=1;
    cin >> tests;
    presolve();
    while (tests-- > 0)
        solve();
    return 0;
}
