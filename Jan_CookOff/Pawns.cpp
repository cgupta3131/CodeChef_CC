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
    	int turns = 0;
    	string s;
    	cin >> s;
    	cin.ignore(numeric_limits<streamsize>::max(), '\n');
  
  		int len = s.length();
  		int cur_pawn = 1;
  		for(int i=0;i<len;i++)
  		{
  			if(s[i] == 'P')
  			{	
  				//cout << i << " " << cur_pawn-1 << endl;
  				//cout << (i-(cur_pawn-1))/2 << endl;
  				turns += (i-(cur_pawn-1)+1)/2;
  				cur_pawn++;
  			}

  		}


  		if(turns%2 == 0)
   		 	cout << "NO" << "\n";
  		else
    		cout << "YES" << "\n";
    }

    
	
	return 0 ; 

}



