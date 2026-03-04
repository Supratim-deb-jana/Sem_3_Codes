#include <stdio.h>

void towerOfHanoi(int n, char fromPeg, char toPeg, char auxPeg) {
    if (n == 1) {
        printf("Move disk 1 from peg %c to peg %c\n", fromPeg, toPeg);
        return;
    }
    towerOfHanoi(n - 1, fromPeg, auxPeg, toPeg);
    printf("Move disk %d from peg %c to peg %c\n", n, fromPeg, toPeg);
    towerOfHanoi(n - 1, auxPeg, toPeg, fromPeg);
}

int main() {
    int n = 3; // Number of disks
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}