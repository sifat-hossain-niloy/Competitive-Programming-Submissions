#include<iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    int a[n],b[n],cnt = 0, ans = INT32_MIN;

    for (int i =0;i<n;i++)
    {
        cin >> a[i] >> b[i];
        cnt -=a[i];
        cnt +=b[i];
        ans = max(ans,cnt);
    }
    cout << ans;

    return 0;
}