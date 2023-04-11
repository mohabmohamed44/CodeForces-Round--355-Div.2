#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <set>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;

int main(){
    int ps, h, ph,  res;
    cin >> ps >> h;
    while(ps--){ // 3-- 2-- 1--
        cin >> ph;
        res++;        
        if(ph > h){
            res++;
        }
    }
    cout << res << endl;
    return 0;
}