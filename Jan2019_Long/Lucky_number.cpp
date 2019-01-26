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

int gcd_value(int a, int b) // assuming a>b
{
	if(b == 0)
		return a;

	return gcd_value(b,a%b); //Applying Euclid's Algorithm!
}

int findlcm(int a, int b)
{
	int x = max(a,b);
	int y = min(a,b);
	int gcd = gcd_value(x,y);

	return (a*b)/gcd;

}

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int n,a,b;
		cin >> n;
		cin >> a >> b; //a->Bob and b-> Alice --- First Turn of Bob
		int lcm;
		if(a == b)
			lcm = a;
		else
			lcm = findlcm(a,b);

		int count_lcm = 0;
		int count_a = 0;
		int count_b = 0;

		ll *input = new ll[n];

		for(int i=0;i<n;i++)
		{
			cin >> input[i];
			if(input[i]%lcm == 0)
				count_lcm++;

			if(input[i]%a == 0)
				count_a++;

			if(input[i]%b == 0)
				count_b++;

		}

		count_a -= count_lcm;
		count_b -= count_lcm;

		//At each turn, player has to remove Non-Zero number of Elements!

		int cur_turn = 0; //0 implies Bob and 1 implies Alice

		if(count_lcm > 0) // Bob will remove all the LCM elements!
			cur_turn = 1;
		else
			cur_turn = 0;


		if(cur_turn == 1) //means that current turn is of Alice
		{
			if(count_b > count_a)
				cout << "ALICE" << endl;
			else
				cout << "BOB" << endl;
		}

		else
		{
			if(count_a > count_b)
				cout << "BOB" << endl;
			else
				cout << "ALICE" << endl;
		}
	}
	
	return 0 ; 

}



