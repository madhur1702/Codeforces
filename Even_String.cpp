#include <bits/stdc++.h>
using namespace std;

const int MODULUS = 998244353;
const int MAX_SIZE = 500000;

long long powerMod(long long base, long long exponent) {
    long long result = 1;
    base %= MODULUS;
    while (exponent > 0) {
        if (exponent & 1)
            result = (result * base) % MODULUS;
        base = (base * base) % MODULUS;
        exponent >>= 1;
    }
    return result;
}

vector<long long> factorial, invFactorial;

void initializeFactorials() {
    factorial.resize(MAX_SIZE + 1);
    invFactorial.resize(MAX_SIZE + 1);
    
    factorial[0] = 1;
    for (int i = 1; i <= MAX_SIZE; i++) {
        factorial[i] = (factorial[i-1] * i) % MODULUS;
    }
    
    invFactorial[MAX_SIZE] = powerMod(factorial[MAX_SIZE], MODULUS - 2);
    for (int i = MAX_SIZE; i >= 1; i--) {
        invFactorial[i-1] = (invFactorial[i] * i) % MODULUS;
    }
}

long long countSubsets(vector<int>& values, int count, int targetSum) {
    vector<long long> dynamicTable(targetSum + 1, 0);
    dynamicTable[0] = 1;
    
    for (int i = 0; i < count; i++) {
        int currentValue = values[i];
        for (int j = targetSum; j >= currentValue; j--) {
            dynamicTable[j] = (dynamicTable[j] + dynamicTable[j - currentValue]) % MODULUS;
        }
    }
    
    return dynamicTable[targetSum];
}

void solveProblem() {
    vector<int> charCount(26);
    long long totalLength = 0;
    
    for (int i = 0; i < 26; i++) {
        cin >> charCount[i];
        totalLength += charCount[i];
    }
    
    int oddPositions = (totalLength + 1) / 2;
    int evenPositions = totalLength / 2;
    
    bool isFeasible = true;
    for (int i = 0; i < 26; i++) {
        if (charCount[i] > oddPositions) {
            isFeasible = false;
            break;
        }
    }
    
    if (!isFeasible) {
        cout << "0\n";
        return;
    }
    
    int requiredSum = 0;
    vector<int> flexibleChars;
    
    for (int i = 0; i < 26; i++) {
        if (charCount[i] == 0)
            continue;
            
        if (charCount[i] > evenPositions) {
            requiredSum += charCount[i];
        } else {
            flexibleChars.push_back(charCount[i]);
        }
    }
    
    int targetSum = oddPositions - requiredSum;
    if (targetSum < 0) {
        cout << "0\n";
        return;
    }
    
    int flexibleTotal = 0;
    for (int val : flexibleChars) {
        flexibleTotal += val;
    }
    
    if (targetSum > flexibleTotal) {
        cout << "0\n";
        return;
    }
    
    long long subsetWays = countSubsets(flexibleChars, flexibleChars.size(), targetSum);
    
    long long arrangementFactor = (factorial[oddPositions] * factorial[evenPositions]) % MODULUS;
    for (int i = 0; i < 26; i++) {
        arrangementFactor = (arrangementFactor * invFactorial[charCount[i]]) % MODULUS;
    }
    
    long long answer = (subsetWays * arrangementFactor) % MODULUS;
    cout << answer << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    initializeFactorials();
    
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        solveProblem();
    }
    
    return 0;
}
