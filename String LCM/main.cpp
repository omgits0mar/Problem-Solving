#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

void fastio()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fastio();

    int tests; cin >> tests;
    for(int t = 0; t < tests; t++)
    {
        // Input:
        string word1; cin >> word1;
        string word2; cin >> word2;

        bool check = true;
        int size1 = word1.length();
        int size2 = word2.length();

        int LCM = (size1*size2)/__gcd(size1,size2); //LCM rule

        /*
         The approach is Iam going to elonagate both words to the size of the LCM of their sizes
         so I created 2 new character arrays to carry the new words.
         */

        char n_word1[1000000]={}; char n_word2[1000000]={};

        for(int i = 0; i < LCM; i++)
        {
            //So we start repeating the charcters after filling it in the new array(n_word1)
            if(i < size1)
            {
                n_word1[i] = word1[i%size1]; // The mod here is used to cycle the original word
            }
            else
            {
                n_word1[i] = word1[i%size1];
            }
        }
        // The same loop ^^ but for the second group of charcters

        for(int i = 0; i < LCM; i++)
        {
            if(i < size2)
            {
                n_word2[i] = word2[i%size2];
            }
            else
            {
                n_word2[i] = word2[i%size2];
            }
        }

        // comparing between the 2 new word

        for(int i = 0; i < LCM; i++)
        {
            if(n_word1[i] != n_word2[i])
            {
                check = false;
                break;
            }
        }
        if(check)
        {
            cout << n_word1 << "\n";
        }
        else
        {
            cout << "-1 \n";
        }
    }

}
// Created by:Hazem Mohamed.