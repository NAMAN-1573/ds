#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    char branch[5];
    char sec,grade;
     int year[1];
};
int main(){
struct student s[5];
for(int i=0;i<5;i++){
    printf("ENTER NAME:");
    gets(s[i].name);
    printf("ENTER BRANCH:");
    gets(s[i].branch);
    printf("ENTER THE SEC AND GRADE :");
    scanf("%c %c",&s[i].sec,&s[i].grade);
    printf("Eter the year:");
    scanf("%d",&year);
    fflush(stdin);  //whenever last is int and start is string then we have to clear buffer

}
 printf("Entered records :\n");
for(int j=0;j<5;j++){
   
   puts(s[j].name);
   puts(s[j].branch);
   printf("%c %c",s[j].sec,s[j].grade);

}
return 0;
    
}
