/* 1
#include<stdio.h>
int main()
{
    int i,j;
    printf("star pattern\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j<=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/* 2
#include<stdio.h>
int main()
{
    int i,j;
    printf("star pattern\n");
    while(i<=5) {
        for(j=1;j<=5;j++){
            if(j>=6-i)
                printf("*");
            else
                printf(" ");
        }
        i++;
        printf("\n");
    }
}*/
/*3
#include<stdio.h>
int main()
{
    int i,j;
    printf("star pattern \n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j<=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/* 4
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j>=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/* 5
#include<stdio.h>
int main()
{
    int i,j;
    printf("star pattern\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=9;j++){
            if(j>=6-i && j<=4+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/* 6
#include<stdio.h>
int main()
{
    int i,j;
    printf("star pattern\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=9;j++){
            if(j>=i && j<=10-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/* 7
#include<stdio.h>
int main()
{
    int i,j;
    printf("star pattern \n");
    for(i=1;i<=5;i++){
        for(j=1;j<=10;j++){
            if(j<=6-i || j>=5+i)
                printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}*/
/* 8
#include<stdio.h>
int main()
{
    int i,j,k=1;
    printf("numbers pattern\n");
    for(i=1;i<=4;i++){
            k=1;
        for(j=1;j<=7 ;j++){
            if(j>=5-i && j<=3+i){
                printf("%d",k);
                j<4?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/* 9
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++){
        k=1;
        for(j=1;j<=7;j++){
            if(j>=i && j<=8-i){
                printf("%d",k);
            j<4?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/

/* 10
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++){
        k=1;
        for(j=1;j<=7;j++){
            if(j<=5-i || j>=3+i){
                printf("%d",k);
            }
            else
                printf(" ");
                j<4?k++:k--;
        }
        printf("\n");
    }
}*/
/* 11
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++){
        k='A';
        for(j=1;j<=9;j++){
            if(j>=6-i && j<=4+i){
                printf("%c",k);
                j<5?k++:k--;
        }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/* 12
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++){
        k='A';
        for(j=1;j<=7;j++){
            if(j>=i && j<=8-i){
                printf("%c",k);
                j<4?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/* 13
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=7;i++){
        k='A';
        for(j=1;j<=13;j++){
            if(j<=8-i || j>=6+i)
                printf("%c",k);
            else
                printf(" ");
            j<7?k++:k--;
        }
        printf("\n");
    }
    return 0;
}*/
/* 15
#include<stdio.h>
int main()
{
    int i,j,n;
    printf(" enter a numbers");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==1 || i==j || i==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/* 15
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter a numbers");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==n|| j==n+1-i|| i==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/* 16
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=4;i++){
        for(j=0;j<=8;j++){
            if(j==4-i ||j==4+i ||i==4 )
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/* 17
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<9;j++){
            if(j==i|| j==8-i || i==0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
/* 18
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=4;i++){
        for(j=0;j<=8;j++){
            if(j>=4-i && j<=4+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
     for(i=0;i<=3;i++){
        for(j=0;j<=8;j++){
            if(j>=1+i && j<=7-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
     }
     return 0;
}*/

#include<stdio.h>
int main()
{
  int i,j;
  for(i=0;i<=2;i++){
    for(j=0;j<=18;j++){
        if((j>=2-i && j<=6+i)|| (j>=12-i && j<=16+i))
           printf("*");
        else
            printf(" ");
    }
    printf("\n");
  }
  for(i=0;i<=9;i++){
    for(j=0;j<=18;j++){
            if(i==0 && j==6)
            printf("sonu&&");
            if(i==0 && j>=6 && j<=11)
            continue;

        if(j>=i && j<=18-i)
            printf("*");
        else
            printf(" ");
    }
    printf("\n");
  }
  return 0;
}


