#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        if (n >= 10 && n <= 99) {
            int sum = (n / 10) + (n % 10); 
            printf("%d\n", sum);
        } else {
            printf("%d\n", n);
        }
    }
    return 0;
}
