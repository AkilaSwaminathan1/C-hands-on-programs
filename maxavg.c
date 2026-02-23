#include <stdio.h>

double findMaxAverage(int* nums, int n, int k) {
    double sum = 0;
    double maxAvg = -1e9;
    int l = 0;

    for (int r = 0; r < n; r++) {
        sum += nums[r];

        if (r - l + 1 == k) {
            if (sum / k > maxAvg) {
                maxAvg = sum / k;
            }
            sum -= nums[l];
            l++;
        }
    }

    return maxAvg;
}

int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    double result = findMaxAverage(nums, n, k);
    printf("Maximum average of subarrays of length %d is: %.6lf\n", k, result);

    return 0;
}