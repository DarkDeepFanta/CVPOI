#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
#define taskname "bai3"
  if (fopen(taskname ".inp", "r"))
  {
    freopen(taskname ".inp", "r", stdin);
    freopen(taskname ".out", "w", stdout);
  }
  ll a, b,ans,bit;
  cin >> a >> b;
  if (a % 4 == 1)
    ans = 2;
  if (a % 4 == 2)
    ans = 4;
  if (a % 4 == 3)
    ans = 8;
  if (a % 4 == 0)
    ans = 6;
  if (b % 4 == 1)
    bit = 3;
  if (b % 4 == 2)
   bit = 9;
  if (b % 4 == 3)
    bit = 7;
  if (b % 4 == 0)
    bit = 1;
  cout << (ans + bit)%10;
}