#include <stdio.h>
int main() {
    int s1, d1, s2, d2, s3, d3;
    scanf("%d %d", &s1, &d1);
    scanf("%d %d", &s2, &d2);
    scanf("%d %d", &s3, &d3);
    int timeline[25] = {0};

    for (int i = s1; i < d1; i++) {
        timeline[i]++;
    }
    for (int i = s2; i < d2; i++) {
        timeline[i]++;
    }
    for (int i = s3; i < d3; i++) {
        timeline[i]++;
    }
    int maxCars = 0;
    for (int i = 0; i < 25; i++) {
        if (timeline[i] > maxCars) {
            maxCars = timeline[i];
        }
    }

    printf("%d\n", maxCars);

    return 0;
}



