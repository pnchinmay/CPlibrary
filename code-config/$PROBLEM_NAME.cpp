/**
 *      Author:     pnchinmay
 *      Created:    Thu 11 May 2023 07:41:07 PM IST
**/
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#define llvec vector<ll>
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>
#define ff first
#define ss second
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define maxheap priority_queue
#define uset unordered_set
#define umap unordered_map
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll

#define fr(i,x,n) for(ll (i)=(x); (i)<(n); (i)++)
#define revfr(i, x, n) for(ll i = x - 1; i >= n; i--)

#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()


void ___print(ll t) {cerr << t;}
void ___print(int t) {cerr << t;}
void ___print(string t) {cerr << t;}
void ___print(char t) {cerr << t;}
void ___print(lld t) {cerr << t;}
void ___print(double t) {cerr << t;}
void ___print(ull t) {cerr << t;}
 
 
template <class T, class V> void ___print(pair <T, V> p);
template <class T> void ___print(vector <T> v);
template <class T> void ___print(set <T> v);
template <class T, class V> void ___print(map <T, V> v);
template <class T> void ___print(multiset <T> v);
template <class T, class V> void ___print(pair <T, V> p) {cerr << "{"; ___print(p.ff); cerr << ","; ___print(p.ss); cerr << "}";}
template <class T> void ___print(vector <T> v) {cerr << "[ "; for (T i : v) {___print(i); cerr << " ";} cerr << "]";}
template <class T> void ___print(set <T> v) {cerr << "[ "; for (T i : v) {___print(i); cerr << " ";} cerr << "]";}
template <class T> void ___print(multiset <T> v) {cerr << "[ "; for (T i : v) {___print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void ___print(map <T, V> v) {cerr << "[ "; for (auto i : v) {___print(i); cerr << " ";} cerr << "]";}
template <class T, size_t N> void ___print(T (&arr)[N]) { cerr << "[ "; for (size_t i = 0; i < N; ++i) { ___print(arr[i]); cerr << " "; } cerr << "]"; }
//EXAMPLE: nested array
//fr(i,0,sizeof(nestedArray)/sizeof(nestedArray[0]))
    //debug(nestedArray[i]);

#ifndef ONLINE_JUDGE
#define debug(v) if(do_debug) { cerr << "Line(" << __LINE__ << ") -> " << #v << " = ";___print(v); cerr << endl; }
#else
#define debug(v);
#endif


const ll N=1e4+5;
const ll mod = 1000000007;
const ll infinity = 1000000000000000000;
bool do_debug = 1;
int eval_testcases = 0;

int solve()
{




    return 0;
}

int main() {
    fastio();

    if(eval_testcases){
        ll t;
        cin >> t;
        while(t--) {
            solve();
        }
    }
    else
        solve();
}
