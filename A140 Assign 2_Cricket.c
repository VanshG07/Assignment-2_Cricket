#include <stdio.h>
#include <string.h>
struct info
{
 char name[20];
 int runs,wic;
 float avg_runs;
 char country[20];
 char category[10];
}player[25];
int main() {
 int n,i;
 printf("Enter the no of Player: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 printf("\nInforamtion of Player %d :\n",i+1);
 printf("\tName of player: ");
 scanf("%s",player[i].name);
 printf("\tRuns: ");
 scanf("%d",&player[i].runs);
 printf("\tWickets: ");
 scanf("%d",&player[i].wic);
 printf("\tAvg: ");
 scanf("%f",&player[i].avg_runs);
 printf("\tCountry: ");
 scanf("%s",player[i].country);
 printf("\tCatagory: ");
 scanf("%s",player[i].category);
 }

 int k=1;
 while(k)
 {
 printf("\n");
 printf("\nPress 1 for Sorting\n");
 printf("Press 2 for Searching\n");
 printf("Press 3 for Show\n");
//SYITA130_Assign_2
 printf("Press 4 No. Batsman of Perticular Country\n");
 printf("Press 5 No. Bowler of Perticular Country\n");
 printf("Press 6 Bowler with maximum wickets\n");
 printf("Press 7 Batsman with highest average score\n");
 printf("Press 0 to Quit\n");
 printf("\nEnter: ");
 scanf("%d",&k);
 printf("\n-----------------------------------\n\n");
 switch(k)
 {
 case 1:{
 for(i=0;i<n-1;i++)
 {
 for(int j=0;j<n-i-1;j++)
 {
 if(player[j].avg_runs>player[j+1].avg_runs)
 {
 struct info temp;
 temp=player[j];
 player[j]=player[j+1];
 player[j+1]=temp;
 }
 }
 }
 printf("Sorting Done.......\n");
 }
 break;
 case 2:{
 char name[20];
 printf("Enter Player Name:");
 scanf("%s",name);
 for(i=0;i<n;i++)
 {
 if(!strcmp(player[i].name,name))
 {

printf("\n\nName\t\tRuns\t\tWickets\t\tAvg\t\tCountry\t\tCatagory");

printf("\n%s\t\t%d\t\t\t%d\t\t\t%.2f\t\t%s\t\t%s",player[i].name,player[i].runs,
player[i].wic,player[i].avg_runs,player[i].country,player[i].category);

 }
 }

 }
 break;
 case 3:{
 printf("Display Player info:");
 printf("\n\nName\t\tRuns\t\tWickets\t\tAvg\t\tCountry\t\tCatagory");
 for(i=0;i<n;i++)
 {

printf("\n%s\t\t%d\t\t\t%d\t\t\t%.2f\t\t%s\t\t%s",player[i].name,player[i].runs,
player[i].wic,player[i].avg_runs,player[i].country,player[i].category);
 }
 }
 break;
 case 4:{
 char name[20];
 int count=0;
 printf("Enter Country Name: ");
 scanf("%s",name);
 for(i=0;i<n;i++)
 {
 if(!strcmp(player[i].country,name) &&
!strcmp(player[i].category,"Batsman"))
 count++;
 }

 printf("No of Batsman in %s: %d",name,count);
 }
 break;
 case 5:{
 char name[20];
 int count=0;
 printf("Enter Country Name: ");
 scanf("%s",name);
 for(i=0;i<n;i++)
 {
 if(!strcmp(player[i].country,name) &&
!strcmp(player[i].category,"Bowler"))
 count++;
 }
 printf("No of Bolwer in %s: %d",name,count);
 }
 break;

 case 6:{
 int max=0,temp=0;
 for(i=0;i<n;i++)
 {
 if(player[i].wic>max)
 {
 max=player[i].wic;
 temp=i;
 }
 }
 printf("Bowler with maximum wickets is: %s",player[temp].name);
 }
 break;
 case 7:{
 int max=0,temp=0;
 for(i=0;i<n;i++)
 {
 if(player[i].avg_runs>max)
 {
 max = player[i].avg_runs;
 temp=i;
 }
 }
 printf("Batsman with highest average score is: %s",player[temp].name);
 }
 }

 printf("\n\nPress Enter to continue.......");
 getchar();
 getchar();
 printf("\n\n");
 }

 return 0;
}