#include <bits/stdc++.h>
using namespace std;
#define int long long

// #1- HAPPYSTR


void solve(){
    int ans = 0;
    string s;
    cin >> s;
    for(auto itr : s){
        if(itr == 'a' || itr == 'e' || itr == 'i' || itr == 'o' || itr == 'u'){
            ans++;
            if(ans > 2){
                break;
            }
        }
        else ans = 0;
    }
    ans > 2 ? cout << "Happy" : cout << "Sad";
    cout << endl;
}

signed main() {
	// your code goes here
    int t;
    cin>> t;
    while(t--){
        solve();
    }
	return 0;
}


// #2-SUSSTR


void solve(){
    int n;
    string s;
    cin>> n >> s;
    vector<char> first,last;
    if (n==1){
        cout << s << endl;
        return ;
    }
    for(int i=0;i<n/2;i++){
        s[i]=='1' ? last.push_back(s[i]) : first.push_back(s[i]);
        s[n-1-i] == '1' ? first.push_back(s[n-1-i]) : last.push_back(s[n-1-i]);
    }
    if(n%2 == 1) s[n/2]=='1' ? last.push_back(s[n/2]) : first.push_back(s[n/2]);
    reverse(first.begin(),first.end());
    for(auto itr : first){
        cout << itr;
    }
    for(auto itr : last){
        cout << itr;
    }
    cout << endl;
}

signed main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
	return 0;
}


// #3- CONFCAT


void solve(){
    int n;
    cin>> n;
    vector<int> c(n,0);
    for(int i=0;i<n;i++){
        cin >> c[i];
    }
    vector<int> a,b;
    a.push_back(c[0]);
    bool flag = false;
    int i;
    for(i=1;i<n;i++){
        if(c[i] < c[0]){
            a.push_back(c[i]);
        }
        else{
            flag = true;
            break;
        }
    }
    if(!flag){
        cout << -1 << endl;
        return ;
    }
    for(;i<n;i++){
        b.push_back(c[i]);
    }
    
    cout << a.size() << endl;
    for(auto itr : a) cout << itr << " ";
    cout << endl;
    cout << b.size() << endl;
    for(auto itr : b) cout << itr << " ";
    
    cout<< endl;
}

signed main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	// your code goes here
	return 0;
}


// #4-MAXSUBARR


void solve(){
    int n,m;
    cin >> n;
    vector <int> a(n,0);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> m;
    vector<int> b(m,0);
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    int ans =0;
    int temp = 0;
    for(auto itr : a){
        temp += itr;
        ans = max(temp,ans);
    }
    temp = 0;
    reverse(a.begin(),a.end());
    for(auto itr : a){
        temp += itr;
        ans = max(temp,ans);
    }
    for(auto itr : b){
        if(itr >= 0) ans += itr;
    }
    cout << ans << endl;
}

signed main() {
	// your code goes here
	int t;
	cin>> t;
	while(t--){
	    solve();
	}
	return 0;
}
