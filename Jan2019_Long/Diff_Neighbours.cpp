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

	while(t--)
	{

		int n,m;
		cin >> n >> m;

		int **arr = new int*[n];

		for(int i=0;i<n;i++)
			arr[i] = new int[m];
		int k;

		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				arr[i][j] = -1;

		if(n >= 3 && m >= 3)
			k=4;

		if(n == 1)
		{
			if(m == 1)
				k=1;
			if(m == 2)
				k=1;
			if(m >= 3)
				k=2;
		}

		if(n == 2)
		{
			if(m == 1)
				k=1;
			if(m == 2)
				k=2;
			if(m >= 3)
				k=3;
		}

		if(n >= 3)
		{
			if(m == 1)
				k=2;
			if(m == 2)
				k=3;
		}


		cout << k << endl;

		if(n >= 3 && m>=3)
		{
			int cur_val =1;
			for(int i=0;i<n;i++)
			{	
				if(cur_val > 4)
					cur_val -= 4;

				arr[i][0] = cur_val;
				if(i%2 == 0)
					cur_val++;
				else
					cur_val += 2;

				
			}

			for(int i=0;i<n;i++)
			{
				if(i%2 == 0) //even numbered row
				{
					arr[i][1] = arr[i][0];

					int cur_val = arr[i][1] + 1;
					for(int j=2;j<m;j++)
					{
						if(cur_val > 4)
							cur_val -= 4;
						arr[i][j] = cur_val;

						if(j%2 == 0)
							continue;
						else
							cur_val++;
					}

				}

				else
				{
					int cur_val = arr[i][0] + 1;
					for(int j=1;j<m;j++)
					{
						if(cur_val > 4)
							cur_val -= 4;
						arr[i][j] = cur_val;

						if(j%2 == 0)
							cur_val++;
						else
							continue;
					}
				}
			}
		}

		if(n == 1)
		{
			if(m == 1)
				arr[0][0] = 1;

			if(m == 2)
			{
				arr[0][0] = 1;
				arr[0][1] = 1;
			}

			if(m >= 3)
			{	
				int cur_val = 1;
				for(int j=0;j<m;j++)
				{
					if(cur_val > 2)
						cur_val -= 2;

					arr[0][j] = cur_val;

					if(j%2 == 1)
						cur_val++;
					else
						continue;
				}
			}
		}

		if(n == 2)
		{

			if(m == 1)
			{
				arr[0][0] = 1;
				arr[1][0] = 1;
			}

			if(m == 2)
			{
				arr[0][0] = 1;
				arr[0][1] = 1;
				arr[1][0] = 2;
				arr[1][1] = 2;
			}

			if(m >= 3)
			{
				arr[0][0] = 1;
				arr[0][1] = 1;
				arr[1][0] = 2;

				int cur_val = 2;
				for(int j=2;j<m;j++)
				{
					if(cur_val > 3)
						cur_val -= 3;

					arr[0][j] = cur_val;

					if(j%2 == 1)
						cur_val++;
					else
						continue;
				}

				cur_val = 3;
				for(int j=1;j<m;j++)
				{
					if(cur_val > 3)
						cur_val -= 3;

					arr[1][j] = cur_val;

					if(j%2 == 0)
						cur_val++;
					else
						continue;
				}

			}		
		}


		if(n >= 3)
		{
			if(m == 1)
			{
				//Value of k is 2
				int cur_val = 1;

				for(int i=0;i<n;i++)
				{
					if(cur_val > 2)
						cur_val -= 2;

					arr[i][0] = cur_val;

					if(i%2 == 1)
						cur_val++;
					else
						continue;
				}
			}

			if(m == 2)
			{
				//k = 3
				arr[0][0] = 1;
				arr[1][0] = 1;
				arr[0][1] = 2;

				int cur_val = 2;

				for(int i=2;i<n;i++)
				{
					if(cur_val > 3)
						cur_val -= 3;

					arr[i][0] = cur_val;

					if(i%2 == 1)
						cur_val++;
					else
						continue;
				}

				cur_val = 3;

				for(int i=1;i<n;i++)
				{
					if(cur_val > 3)
						cur_val -= 3;

					arr[i][1] = cur_val;

					if(i%2 == 0)
						cur_val++;
					else
						continue;
				}

			}
		}

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
				cout << arr[i][j] << " ";
			cout << endl;
		}
	}


}



