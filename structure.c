#include<stdio.h>
struct student
    {
        char name[40];
        int marks[3];
        int rn;
    };
    
int main()
{ struct student s1[4];
  int i,j,sum=0,average,m;
  for(i=0;i<4;i++)
  { printf("enter name : \n");
    gets(s1[i].name);
    printf("enter roll number : \n");
    scanf("%d",&s1[i].rn);
    printf("3 subject marks \n");
    for(j=0;j<3;j++)
    {
        
        scanf("%d",&s1[i].marks[j]);
        sum=sum+(s1[i].marks[j]);
    
    }   
    average =sum/3;
  }
printf("\n name \t rn \t average \n");
  for(i=0;i<4;i++)
  {
    printf("\n %s \t %d \t %d \n",s1[i].name,s1[i].rn,average);
  }

  return 0;  
}