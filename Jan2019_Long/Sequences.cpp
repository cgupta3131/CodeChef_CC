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


int gcd_value(int a, int b)
{
	if(b == 0)
		return 0;

	return gcd_value(b,a%b);
}

int main()
{

	int t;
	cin >> t;

	bool *visited = new bool[1000000];
	for(ll i=0;i<1000000;i++)
		visited[i] = true;

	visited[0] = false;
	visited[1] = false;

	for(ll i=2;i<1000000;i++)
	{
		if(visited[i] == false)
			continue;
		else
			for(ll j=i*i;j<1000000;j += i)
				visited[j] = false;
	}

	vector<ll> primes;

	for(ll i=3;i<1000000;i++)
		if(visited[i])
			primes.push_back(i);
	//visited[i] == false means that i is not a prime number!
	//visited[i] == true  means that i is a a prime number!

	while(t--)
	{
		int n;
		cin >> n;

		int cur_mul = 2;
		int j=0;

		vector<ll> output;

		for(int i=1;i<=n;i++)
		{
			if(i == n-1 && n%2 == 0)
				break;

			output.push_back(cur_mul * primes[j]);
			if(i%2 == 1)
				j++;

			if(i%2 == 0)
			{
				if(cur_mul == 2)
					cur_mul = 3;
				else
					cur_mul = 2; 
			}
		}


		if(n%4 == 3)
		{
			for(int i=0;i<output.size();i++)
				cout << output[i] << " ";
		}

		if(n%4 == 1 && n != 5 )
		{
			output[0] *= 7;
			output[n-1] /= 2;  
			output[n-1] *= 7; 

			for(int i=0;i<output.size();i++)
				cout << output[i] << " ";
		}

		if(n == 5)
			cout << 6 << " " << 15 << " " << 35 << " " << 77 << " " << 22 << " ";


		if(n%2 == 0)
		{
			if(n !=6 && n != 4) //means that cur_mul is 3
			{
				output[0] *= primes[j+1];
				for(int i=0;i<output.size();i++)
					cout << output[i] << " ";
				//cout << output[0] << endl;

				cout << 5*primes[j] << " ";
				cout << 5*primes[j+1] << " ";
			}

			if(n == 4)
				cout << 6 << " " << 10 << " " << 35 << " " << 21 << " ";
			if(n == 6)
				cout << 6 << " " << 15 << " " << 35 << " " << 77 
				<< " " << 143 << " " << 26 << " ";

		}


		cout << endl;

		
	}
	
	return 0 ; 

}



