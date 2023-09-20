#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000006
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define M 10000000007
typedef pair<int, int>pii;

inline int r()
{
	int n = 0;
	while(1){
	    unsigned char c=getchar()-'0';
        if(c<=9)
            n=(n<<3)+(n<<1)+c;
        else
            break;
    }
	return n;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n=r();
    // set<int>s;
    // for(int i = 0; i<n; i++){
    //     int x;
    //     cin>>x;
    //     s.insert(x);
    // }
    vector<int>v(n);
    for(int i = 0; i< n; i++)v[i]=r();
    sort(v.begin(), v.end());
    int cnt = 1;
    for(int i = 1; i < n; i++)cnt += v[i]!=v[i-1];
    cout<<cnt;
    return 0;
}
