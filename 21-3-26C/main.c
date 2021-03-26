//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n,i,flag=1;
//    scanf("%d",&n);
//    for(i=2;i<sqrt(n);i++)
//        if(n%i==0)
//            flag=0;
//    if(flag&&n!=1)
//        printf("Yes");
//    else
//        printf("No");
//    return 0;
//}#include<stdio.h>
//int main()
//{
//    int n,count=0,score,flag=0,i,tmp;
//    scanf("%d%d",&score,&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&tmp);
//        count++;
//        if(tmp==score)
//            break;
//        else if(tmp<0)
//        {
//            flag=1;
//            break;
//        }
//        else if(tmp<score)
//            printf("Too small\n");
//        else if(tmp>score)
//            printf("Too big\n");
//    }
//    if(flag||i>=n)
//        printf("Game Over");
//    else
//        switch(count)
//        {
//            case 1:
//                printf("Bingo!");
//                break;
//            case 2:
//            case 3:
//                printf("Lucky You!");
//                break;
//            default:
//                printf("Good Guess!");
//        }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i,n=10;
//    for(i=0;i<n;)
//    {
//        continue;
//        i++;
//    }
//    printf("1");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,d,i,k,j,count,r1=0,r2=0;
//    float e,tmp;
//    scanf("%d%f%d",&n,&e,&d);
//    for(i=0;i<n;i++)
//    {
//        count=0;
//        scanf("%d",&k);
//        for(j=0;j<k;j++)
//        {
//            scanf("%f",&tmp);
//            if(tmp<e)
//                count++;
//        }
//        if(count>k/2&&k>d)
//            r2++;
//        else if(count>k/2&&k<=d)
//            r1++;
//    }
//    printf("%.1f%% %.1f%%",(float)r1*100/n,(float)r2*100/n);
//    return 0;
//}
//#include <iostream>
//#include <cstdio>
//#include <string.h>
//using namespace std;
//int main() {
//    int n, cnt = 0;
//    char a[50], b[50];
//    double temp, sum = 0.0;
//    cin >> n;
//    for(int i = 0; i < n; i++) {
//        scanf("%s", a);
//        sscanf(a, "%lf", &temp);
//        sprintf(b, "%.2f",temp);
//        int flag = 0;
//        for(int j = 0; j < strlen(a); j++)
//            if(a[j] != b[j]) flag = 1;
//        if(flag || temp < -1000 || temp > 1000) {
//            printf("ERROR: %s is not a legal number\n", a);
//            continue;
//        } else {
//            sum += temp;
//            cnt++;
//        }
//    }
//    if(cnt == 1)
//        printf("The average of 1 number is %.2f", sum);
//    else if(cnt > 1)
//        printf("The average of %d numbers is %.2f", cnt, sum / cnt);
//    else
//        printf("The average of 0 numbers is Undefined");
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//using namespace std;
//int main() {
//    int n, cnt = 0;
//    char a[50], b[50];
//    double temp, sum = 0.0;
//    scanf("%d",&n);
//    for(int i = 0; i < n; i++) {
//        scanf("%s", a);
//        sscanf(a, "%lf", &temp);
//        sprintf(b, "%.2f",temp);
//        int flag = 0;
//        for(int j = 0; j < strlen(a); j++)
//            if(a[j] != b[j]) flag = 1;
//        if(flag || temp < -1000 || temp > 1000) {
//            printf("ERROR: %s is not a legal number\n", a);
//            continue;
//        } else {
//            sum += temp;
//            cnt++;
//        }
//    }
//    if(cnt == 1)
//        printf("The average of 1 number is %.2f", sum);
//    else if(cnt > 1)
//        printf("The average of %d numbers is %.2f", cnt, sum / cnt);
//    else
//        printf("The average of 0 numbers is Undefined");
//    return 0;
//}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,g,c,N;

    scanf(" %d%d",&m,&N);

    for(c=1;c<=N;c++)
    {
        scanf("%d",&g);
            if( g<0&&c<=N)
            {  printf("Game Over");
             exit(0);
            }


             else if(g>m)
            {
                printf("Too big\n");
            }
            else if(g<m)
            {
                printf("Too small\n");
            }
            else
            {
                   if(c==1)
                   {
                       printf("Bingo\n");
                       exit(0);
                   }
                   else if((c>1)&&(c<=3))
                   {
                       printf("Lucky You\n");
                       exit(0);
                   }
                   else if(c>3&&c<=N)
                   {
                       printf("Good Guess\n");
                       exit(0);
                   }

            }

    }
    printf("Game Over");


        return 0;
}
