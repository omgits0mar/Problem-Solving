#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

void fastio()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
// A global bool array to carry all the prime numbers.
int primes[1000001]={};
int main()
{
    fastio();
    /*
        Getting all the primes till the max range of the problem
        As the max range is the square root of the biggest possible input
        because a T-prime number means a number with 3 divisors only and
        only squares of prime numbers have 3 divisors
    */

    //Prime generating:

    for(int i = 3; i <=1000000;i++)
    {
        for(int j = 2; j*j <= i; j++)
        {
            if(i%j==0)
            {
                primes[i] = 1;
                break;
            }
        }
    }
    primes[0] = primes[1] = 1;
    primes[2] = 0;


    int n;
    cin >> n;
    long long arr[100005]={};

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        long double holder = sqrtl(arr[i]); /* holder to carry the square root of the input
                                              to check if it's prime or not. */

        if(holder - roundl(holder) == 0) // as the square of the input needs to be an integer.
        {
            long long holder2 = holder;
            if(primes[holder2] == 0) // checking if the number is prime or not.
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }

    }

}
// Created by:Hazem Mohamed.