#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1005;
int blocks[MAXN]; //container
int main(){
    int n;
    bool flag;
    //taking input
    while(scanf("%d", &n) == 1 && n != 0){
        while(scanf("%d", &blocks[0]) == 1 && blocks[0] != 0){
            flag = false;
            for(int i = 1; i < n; i++) scanf("%d", &blocks[i]);
            stack <int> st;
            int pos = 0;
            for(int i = 0; i < n; i++){
                //valid case for pushing in stack
                while(st.empty() || st.top() != blocks[i]){
                    cnt++;
                    st.push(++pos);
                    if(pos == n + 1){
                        flag = true;
                        break;
                    }
                }
                if(flag) break;
                st.pop();
            }
            if(!flag) printf("Yes\n");
            else printf("No\n");
        }
        printf("\n");
    }
    return 0;
}
