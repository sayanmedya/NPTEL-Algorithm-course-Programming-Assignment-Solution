// Voting in Siruseri
// Programming Assignment 1

#include <bits/stdc++.h>
using namespace std;
typedef map<int,int> mii;
#define F first
#define S second
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    fastio;
    int n1, n2, n3, n4, n5, id;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    int size = n1 + n2 + n3 + n4 + n5;
    mii count;
    for (int i = 0;i < size;++i) {
        cin >> id;
        count[id]++;
    }
    int ans = 0;
    for (auto &ID : count)
        if (ID.S > 2)
            ans++;
    cout << ans << "\n";
}
