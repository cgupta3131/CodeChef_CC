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

    int N,c;
    cin >> N >> c;

    int left = 1;
    int right = N;
    int cost = 0;

    while(right - left >= 1)
    {
    	int mid = (9*left+right)/10;
    	cout << 1 << " " << mid << endl; 

    	int status;
    	cin >> status;

    	if(status == 0) //Panel is not broken even after the operation
    		left = mid+1;

    	else
    	{
    		right = mid;
    		cout << 2 << endl;
    	}
    }
    
   	cout << 3 << " " << left << endl;

}
	