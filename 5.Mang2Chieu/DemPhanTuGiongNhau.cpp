//#include<bits/stdc++.h>
#include<iostream>
#include<map>
using namespace std ;
#define ll long long

    int main()
        {
        	int t; cin >> t;
        	while(t--)
        		{
        			 int n; cin >> n;
		            int a[n][n];
		            map<int,int> mp;
		            for(int i = 0 ; i < n;i++)
		                {
		                    for(int j = 0; j < n ;j++)
		                        {
		                            cin >> a[i][j];
		                            mp.insert({a[i][j],0});
		                        }
		                }
		            for(int i = 0 ; i < n;i++)
		                {
		                    for(int j = 0; j < n ;j++)
		                        {
		                            if(mp[a[i][j]] == i)
		                                mp[a[i][j]] = i+1;
		                        }
		                }
		            int cnt = 0;
		            for(auto it: mp)
		                {
		                    if(it.second == n)
		                        {
									cnt++;
		                        }
		                }
		            cout << cnt << endl;
				}
           
            return 0;
        }
