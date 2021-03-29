#include<stdio.h>
int main()
{
    int n,x,k,max,l=0,fak;
    scanf("%d",&n);
    int s[n],pos[n],ans[n];
    for(int i=0;i<n;i++)
    {
         scanf("%d",&s[i]);
    }
    for(int i=0;i<n;i++)
    {
        k=1;
         for(int j=0;j<n;j++)
            {
                    if(s[i]==s[j])
                    {
                        pos[i]=k++;
                    }
            }
    }
    max=pos[0];
     for(int i=0;i<=n;i++)
    {
        if(max<pos[i])
        {
            max=pos[i];
        }
    }
 for(int i=0;i<n;i++)
    {
        if(pos[i]==max)
        {
            ans[l]=s[i];
            l++;
            //printf("%d\n",s[i]);
        }
    }
   /* for(int i=0;i<l;i++)
    {
        for(int j=0;j<l;j++)
        {
            if(ans[i]<ans[j])
            {
                printf("%d",s[i]);break;
            }
    }*/
    for(int i=1;i<l;i++)
    {
         for(int j=0;j<l;j++)
            {
                if(ans[i]<ans[j])
                {
                    fak=ans[i];
                    ans[i]=ans[j];
                    ans[j]=fak;
                }
            }
    }
    for(int i=0;i<l;i++)
    {
        if(i!=l-1)
        {
            if(ans[i]!=ans[i+1])
            {
                printf("%d ",ans[i]);
            }
        }
        else
        {
            printf("%d ",ans[i]);
        }
    }
    /*
    for(int i=0;i<n;i++)
    {
         printf("%d",s[i]);
    }*/
}
