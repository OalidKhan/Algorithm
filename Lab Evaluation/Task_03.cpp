#include<bits/stdc++.h>
using namespace std;

struct Job {
    int id;
    int deadline;
    int profit;
};

bool compare(Job a, Job b) {
    return a.profit > b.profit;
}

void jobSequencing(Job jobs[], int n) {

    sort(jobs, jobs + n, compare);
    int maxDeadline = 0;

    for (int i = 0; i < n; i++) {
        maxDeadline = max(maxDeadline, jobs[i].deadline);
    }

    int slot[maxDeadline + 1];
    for (int i = 0; i <= maxDeadline; i++) {
        slot[i] = -1;
    }

    int totalProfit = 0;
    int jobCount = 0;

    for (int i = 0; i < n; i++) {

        for (int j = min(maxDeadline, jobs[i].deadline);
             j >= 1; j--) {

            if (slot[j] == -1) {

                slot[j] = jobs[i].id;
                totalProfit += jobs[i].profit;
                jobCount++;

                break;
            }
        }
    }

    cout << "\nMaximum Profit: " << totalProfit << endl;
    cout << "Job Sequence: ";

    for (int i = 1; i <= maxDeadline; i++) {
        if (slot[i] != -1) {
            cout << "J" << slot[i] << " ";
        }
    }

    cout << "\nNumber of Jobs: " << jobCount << endl;
}

int main() {

    int n;

    cout << "Enter number of jobs: ";
    cin >> n;

    Job jobs[n];

    for (int i = 0; i < n; i++) {

        jobs[i].id = i + 1;

        cout << "Enter deadline and profit for Job "
             << i + 1 << ": ";

        cin >> jobs[i].deadline >> jobs[i].profit;
    }

    jobSequencing(jobs, n);

    return 0;
}
