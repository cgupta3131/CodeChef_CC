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

int gcd(int a, int b)
{
	if(b == 0)
		return a;

	return gcd(b, a%b);
}

int main()
{
	int T;
	cin >> T;

	while(T--)
	{
		int N,t,x,y,z;
		cin >> N >> t >> x >> y >> z;

		/*  t=1 -> AxAyBz
		t=2 -> AxByAz	
		t=3 -> AxByBz
		t=4 -> BxAyBz  */

		// Angle alpha = pi/(2*N+1)

		if(t == 2 || t == 4)
		{	
				
			int num = (2*N+1 - x - z);
			int den = (2*N + 1);

			int a = max(num,den);
			int b = min(num,den);

			int gcd_value = gcd(a,b);

			num /= gcd_value;
			den /= gcd_value;

			cout << num << " " << den << endl; 
			
		}

		else
		{
			if(x == z)
			{
				int num = (x);
				int den = (2*N + 1);

				int a = max(num,den);
				int b = min(num,den);

				int gcd_value = gcd(a,b);

				num /= gcd_value;
				den /= gcd_value;

				cout << num << " " << den << endl;

			}

			else
			{
				if(t == 3)
				{
					int num = (2*N+1 - x);
					int den = (2*N + 1);

					int a = max(num,den);
					int b = min(num,den);

					int gcd_value = gcd(a,b);

					num /= gcd_value;
					den /= gcd_value;

					cout << num << " " << den << endl;

				}

				if(t == 1)
				{
					int num = (2*N+1 - z);
					int den = (2*N + 1);

					int a = max(num,den);
					int b = min(num,den);

					int gcd_value = gcd(a,b);

					num /= gcd_value;
					den /= gcd_value;

					cout << num << " " << den << endl;
				}

			}
		}
	}
	
	return 0 ; 

}



