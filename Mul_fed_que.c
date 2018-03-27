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
	for (i = 0; i < no_of_processes; i++){
		process[i] = i;
		printf("Please Enter the Burst Time of the Process %d : ", i);
		scanf("%d", &burst_time[i]);
		printf("Student or Faculty Queue\n[ 0 / 1 ] : ");
		scanf("%d", &queue_type[i]);
	}

	system("cls");

	printf("These are Student Processes\n");
	printf("\nPROCESS NO\tBURST TIME");
	for(i=0;i<no_of_processes;i++){
		if(queue_type[i]==0){
			printf("\n%d \t\t %d ", process[i], burst_time[i]);
		}
	}

	printf("\nThese are Faculty Processes\n");
	printf("\nPROCESS NO\tBURST TIME");
	for(i=0;i<no_of_processes;i++){
		if(queue_type[i]==1){
			printf("\n%d \t\t %d ", process[i], burst_time[i]);
		}
	}
