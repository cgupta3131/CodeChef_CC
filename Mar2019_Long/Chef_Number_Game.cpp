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
    	int n;
    	cin >> n;

    	int c_pos = 0;
    	int c_zero = 0;
    	int c_neg = 0;

    	int *arr = new int[n];
    	for(int i=0;i<n;i++)
    	{
    		cin >> arr[i];
    		if(arr[i] >0)
    			c_pos++;
    		else if(arr[i] == 0)
    			c_zero++;
    		else
    			c_neg++;
    	}

    	if(c_neg == 0)
    		cout << c_pos+c_zero << " " << c_pos+c_zero << "\n";
    	else if(c_pos == 0)
    		cout << c_neg+c_zero << " " << c_neg+c_zero << "\n";
    	else
    	{
    		int maxi = max(c_neg,c_pos);
    		int mini = min(c_neg,c_pos);

    		cout << maxi+c_zero << " " << mini << "\n";
    	}


    }
    
    
	return 0 ;

}
