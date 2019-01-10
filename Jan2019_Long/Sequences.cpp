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

	int t;
	cin >> t;

	bool *visited = new bool[1000000];
	for(ll i=0;i<1000000;i++)
		visited[i] = true;

	visited[0] = false;
	visited[1] = false;

	for(ll i=2;i<50005;i++)
	{
		if(visited[i] == false)
			continue;
		else
			for(ll j=i*i;j<1000000;j += i)
				visited[j] = false;
	}

	vector<ll> primes;
	vector<ll> non_primes;
	for(ll i=2;i<1000000;i++)
	{
		if(visited[i] == true)
			primes.push_back(i);
		else
			non_primes.push_back(i);
	}	

	while(t--)
	{
		int n;
		cin >> n;

		int *gcd = new int[n];
		for(int i=0;i<n;i++)
			gcd[i] = -1;

		gcd[0] = 2;
		gcd[1] = 3;
		gcd[2] = 5;

		int prime_index = 3;
		int non_index = 0;

		for(int i=3;i<n;i++)
		{
			if(i%3 == 0)
				gcd[i] = non_primes[non_index++];

			if(i%3 == 1 && non_primes[non_index]%2 == 1)
				gcd[i] = non_primes[non_index++];
		}

		for(int i=3;i<n;i++)
			if(gcd[i] == -1)
				gcd[i] = primes[prime_index++];

		if(gcd[n-2]%2 == 0)
			gcd[n-2] = primes[prime_index++];

		if(gcd[n-1]%2 == 0 || gcd[n-1]%3 == 0)
			gcd[n-1] = primes[prime_index++];

		for(int i=0;i<n;i++)
			cout << gcd[i] << " ";
		cout << endl;

		cout << gcd[0]*gcd[n-1] << " ";

		for(int i=0;i<=n-2;i++)
			cout << gcd[i]*gcd[i+1] << " ";
		cout << endl;

		
	}
	
	return 0 ; 

}



