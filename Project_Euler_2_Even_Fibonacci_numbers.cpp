//Author : Dark Coder 
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define test_cases() int t; cin >> t;for (int i = 0; i < t; i++)
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// optimal 
ll sumOfEvenFibonacci(ll n) {
    if (n < 2)
        return 0;

    ll t1 = 0;
    ll t2 = 2;
    ll sum = t1 + t2;

    while (t2 <= n) {
        ll nextEven = 4 * t2 + t1;

        if (nextEven <= n)
            sum += nextEven;
        else
            break;

        t1 = t2;
        t2 = nextEven;
    }

    return sum;
}
//general
ll sumOfEven(ll n)
{
 ll t1 = 0, t2 = 1, nextTerm = 0;
       
        nextTerm = t1 + t2;
       ll sum = 0;
        while(nextTerm <= n) {
            if(nextTerm%2==0)
                sum += nextTerm;
            t1 = t2;
            t2 = nextTerm;
            nextTerm = t1 + t2;
        }
 return sum;
}
//Accepted 
int main() {
    fastio();
    test_cases(){
        ll n;
        cin >> n;
        cout << sumOfEven(n) << endl;
    }
    return 0;
}