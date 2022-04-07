#include <iostream>

using namespace std;

//this is a utility function to return the maximum of two values
int max(int a, int b){
    return (a > b) ? a : b;
}

//this function returns the maximum that can be put in the budget
int solution(int budget, int price[], int preference[], int n){
    int i, w;
    int dp[n + 1][budget + 1];

    //build table dp[][] in bottom up approach
    for(i = 0; i <= n; i++){
        for(w = 0; w <= budget; w++){
            if(i == 0 || w == 0){
                dp[i][w] = 0;
            }else if(price[i-1] <= w){
                dp[i][w] = max(preference[i-1] + dp[i-1][w-price[i-1]],dp[i-1][w]);
            }else{
                dp[i][w] = dp[i-1][w];
            }
        }
    }
    return dp[n][budget];
}

int main(){
    int preference[] = {30,50,80,70,100};
    int price[] = {10,20,50,40,190};
    int budget = 300;

    int n = sizeof(preference) / sizeof(preference[0]);
    cout << "\n" << solution(budget,price,preference,n) << endl;

    return 0;
}

