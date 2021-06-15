#include <bits/stdc++.h>
using namespace std;

int max(int a,int b){
    if(a>=b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int n;
    printf("Enter number of items: ");
    scanf("%d",&n);
    int profit[n], weight[n];

    cout<<"Enter weight array\n";
    for(int i=0;i<n;i++){
        scanf("%d",&weight[i]);
    }

    cout<<"Enter value array\n";
    for(int i=0;i<n;i++){
        scanf("%d",&profit[i]);
    }

    int ks;
    printf("Enter weight of knapsack: ");
    scanf("%d",&ks);

    int table[n+1][ks+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=ks;j++){
            if(i==0 || j==0){
                table[i][j]=0;
            }
            else if(weight[i-1]>j){
                table[i][j]=table[i-1][j];
            }
            else{
                table[i][j]=max(table[i-1][j],profit[i-1]+table[i-1][j-weight[i-1]]);
            }
        }
    }
    printf("Maximum Profit is: %d",table[n][ks]);
}
