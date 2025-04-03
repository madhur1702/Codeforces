#include <bits/stdc++.h>
int countLessThanOrEqual(const std::vector<long long>& sequence, int size, long long threshold) {
    int left = 0, right = size;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (sequence[mid] <= threshold) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    
    return left;
}

int main() {
    int testCases;
    std::cin >> testCases;
    
    while (testCases--) {
        int arraySize, repetitions;
        long long target;
        std::cin >> arraySize >> repetitions >> target;
        
        std::vector<int> elements(arraySize);
        for (int i = 0; i < arraySize; i++) {
            std::cin >> elements[i];
        }
        
        std::vector<long long> prefixSums(arraySize);
        prefixSums[0] = 0;
        for (int i = 1; i < arraySize; i++) {
            prefixSums[i] = prefixSums[i-1] + elements[i-1];
        }
        
        long long totalSum = prefixSums[arraySize-1] + elements[arraySize-1];
        
        if (repetitions * totalSum < target) {
            std::cout << "0" << std::endl;
            continue;
        }
        
        long long difference = repetitions * totalSum - target;
        
        long long result = 0;
        for (int iteration = 0; iteration < repetitions; iteration++) {
            long long threshold = difference - (long long)iteration * totalSum;
            
            if (threshold < 0) {
                continue;
            }
            
            int count = countLessThanOrEqual(prefixSums, arraySize, threshold);
            result += count;
        }
        
        std::cout << result << std::endl;
    }
    
    return 0;
}
