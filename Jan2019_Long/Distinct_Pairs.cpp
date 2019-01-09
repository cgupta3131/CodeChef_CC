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

int main()
{

	int n,m;
	cin >> n >> m;

	ll *first = new ll[n];
	ll *second = new ll[n];

	ll maxValue = -1*1000000005;
	int maxIndex = -1;
	for(int i=0;i<n;i++)
	{
		cin >> first[i];
		if(first[i] > maxValue)
		{
			maxValue = first[i];
			maxIndex = i;
		}
	}

	ll minValue = 1000000005;
	int minIndex = -1;
	for(int i=0;i<m;i++)
	{
		cin >> second[i];
		if(second[i] < minValue)
		{
			minValue=second[i];
			minIndex = i;
		}
	}

	for(int i=0;i<n;i++)
		cout << i << " " << minIndex << endl;

	for(int i=0;i<m;i++)
	{
		if(i == minIndex)
			continue;
		cout << maxIndex << " " << i << endl;
	}



	return 0 ; 

}



