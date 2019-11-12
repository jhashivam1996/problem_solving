#include <iostream>
using namespace std;

void calcAvrgWatingTime(int arrival_time[], int burst_time[], int no_of_jobs, int time_quantm)
{
    int rem_bt[no_of_jobs];
    int wating_time[no_of_jobs];

    int total_wating_time = 0;
    for (int i = 0; i < no_of_jobs; i++)
    {
        rem_bt[i] = burst_time[i];
    }
    int temp_time = 0;
    while (1)
    {
        bool done = true;
        for (int i = 0; i < no_of_jobs; i++)
        {
            if (rem_bt[i] > 0)
            {
                done = false;
                if (rem_bt[i] > time_quantm)
                {
                    temp_time += time_quantm;
                    rem_bt[i] -= time_quantm;
                }
                else
                {
                    temp_time += rem_bt[i];
                    wating_time[i] = temp_time - burst_time[i];
                    total_wating_time += wating_time[i];
                    rem_bt[i] = 0;
                }
            }
        }
        if (done == true)
            break;
    }
    cout << "Average waiting time: " << (float)total_wating_time / (float)no_of_jobs;
}

int main()
{
    int arrival_time[] = {7, 8, 4, 5, 2};
    int burst_time[] = {1, 2, 5, 6, 7};
    int no_of_jobs = 5; //size of array
    int time_quantm = 2;

    calcAvrgWatingTime(arrival_time, burst_time, no_of_jobs, time_quantm);
}
