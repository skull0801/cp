#include <stdio.h>
#include <string.h>

void sort(int *nums, int count) {
    int i, j, a;

    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - 1 - i; j++) {
            if (nums[j] > nums[j+1]) {
                a = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = a;
            }
        }
    }
}

void print(const int *nums, int count) {
    int i;
    for (i = 0; i < count; i++)
        printf("%d\n", nums[i]);
}

int main() {
    int nums[3], numsS[3];
    while (scanf("%d %d %d", nums, nums+1, nums+2) == 3) {
        memcpy(numsS, nums, 3*sizeof(int));
        sort(numsS, 3);
        print(numsS, 3);
        printf("\n");
        print(nums, 3);
    }
    return 0;
}
