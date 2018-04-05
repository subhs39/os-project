//Subham Kumar Mahato
//11612510
//subhammahato39@hotmail.com
//B40 K1604

#include<stdio.h>
#include <stdlib.h>
int main()
{
	int process[25], burst_time[25], queue_type[25], waiting_time[25], turnaround_time[25];
	int i, k, no_of_processes, temp;
	float waiting_avg, turnaround_avg;
	char ch;
	printf("Total No of Processes ?? : ");
	scanf("%d", &no_of_processes);
	for (i = 0; i < no_of_processes; i++) {
		process[i] = i;
		printf("Please Enter the Burst Time of the Process %d : ", i);
		scanf("%d", &burst_time[i]);
		printf("Student or Faculty Queue\n[ 0 / 1 ] : ");
		scanf("%d", &queue_type[i]);
	}

	system("cls");

	printf("These are Student Processes\n");
	printf("\nPROCESS NO\tBURST TIME");
	for (i = 0; i < no_of_processes; i++) {
		if (queue_type[i] == 0) {
			printf("\n%d \t\t %d ", process[i], burst_time[i]);
		}
	}

	printf("\nThese are Faculty Processes\n");
	printf("\nPROCESS NO\tBURST TIME");
	for (i = 0; i < no_of_processes; i++) {
		if (queue_type[i] == 1) {
			printf("\n%d \t\t %d ", process[i], burst_time[i]);
		}
	}

	getchar();
	getchar();
	system("cls");

	for (i = 0; i < no_of_processes; i++)
		for (k = i + 1; k < no_of_processes; k++)
			if (queue_type[i] > queue_type[k]) {
				temp = process[i];
				process[i] = process[k];
				process[k] = temp;
				temp = burst_time[i];
				burst_time[i] = burst_time[k];
				burst_time[k] = temp;
				temp = queue_type[i];
				queue_type[i] = queue_type[k];
				queue_type[k] = temp;
			}

	waiting_avg = waiting_time[0] = 0;
	turnaround_avg = turnaround_time[0] = burst_time[0];
	for (i = 1; i < no_of_processes; i++) {
		waiting_time[i] = waiting_time[i - 1] + burst_time[i - 1];
		turnaround_time[i] = turnaround_time[i - 1] + burst_time[i];
		waiting_avg = waiting_avg + waiting_time[i];
		turnaround_avg = turnaround_avg + turnaround_time[i];
	}
	printf("\nPROCESS NO\t Student/Faculty \tBURST TIME\tWAITING TIME\tTURNAROUND TIME");
	for (i = 0; i < no_of_processes; i++)
		printf("\n%d \t\t %d \t\t\t %d \t\t %d \t\t %d ", process[i], queue_type[i], burst_time[i], waiting_time[i], turnaround_time[i]);
	printf("\nAverage Waiting Time is : %f", waiting_avg / no_of_processes);
	printf("\nAverage Turnaround Time is : %f", turnaround_avg / no_of_processes);
}
