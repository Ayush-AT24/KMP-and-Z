#pragma GCC optimize("Ofast")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define all(cont) cont.begin(), cont.end()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define MP make_pair
#define PB push_back
#define MOD 1000000007
#define ll long long
#define ld long double
#define el '\n'
#define sp ' '
#define S second
#define F first
#define vi vector<int>
#define vl vector <long long int>
#define vop vector<pair<ll,ll>>
#define vov vector<vector<ll>>
#define dbg(x)      cout << #x << " is " << x << endl;


vector<int> KMP(string &s)
{
    int n = s.size();

    vector<int> lps(n+1);

    lps[0]=-1;
    int i = 0, j = -1;

    while(i < n)
    {
        while(j != -1 && s[i] != s[j]) j = lps[j];
        i++; j++; lps[i] = j;
    }

    return lps;
}


vector<int> Z(string &s)
{
    int n = s.size();

    vector<int> z(n);

    for(int i = 1, l = 0, r = 0; i < n; i++)
    {
        if(i <= r)
            z[i] = min(z[i-1], r-i+1);
        while(z[i]+i < n && s[z[i]] == s[z[i]+i])
            z[i]++;
        if(i+z[i]-1 > r)
            l = i, r = i+z[i]-1;
    }

    return z;
}
 
 
mt19937 rng (chrono::high_resolution_clock::now().time_since_epoch().count());
template <typename A, typename B> ostream& operator<< (ostream &cout, pair<A, B> const &p) { return cout << "(" << p.first << ", " << p.second << ")"; }
template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << "["; for(int i = 0; i < v.size(); i++) {if (i) cout << ", "; cout << v[i];} return cout << "]";}
template <typename A, typename B> istream& operator>> (istream& cin, pair<A, B> &p) {cin >> p.first; return cin >> p.second;}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}
 
void test_case(){
    string s;
    cin >> s;
}
 
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0); 
int t=1;
// cin>>t;
while(t--) test_case();
return 0;
}
