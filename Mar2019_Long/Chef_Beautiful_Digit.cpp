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
typedef pair<pii,int> ppi;
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
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
    	ll n;
    	int d;
    	cin >> n >> d;

    	vector<int> temp;
    	while(n != 0)
    	{
    		int rem = n%10;
    		temp.pb(rem);
    		n = n/10;
    	}

    	int len = temp.size();
    	int *arr = new int[len];

    	for(int i=0;i<len;i++)
    		arr[i] = temp[len-1-i];

    	vector<int> history;
    	int idx = -1;

    	while(1)
    	{
	    	int min = 20;
	    	int temp_idx;
	    	for(int i=idx+1;i<len;i++)
	    	{
	    		if(arr[i] < min)
	    		{
	    			temp_idx = i;
	    			min = arr[i];
	    		}
	    	}

	    	if(d<=min)
	    		break;

	    	history.pb(temp_idx);
	    	idx = temp_idx;
    	}

    	for(int i=0;i<history.size();i++)
    		cout << arr[history[i]];

    	for(int i=0;i<len-history.size();i++)
    		cout << d;
    	cout << endl;

    }
    
    
	return 0 ;

}
