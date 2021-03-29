#include<stdio.h>
int main()
{
   int n,m,k;
   scanf("%d %d",&n,&m);
   if(n>0&&n<32750&&m>0)
   {
       if((n/100000)%10==m)
            {
                n+=1;
            }
        else if((n/10000)%10==m)
            {
                n+=1;
            }
        else if((n/1000)%10==m)
            {
                n+=1;
            }
        else if((n/100)%10==m)
            {
                n+=1;
            }
        else if((n/10)%10==m)
            {
                n+=1;
            }
        else if((n)%10==m)
            {
                n+=1;
            }
        while(n%10!=m&&((n/10)%10)!=m&&((n/100)%10)!=m&&
         ((n/1000)%10)!=m&&((n/10000)%10)!=m&&((n/100000)%10)!=m)
            {
                n++;
            }
    printf("%d",n);}
}
