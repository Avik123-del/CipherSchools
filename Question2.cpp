#include <iostream>
using namespace std;

int main(void)
{
    int N,i;
    printf("Enter The Number of Gadgets:- ");
    cin>>N;
    int cost_items[N+1];
    printf("Enter The Costs of Gadgets:- ");
    for(i=1;i<=N;i++){
        cin>>cost_items[i];
    }
    int flag=1;
    do{
        printf("Enter\n1 to Exit\n2 to continue\n");
        int choice;
        cin>>choice;
        switch(choice){
            case 1:
                flag=0;
                break;
            case 2:
                int customer_money;
                cout<<"Enter The Amount of money of the Customer:- ";
                cin>>customer_money;
                int count=0;
                for(i=1;i<=N;i++){
                    if(cost_items!=0&&customer_money!=0&&customer_money%cost_items[i]==0){
                        count++;
                    }
                }
                cout<<"Enter The Verdict of the Robot:- ";
                int robot_verdict;
                cin>>robot_verdict;
                if(robot_verdict<count){
                    printf("Wrong\n");
                }else{
                    printf("Right\n");
                }
        }
    }while(flag==1);
    
    return 0;
}
