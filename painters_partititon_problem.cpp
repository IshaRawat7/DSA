/*Painters Partition Problem*/
/*n- Length of n different boards , m-painters available
A painter paints 1 unit of board in 1 unit of time and each painter will paint consecutive boards. Find the minimum time that will be required to paint all the boards.
*/
/*Example:
boards = [10,20,30,40]
painters(m) = 2
possible Partitions
[10][20,30,40]
[10,20][30,40]
[10,20,30][40]
*/
/*Apply binary search for minimum and maximum possible values of 'min' length of baords to be painted
Check the feasibility of this chosen value.
          Checking feasibility:
          Assign boards toeach painter in a sequential manner , while the current length of assigned boards don't exceed the value set by binary search.
          If during allocation the number of painters don't exceed the limit of 'm', then the soltution is feasible.
          Else it isn't.
*/


#include <iostream>
using namespace std;

int findFeasible(int boards[], int n, int mid) {
    int sum = 0, painters = 1;
    for (int i = 0; i < n; i++) {
        sum += boards[i];
        if (sum > mid) {
            sum = boards[i];
            painters++;
        }
    }
    return painters;
}

int painterPart(int boards[], int n, int m) {
    int tlength = 0, k = 0;
    for (int i = 0; i < n; i++) {
        k = max(k, boards[i]);
        tlength += boards[i];
    }

    int low = k, high = tlength;
    while (low < high) {
        int mid = (low + high) / 2;
        int painters = findFeasible(boards, n, mid);
        if (painters <= m) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

int main() {
    int n = 4, m = 2;
    int boards[] = {10, 20, 30, 40};

    cout << "The minimum time required is: " << painterPart(boards, n, m) << endl;
    return 0;
}
