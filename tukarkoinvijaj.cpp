#include <iostream>
#include <vector>

int jenis[] = {1, 5, 10, 25, 50};
int dp[7500];

int makeChange(int amount) {
    
    dp[0] = 1;  // There is one way to make change for zero cents
    
    for (int coin : jenis) {
        for (int i = coin; i <= amount; i++) {
            dp[i] += dp[i - coin];
        }
    }
    
    return dp[amount];
}

int main() {
    int amount;
    std::cout << "Enter the amount in cents: ";
    std::cin >> amount;
    
    int numWays = makeChange(amount);
    
    std::cout << "Total number of ways to make change: " << numWays << std::endl;
    
    return 0;
}

