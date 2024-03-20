//Fcfs



#include<stdio.h>

#include<stdlib.h>

void main()

{

int n, seekTime=0, diff;

printf("Enter the size of Queue: ");

scanf("%d", &n);

int queue[n+1];

printf("Enter the Queue: ");

for(int i=1;i<=n;i++) scanf("%d",&queue[i]);

printf("Enter the initial head position: ");

scanf("%d", &queue[0]); /* head element */ printf("\nMovement of Cylinders\n");

for(int i=0;i<n;i++)

{

diff= abs(queue[i+1] - queue[i]);

seekTime+= diff;

printf("%d -> ", queue[i]);

}

printf("%d", queue[n]);

printf("\nTotal Seek Time: %d", seekTime);

printf("\nAverage Seek Time = %f", (float) seek Time/n);

}



//Scan




#include<stdio.h>

void main()

{

int n,head, max, diff, temp.temp1=0,temp2=0,seek=0; int i,j,k;

printf("Enter the max range of disk: "); scanf("%d",&max);

printf("Enter the initial head position: "); scanf("%d",&head);

printf("Enter the size of queue request: "); scanf("%d",&n);

int queue[n+2].queue1 [n+2], queue2[n+2];

printf("Enter the queue of disk positions to be read\n"); for(i=1;i<=n;i++)

{

scanf("%d",&temp); temp1++; }

if(temp>=head){ queue1[temp1]=temp;

else{

queue2[temp2]=temp;

temp2++;

}

or(i=0;i<temp1-1;i++)

{

for(j=0;j<temp1-1-1;j++) {if(queue1[j]>queue1[j+1]){

temp=queue1[j]):

}

queue1[j]=queue1[j+1];

queue1[j+1]=temp;

}

}
for(i=0;i<temp2-1;i++){

for(j=0;j<temp2-i-1;j++){ if(queue2[j]<queue2[j+1]){ temp=queue2[j]: queue2[j]=queue2[j+1]; }

queue2[j+1]=temp;

}

}

queue[0]=head;

for(i=1,j=0;j<temp1;i++,j++) queue[i]=queue1[j];

queue[i]=max;

for(i=temp1+2.j=0;j<temp2;i++.j++) queue[i]=queue2[j];

for(i=0;i<n+1;i++){

diff-abs(queue[i+1]-queue[i]);

seek+=diff;

printf("%d -> ".queue[i]);

}

printf("%d", queue[n+1]);

printf("\n Total seek time is %d\n",seek);

printf("Average seek time is %f\n",seek/(float)n);

}




//C scan




#include<stdio.h>

void main()

{ int n,head, max, diff, temp,temp1=0,temp2=0,seek=0; int i,j,k;

printf("Enter the max range of disk: "); scanf("%d",&max);

printf("Enter the initial head position: "); scanf("%d",&head);

printf("Enter the size of queue request: "); scanf("%d",&n);

int queue[n+3], queue1 [n+3].queue2[n+3];

printf("Enter the queue of disk positions to be read\n"); for(i=1;i<=n;i++)

{

scanf("%d",&temp);

if(temp>=head){ queue1[temp1]=temp;

temp1++; }

else{

queue2[temp2]=temp;

temp2++;

}

}

for(i=0;i<temp1-1;i++)

{

for(j=0;j<temp1-i-1;j++)

{if(queue1[j]>queue1[j+1]){

temp=queue1[j]:

}

queue1[j]=queue1[j+1];

queue1[j+1]=temp;

}

}
for(i=0;i<temp2-1;i++){

for(j=0;j<temp2-i-1;j++){ if(queue2[j]>queue2[j+1]){

temp-queue2[j]:

queue2[j]=queue2[j+1];

queue2[j+1]=temp;

}

}

}

queue[0]=head;

for(i=1,j=0;j<temp1;i++,j++) queue[i]=queue1[j];

queue[i]=max;

queue[i+1]=0;

for(i=temp1+3,j=0;j<temp2;i++,j++) queue[i]=queue2[j];

for(i=0;i<n+2;i++){

diff=abs(queue[i+1]-queue[i]);

seek+=diff;

printf("%d -> ",queue[i]);

}

printf("%d", queue[n+2]);

printf("\n Total seek time is %d\n",seek);

printf("Average seek time is %f\n",seek/(float)n);

}
