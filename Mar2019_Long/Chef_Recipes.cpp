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
    	int tc[32];
    	for(int i=0;i<32;i++)
    		tc[i] = 0;

    	ll ans = 0;
    	while(n--)
    	{
    		string s;
    		cin >> s;

    		int len = s.length();
    		int v[5];
    		for(int i=0;i<5;i++)
    			v[i] = 0;

    		for(int i=0;i<len;i++)
    		{
    			if(s[i] == 'a')
    				v[0] = 1;
    			if(s[i] == 'e')
    				v[1] = 1;
    			if(s[i] == 'i')
    				v[2] = 1;
    			if(s[i] == 'o')
    				v[3] = 1;
    			if(s[i] == 'u')
    				v[4] = 1;
    		}

    		//cout << v[0] << v[1] << v[2] << v[3] << v[4] << endl; 

    		if(v[0] && !v[1] && !v[2] && !v[3] && !v[4])
    		{
    			ans += tc[29] + tc[30];
    			tc[0]++; 
    		}

    		if(!v[0] && v[1] && !v[2] && !v[3] && !v[4])
    		{
    			ans += tc[28] + tc[30];
    			tc[1]++; 
    		}

    		if(!v[0] && !v[1] && v[2] && !v[3] && !v[4])
    		{
    			ans += tc[27] + tc[30];
    			tc[2]++; 
    		}

    		if(!v[0] && !v[1] && !v[2] && v[3] && !v[4])
    		{
    			ans += tc[26] + tc[30];
    			tc[3]++; 
    		}

    		if(!v[0] && !v[1] && !v[2] && !v[3] && v[4])
    		{
    			ans += tc[25] + tc[30];
    			tc[4]++; 
    		}

    		//Two at a time
    		//ae
    		if(v[0] && v[1] && !v[2] && !v[3] && !v[4])
    		{
    			ans += tc[24] + tc[28] + tc[29] + tc[30];
    			tc[5]++; 
    		}

    		//ai
    		if(v[0] && !v[1] && v[2] && !v[3] && !v[4])
    		{
    			ans += tc[23] + tc[27] + tc[29] + tc[30];
    			tc[6]++; 
    		}

    		//ao
    		if(v[0] && !v[1] && !v[2] && v[3] && !v[4])
    		{
    			//cout << "hey1" << endl;
    			ans += tc[22] + tc[26] + tc[29] + tc[30];
    			tc[7]++; 
    		}

    		//au
    		if(v[0] && !v[1] && !v[2] && !v[3] && v[4])
    		{
    			ans += tc[21] + tc[25] + tc[29] + tc[30];
    			tc[8]++; 
    		}

    		//ei
    		if(!v[0] && v[1] && v[2] && !v[3] && !v[4])
    		{
    			ans += tc[20] + tc[27] + tc[28] + tc[30];
    			tc[9]++; 
    		}

    		//eo
    		if(!v[0] && v[1] && !v[2] && v[3] && !v[4])
    		{
    			ans += tc[19] + tc[26] + tc[28] + tc[30];
    			tc[10]++; 
    		}

    		//eu
    		if(!v[0] && v[1] && !v[2] && !v[3] && v[4])
    		{
    			ans += tc[18] + tc[25] + tc[28] + tc[30];
    			tc[11]++; 
    		}

    		//io
    		if(!v[0] && !v[1] && v[2] && v[3] && !v[4])
    		{
    			ans += tc[17] + tc[26] + tc[27] + tc[30];
    			tc[12]++; 
    		}

    		//iu
    		if(!v[0] && !v[1] && v[2] && !v[3] && v[4])
    		{
    			ans += tc[16] + tc[25] + tc[27] + tc[30];
    			tc[13]++; 
    		}

    		//ou
    		if(!v[0] && !v[1] && !v[2] && v[3] && v[4])
    		{
    			ans += tc[15] + tc[25] + tc[26] + tc[30];
    			tc[14]++; 
    		}

    		//Three at a time
    		if(v[0] && v[1] && v[2] && !v[3] && !v[4])
    		{
    			ans += tc[14] + tc[27] + tc[28] + tc[29] +  tc[30];
    			ans += tc[20] + tc[23] + tc[24];
    			tc[15]++; 
    		}

    		if(v[0] && v[1] && !v[2] && v[3] && !v[4])
    		{
    			ans += tc[13] + tc[29] + tc[28] + tc[26] +  tc[30];
    			ans += tc[19] + tc[22] + tc[24];
    			tc[16]++; 
    		}

    		if(v[0] && v[1] && !v[2] && !v[3] && v[4])
    		{
    			ans += tc[12] + tc[29] + tc[28] + tc[25] +  tc[30];
    			ans += tc[18] + tc[21] + tc[24];
    			tc[17]++; 
    		}

    		if(v[0] && !v[1] && v[2] && v[3] && !v[4])
    		{
    			ans += tc[11] + tc[29] + tc[27] + tc[26] +  tc[30];
    			ans += tc[17] + tc[22] + tc[23];
    			tc[18]++; 
    		}

    		if(v[0] && !v[1] && v[2] && !v[3] && v[4])
    		{
    			ans += tc[10] + tc[29] + tc[27] + tc[25] +  tc[30];
    			ans += tc[16] + tc[21] + tc[23];
    			tc[19]++; 
    		}

    		if(v[0] && !v[1] && !v[2] && v[3] && v[4])
    		{
    			ans += tc[9] + tc[29] + tc[26] + tc[25] +  tc[30];
    			ans += tc[15] + tc[21] + tc[22];
    			tc[20]++; 
    		}

    		if(!v[0] && v[1] && v[2] && v[3] && !v[4])
    		{
    			ans += tc[8] + tc[28] + tc[27] + tc[26] +  tc[30];
    			ans += tc[17] + tc[19] + tc[20];
    			tc[21]++; 
    		}

    		if(!v[0] && v[1] && v[2] && !v[3] && v[4])
    		{
    			ans += tc[7] + tc[28] + tc[27] + tc[25] +  tc[30];
    			ans += tc[16] + tc[18] + tc[20];
    			tc[22]++; 
    		}

    		if(!v[0] && v[1] && !v[2] && v[3] && v[4])
    		{
    			ans += tc[6] + tc[28] + tc[26] + tc[25] +  tc[30];
    			ans += tc[15] + tc[18] + tc[19];
    			tc[23]++; 
    		}

    		if(!v[0] && !v[1] && v[2] && v[3] && v[4])
    		{
    			ans += tc[5] + tc[27] + tc[26] + tc[25] +  tc[30];
    			ans += tc[15] + tc[16] + tc[17];
    			tc[24]++; 
    		}

    		//Four at a time
    		if(v[0] && v[1] && v[2] && v[3] && !v[4])
    		{
    			ans += tc[4]+tc[8]+tc[11]+tc[13]+tc[14]+tc[17]+tc[19]+tc[20]+tc[22]+tc[23]+tc[24]+tc[30];
    			ans += tc[26] + tc[27] + tc[28] + tc[29];
    			tc[25]++; 
    		}

    		if(v[0] && v[1] && v[2] && !v[3] && v[4])
    		{
    			ans += tc[3]+tc[7]+tc[10]+tc[12]+tc[14]+tc[16]+tc[18]+tc[20]+tc[21]+tc[23]+tc[24]+tc[30];
    			ans += tc[25] + tc[27] + tc[28] + tc[29];
    			tc[26]++; 
    		}

    		if(v[0] && v[1] && !v[2] && v[3] && v[4])
    		{
    			ans += tc[2]+tc[6]+tc[9]+tc[12]+tc[13]+tc[15]+tc[18]+tc[19]+tc[21]+tc[22]+tc[24]+tc[30];
    			ans += tc[26] + tc[25] + tc[28] + tc[29];
    			tc[27]++; 
    		}

    		if(v[0] && !v[1] && v[2] && v[3] && v[4])
    		{
    			ans += tc[1]+tc[5]+tc[9]+tc[10]+tc[11]+tc[15]+tc[16]+tc[17]+tc[21]+tc[22]+tc[23]+tc[30];
    			ans += tc[25] + tc[26] + tc[27] + tc[29];
    			tc[28]++; 
    		}

    		if(!v[0] && v[1] && v[2] && v[3] && v[4])
    		{
    			ans += tc[0]+tc[5]+tc[6]+tc[7]+tc[8]+tc[15]+tc[16]+tc[17]+tc[18]+tc[19]+tc[20]+tc[30];
    			ans += tc[25] + tc[26] + tc[27] + tc[28];
    			tc[29]++; 
    		}

    		if(v[0] && v[1] && v[2] && v[3] && v[4])
    		{
    			ans += tc[0]+tc[1]+tc[2]+tc[3]+tc[4]+tc[5]+tc[6]+tc[7]+tc[8]+tc[9]+tc[10]+tc[11]+tc[12]+tc[13]+tc[14]+tc[15]+tc[16]+tc[17]+tc[18]+tc[19]+tc[20]+tc[21]+tc[22]+tc[23]+tc[24]+tc[25]+tc[26]+tc[27]+tc[28]+tc[29]+tc[30];
    			tc[30]++; 
    		}
    	}

    	cout << ans << endl;
    }
    
    
	return 0 ;

}
