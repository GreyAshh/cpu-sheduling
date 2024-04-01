#include<stdio.h>
void main()
{
        int bsize[10],psize[10],bno,pno,flag[10],allocation[10],i,j;
        for(i=0;i<10;i++)
        {
                flag[i]=0;
                allocation[i]=-1;
        }
        printf("Enter no. of blocks: ");
        scanf("%d",&bno);
        printf("\nEnter size of each block: ");
        for(i=0;i<bno;i++)
                scanf("%d",&bsize[i]);
        printf("\nEnter no. of processes: ");
        scanf("%d",&pno);
        printf("Enter size of each process: ");
        for(i=0;i<pno;i++)
                scanf("%d",&psize[i]);
        for(int i=0;i<pno;i++)
        {
                for(int j=0;j<bno;j++)
                {
                        if(bsize[j]>=psize[i])
                        {
                                //allocation block j to p[i] process
                                allocation[i]=j;
                                //Reduce available memory in thi block.
                                bsize[j]=0;
                                break;
                        }
                }
        }
        printf("\nProcess No.\tProcess Size\tBlock no.\n");
        for(int i=0;i<pno;i++)
        {
                printf("%d\t\t%d\t\t",i+1,psize[i]);
                if(allocation[i]!=-1)
                        printf("%d\n",allocation[i]+1);
                else
                        printf("Not Allocated\n");
        }
}
