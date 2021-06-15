#include <iostream>

using namespace std;

int main(void)
{
    int N,i;
    printf("Enter The Number of Gadgets:- ");
    cin<<N;
    int cost_items[N+1];
    printf("Enter The Costs of Gadgets:- ");
    for(i=1;i<=N;i++){
        cin<<cost_items[i];
    }
    
    
    
    return 0;
}
