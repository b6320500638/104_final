#include<stdio.h>
int main()
{
    int n,m,p,a=0,sum=0,sum1=0,sum2=0,sum3=0,sum4=0,check1=1,check2=1,check3=1,check=1;
    scanf("%d %d %d",&n ,&m ,&p);printf("\n");printf("\n");
    int N[n][n],M[m][m],P[p][p],SUM1[n+n+2],SUM2[m+m+2],SUM3[p+p+2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&N[i][j]);
        }
    }printf("\n");printf("\n");
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&M[i][j]);
        }
    }printf("\n");printf("\n");
     for(int i=0;i<p;i++)
    {
        for(int j=0;j<p;j++)
        {
            scanf("%d",&P[i][j]);
        }
    }printf("\n");printf("\n");
    a=0;
     for(int i=0;i<n;i++)
    {sum1=0;sum2=0;sum3=0;sum4=0;
        for(int j=0;j<n;j++)
        {
            sum1+=N[i][j];
        }SUM1[a]=sum1;a++;
        for(int j=0;j<n;j++)
        {
            sum2+=N[j][i];
        }SUM1[a]=sum2;a++;
        for(int j=0;j<n&&check;j++)
        {
            sum3+=N[j][j];
        }if(check){SUM1[a]=sum3;a++;}
        for(int j=0;j<n&&check;j++)
        {
            sum4+=N[j][n-j-1];
        }if(check){SUM1[a]=sum4;a++;}
        check=0; /*if(sum!=sum1&&sum1!=sum2&&sum1&&sum3&&sum1!=sum4&&sum2!=sum3&&sum2!=sum4&&sum3!=sum4)
        {
            check1=0;
            break;
        }*/
    }check=1;
    for(int i=0;i<n+n+2;i++)
    {
         for(int j=0;j<n+n+2;j++)
        {
            if(SUM1[i]!=SUM1[j])
            {
                check1=0;break;
            }
        }
    }
a=0;
     for(int i=0;i<m;i++)
    {sum1=0;sum2=0;sum3=0;sum4=0;
        for(int j=0;j<m;j++)
        {
            sum1+=M[i][j];
        }SUM2[a]=sum1;a++;
        for(int j=0;j<m;j++)
        {
            sum2+=M[j][i];
        }SUM2[a]=sum2;a++;
        for(int j=0;j<m&&check;j++)
        {
            sum3+=M[j][j];
        }if(check){SUM2[a]=sum3;a++;}
        for(int j=0;j<m&&check;j++)
        {
            sum4+=M[j][m-j-1];
        }if(check){SUM2[a]=sum4;a++;}
        /* if(sum!=sum1&&sum1!=sum2&&sum1&&sum3&&sum1!=sum4&&sum2!=sum3&&sum2!=sum4&&sum3!=sum4)
        {
            check2=0;
            break;
        }*/check=0;
    }
    for(int i=0;i<n+n+2;i++)
    {
         for(int j=0;j<n+n+2;j++)
        {
            if(SUM2[i]!=SUM2[j])
            {
                check2=0;break;
            }
        }
    }
a=0;check=1;
     for(int i=0;i<p;i++)
    {sum1=0;sum2=0;sum3=0;sum4=0;
        for(int j=0;j<p;j++)
        {
            sum1+=P[i][j];
        }SUM3[a]=sum1;a++;
        for(int j=0;j<p;j++)
        {
            sum2+=P[j][i];
        }SUM3[a]=sum2;a++;
        for(int j=0;j<p&&check;j++)
        {
            sum3+=P[j][j];
        }if(check){SUM3[a]=sum3;a++;}
        for(int j=0;j<p&&check;j++)
        {
            sum4+=P[j][p-j-1];
        }if(check){SUM3[a]=sum4;a++;}
          /*if(sum!=sum1&&sum1!=sum2&&sum1&&sum3&&sum1!=sum4&&sum2!=sum3&&sum2!=sum4&&sum3!=sum4)
        {
            check3=0;
            break;
        }*/check=0;
    }
    for(int i=0;i<n+n+2;i++)
    {
         for(int j=0;j<n+n+2;j++)
        {
            if(SUM3[i]!=SUM3[j])
            {
                check3=0;break;
            }
        }
    }
    if(check1)
    {
        printf("no\n");
    }
    else
    {
        printf("yes\n");
    }
     if(check2)
    {
        printf("no\n");
    }
    else
    {
        printf("yes\n");
    }

     if(check3)
    {
        printf("no\n");
    }
    else
    {
        printf("yes\n");
    }



}
