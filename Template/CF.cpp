#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds; using namespace std;
using ll = long long; using ld = long double; using ull = unsigned long long; using pl = pair<ll, ll>;
#define ff first
#define ss second
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define all(x) x.begin(), x.end()
#define allr(a) a.rbegin(), a.rend()
#define endl '\n' // #define coutd cout << fixed << setprecision(15)//coutd<<res<<endl;
#ifndef ONLINE_JUDGE
#include "E:\! CP_EDITOR_2025 !\tamplate\template.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif					
template<typename First, typename Second> istream& operator >> ( istream &is, pair<First, Second> &p ) { return is >> p.first >> p.second; }// cin >> pair<T1, T2>                                                                       // If comp(a, b) == true, then a should be placed before b in the sorted sequence.    
template<typename First, typename Second> ostream& operator << ( ostream &os, const pair<First, Second> &p ) { return os << p.first << " " << p.second; }// cout << pair<T1, T2>                                                         // In C++, comparator should return false if its arguments are equal.
template<typename First> istream& operator >> ( istream &is, vector<First> &v ) { for( First &x : v ) { is >> x; } return is; }// cin >> vector<T>
template<typename First> ostream& operator << ( ostream &os, const vector<First> &v ) { bool space = false; for( First x : v ) { if( space ) os << " "; space = true; os << x; } return os; }// cout << vector<T>  
template <typename T> using PQ = priority_queue<T>;/*top is grater*/template <typename T> using QP = priority_queue<T,vector<T>,greater<T>>;/*top is smaller*/
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;// ordered_set<ll> st;st.order_of_key(x) // number of elements < x ;
template <typename T> using ordered_multiset = tree<T, null_type,less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;// *(st.find_by_order(x))  (x)th largest element
//int popcount(ll x){return __builtin_popcountll(x);}; int poplow(ll x){return __builtin_ctzll(x);}; int pophigh(ll x){return 63 - __builtin_clzll(x);};
const ll N = 500050 , INF = 9e18 + 10 , mod = 1e9 + 7 , mod2 = 998244353; //~~~be careful for global variable(DUET IUPC)~~~//
     
     
void Sayem(ll tc){//! Read the sample cases AND EXPLANATIONS before writing code for nontrivial problems! :: Think about binary search,BIT,segment tree, dp, dfs, union find, set, priority queue, sorting, two pointer, gready.
	ll n = 0, m = 0, a = 0, b = 0, c = 0,d = 0 , i = 0, j = 0, k = 0, l = 0, r = 0, ans = 0, sum = 0, temp = 0, cnt = 0, mnt = 0;
    string s, s1, s2, s3;
    
    
    return;
}

int32_t main(){
    ios_base::sync_with_stdio(0), cin.tie(0) , cout.tie(0);int _TB = 1;
    cin >> _TB;
    for(int i = 1 ; i <= _TB ; i ++){
    	Sayem(i);
    }
    return 0;
}
