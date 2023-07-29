/**
 *      Author:     pnchinmay
 *      Created:    Thu 11 May 2023 07:41:07 PM IST
**/
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>
#define vstr vector<string>
#define vc vector<char>
#define vb vector<bool>

#define vvi vector<vi>
#define vvl vector<vll>
#define vpi vector<pii>
#define vvstr vector<vstr>

#define ff first
#define ss second
#define pb push_back
#define ppb pop_back
#define mp make_pair

#define maxheap priority_queue
#define uset unordered_set
#define umap unordered_map
#define PI 3.141592653589793238462
#define gap " "
#define INF 1e9
#define EPS 1e-9
#define set_bits __builtin_popcountll
#define PERMUTE next_permutation

#define fr(i,x,n) for(ll (i)=(x); (i)<(n); (i)++)
#define revfr(i, x, n) for(ll i = ( x ) - 1; i >= ( n ); i--)
#define trav(a,v) for(auto a : v)
#define all(x,i,j) x.begin()+( i ), x.end()-( j )
#define allar(arr,i,j) arr+( i ), arr+sza(arr)-( j )
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)(x).size()
#define sza(x) sizeof(x)/sizeof(x[0])
#define RESET(a,b) memset(a,( b ),sizeof(a))

#define SORT(v,i,j) sort(all(v,i,j))
//for functions like greater<int>(), custom_square<ll>();
#define SORTFUN(v,i,j,boolfun) sort(all(v,i,j),boolfun)
#define SORTDEC(v) sort(rall(v))

#define SORTA(arr,i,j) sort(allar(arr,i,j))
//note: SORTAFUN() & SORTAREV() are same
//for function greater<int>(), custom_square<ll>();
#define SORTAFUN(arr,i,j,boolfun) sort(allar(arr,i,j),boolfun)
//for function greater<int>(), custom_square<ll>();
#define SORTAREV(arr,i,j,boolfun) sort(allar(arr,i,j),boolfun)


#define REVERSE(v,i,j) reverse(all(v,i,j))
#define REVERSEA(arr,i,j) reverse(allar(arr,i,j))

#define read(p,q,arr) for(int i=( p );i<( q );++i) cin>>arr[i];
#define read2(p,q,a,b) for(int i=( p );i<( q );++i) cin>>a[i]>>b[i];
#define write(p,q,arr) for(int i=( p );i<( q );++i) {cout<<arr[i]<<" ";} cout<<endl;
#define write2(p,q,a,b) for(int i=( p );i<( q );++i) cout<<a[i]<<" "<<b[i]<<endl;


void ___print(ll t) {cerr << ( t );}
void ___print(int t) {cerr << ( t );}
void ___print(string t) {cerr << ( t );}
void ___print(char t) {cerr << ( t );}
void ___print(lld t) {cerr << ( t );}
void ___print(double t) {cerr << ( t );}
void ___print(ull t) {cerr << ( t );}
 
 
//Declartion
template <class T, class V> void ___print(pair <T, V> p);
template <class T> void ___print(vector <T> v);
template <class T> void ___print(set <T> v);
template <class T, class V> void ___print(map <T, V> v);
template <class T> void ___print(multiset <T> v);

//Definition
template <class T, class V> void ___print(pair <T, V> p) {cerr << "{"; ___print(p.ff); cerr << ","; ___print(p.ss); cerr << "}";}
template <class T> void ___print(vector <T> v) {cerr << "[ "; for (T i : v) {___print(i); cerr << " ";} cerr << "]";}
template <class T> void ___print(set <T> v) {cerr << "[ "; for (T i : v) {___print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void ___print(map <T, V> v) {cerr << "[ "; for (auto i : v) {___print(i); cerr << " ";} cerr << "]";}
template <class T> void ___print(multiset <T> v) {cerr << "[ "; for (T i : v) {___print(i); cerr << " ";} cerr << "]";}

template <class T, size_t N> void ___print(T (&arr)[N]) { cerr << "[ "; for (size_t i = 0; i < N; ++i) { ___print(arr[i]); cerr << " "; } cerr << "]"; }
//EXAMPLE: nested array
//fr(i,0,sizeof(nestedArray)/sizeof(nestedArray[0]))
    //debug(nestedArray[i]);

 
#ifndef ONLINE_JUDGE
#define debug(v) if(do_debug) { cerr << "Line(" << __LINE__ << ") -> " << #v << " = ";___print(v); cerr << endl; }
#else
#define debug(v);
#endif

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

/*-------------------------------------------------------------------*/
ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
//additional +m is being added to handle the case if remainder is -ve; doesn't have any effect when remainder is +ve
ll getRandomNumber(ll l, ll r) {return uniform_int_distribution<ll>(l, r)(rng);} 
/*-------------------------------------------------------------------*/

const ll N=1e4+5;
const ll M = 1000000007;
const ll infinity = 1000000000000000000;
bool do_debug = 1;
int eval_testcases = 0;

int solve()
{

    return 0;
}

int main() {
    fastio();
    auto start1 = high_resolution_clock::now();

    if(eval_testcases){
        ll t;
        cin >> t;
        while(t--) {
            solve();
        }
    }
    else
        solve();

    
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
    cerr << "Time: " << duration . count() << "ms" << endl;
}
