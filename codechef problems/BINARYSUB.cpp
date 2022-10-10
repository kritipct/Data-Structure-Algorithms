//Author: Akash Gautam (@geekblower)
//Date: 09-10-2022
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define GEEKBLOWER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int
#define TEST_CASES create(t);while(t--)
#define SOLUTION solve(); return 0;
#define display(n) cout<<n<<endl;
#define VI vector<int>
#define PB push_back
#define ALL(a) a.begin(),a.end()
#define SORT(a) sort(ALL(a))
#define loop(i,a,b,c) for(int i=a;i<b;i+=c)
#define revloop(i,a,b,c) for(int i=a;i>=b;i-=c)
#define start_loop loop(i,0,n,1)
#define start_revloop revloop(i,n,0,1)
#define create(n) int n;cin>>n;
#define def(a,n) int a[n];start_loop cin>>a[i];
#define print(a) for(auto i : a){cout<<i<<" ";}cout<<endl;
#define vector(a,n) VI a;loop(i,0,n,1){int x;cin>>x;a.PB(x);}
inline int GCD(int a,int b){return !b?a:GCD(b,a%b);}
const int MOD = 998244353;

void solve() {
    string str;
    cin >> str;
    
    int n = str.size();
    bool a[100001];
    int dp[100001][2];
    
    loop(i, 1, n, 1) {
        a[i] = (str[i] != str[i-1]);
    }
    
    dp[0][0] = 1;
    
    loop(i, 1, n, 1) {
        dp[i][0] = (dp[i-1][0]+dp[i-1][1]) % MOD;
        
        if(a[i]==1) {
            dp[i][1] = dp[i-1][0];
        } else {
            dp[i][1] = 0;
        }
    }
    
    display((dp[n-1][0] + dp[n-1][1]) % MOD)
}

int32_t main() {
    GEEKBLOWER
    TEST_CASES
    SOLUTION
}