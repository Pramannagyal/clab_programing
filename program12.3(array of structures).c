#include<stdio.h>
void main()
{
    struct student
    {
      int m1,m2,m3;
      int tot;
      float avg;
      char r;
    };
    int n;
    printf("enter the no of students");
    scanf("%d",&n);

struct student s[n];
printf("enter the student marks  ");
for(int i=0;i<n;i++)
{
  scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
  s[i].tot=s[i].m1+s[i].m2+s[i].m3;
  s[i].avg=(float)s[i].tot/3.0;
  if(s[i].avg>50)
        s[i].r='P';
  else
    s[i].r='F';
}
for(int i=0;i<n;i++)
{
printf("student marklist\n");
printf("subject1:%d\n",s[i].m1);
printf("subject2:%d\n",s[i].m2);
printf("subject3:%d\n",s[i].m3);

printf("total:%d\n",s[i].tot);
printf("average:%f\n",s[i].avg);
printf("result:%c\n",s[i].r);
}



}
