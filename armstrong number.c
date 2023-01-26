//armstrong number or not (only three digit numbers)
#include <stdio.h>
int main() {
    int num, oldnum, rem, res = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    oldnum = num;

    while (oldnum != 0) {
        rem = oldnum % 10;
       res += rem * rem * rem;
       oldnum = oldnum / 10;
    }

    if (res == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
