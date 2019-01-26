#include<bits/stdc++.h>

using namespace std;


vector<long long int> divisors[101] ; 
#define MOD 1000000007
long long int dp[109][109];

long long int solve(long long int n, long long int id, long long int k){
	if(id == 1){
		return 1;
	}

	if(dp[id][k] != -1) 
	{
		return dp[id][k];
	}

	long long int total = 0;
	for(long long int i = 0; i < divisors[k].size(); i++)
	{
		total = ( total + solve(n, id-1, divisors[k][i]) )%MOD ;
	}
	

	dp[id][k] = total;
	return total;
}

int main()
{
	long long int n,B,k;

	for(long long int i = 1 ; i < 101 ; i++)
    {
        for(long long int j = 1 ; j <= i ; j++)
        {
            if(i % j)
            {
                divisors[i].push_back(j) ; 
            }
        }
    }

    for(long long int i = 0; i < 109; i++){
    	for(long long int j = 0; j < 109; j++) dp[i][j] = -1;
    }

	cin >> n >> B >> k;

	cout << solve(min(B, n), min(B, n), k);

	return 0 ; 

}

