#include<stdio.h>
#include<string.h>

int main()
    {
        int t,sl,i,f;
        char str[101], fc,sc;
        printf("Enter number of test cases: ");
        scanf("%d",&t);
        while(t--)
        {
            printf("\n\nEnter the letter code given on the ticket: ");
            scanf("%s",str);
            sl=strlen(str);
            fc=str[0];
            sc=str[1];
            f=1;
            for(i=0; i<sl; i=i+2)
                {
                    if(str[i] != fc)
                    {
                        f=0;
                        break;
                    }
                }
            if(f==1)
                {
                    for(i=1; i<sl; i=i+2)
                    {
                        if(str[i] != sc)
                        {
                            f=0;
                            break;
                        }
                    }
                }

            if(fc==sc)
                f=0;

            if(f==1)
                printf("YES\n");
            if(f==0)
                printf("NO\n");
        }
        return 0;
    }
