#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unordered_map<int, int> umapii;
typedef unordered_map<int, bool> umapib;
typedef unordered_map<string, int> umapsi;
typedef unordered_map<string, string> umapss;
typedef map<string, int> mapsi;
typedef map<pair<int, int>, int> mappiii;
typedef map<int, int> mapii;
typedef map<int, bool> mapib;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef unordered_set<int> useti;
typedef set<int> seti;

#define forr(i,a,n) for(ll i = a ; i < n ; i++)
#define forn(i,n) for(ll i = 0 ; i < n ; i++)
#define revfor(i,b,a) for(ll i = b ; i >= a ; i--)
#define revforn(i,n) for(ll i = n ; i >= 0 ; i--)
#define uset unordered_set
#define it iterator
#define mp make_pair
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define allp(x) (x)->begin(), (x)->end()
#define f first
#define s second
#define MOD 1000000007

//cin.ignore(numeric_limits<streamsize>::max(), '\n'); -> Clears the input buffer	

/*  If N is even, then value of M is (N/2)-1;
 	If N is odd,  then value of M is (N/2)

 	The possible value of (i<=N) is only one for maximum M to be achieved  
 	For (i>N), we can make several combinations!
  */
int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		ll N,P;
		cin >> N >> P;

		ll total = 0;
		ll M;

		if(N == 1 || N == 2)
		{
			cout << P*P*P << endl;
			continue;
		}
	
		if(N%2 == 0)
			M = (N/2)-1;
		else
			M = (N/2);

		total += (P-M)*(P-M);
		total += (P-N)*( 2*P - M - N);

		cout << total << endl;


	}
	
	return 0 ; 

}



	