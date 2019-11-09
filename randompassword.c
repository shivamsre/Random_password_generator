#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    int i=3,j=3,k=9,l=9,n=0,q=1;
    int v,t,ch=0;
    char lowerchar[]={'v','n','g','k','l','a','c','e','p','s','u','h','o','b','m','i','z','x','k','f','d','t','y','r','w','q'},
    upperchar[]={'F','D','Q','B','R','A','T','H','Z','V','K','L','O','J','M','S','Y','E','P','W','X','N','G','U','C','I'},
    specialchar[]={'=','!','@','#','&','+','?','~','$','*'},
    integer[]={'4','1','2','7','8','3','5','9','0','6'};

    pro:
    printf("\nEnter length of password (between 12 to 32)\n");
    scanf("%d",&v);
    if(v<12)
    {
        printf("Please check the input and try again.....\n");
        goto pro;
    }

        else if(v>32)
        {
             printf("Please check the input and try again.....\n");
            goto pro;
        }
else
{
    printf("RANDOM PASSWORD GENERATED IS\n\n");
    printf("\t");
    for(t=0;t<v;t++)
    {

        i=((i * 27) + 1) % 25,
        j=((j * 27) + 1) % 25,
        k=((k * 35) + 1) % 11,
        l=((l * 35) + 1) % 11,
        q=((q * 19) + 2) % 9;

        int backup[]={tolower(upperchar[i]),lowerchar[j],specialchar[k],integer[l],lowerchar[j],specialchar[k],upperchar[i],integer[l],
        integer[l],specialchar[k],specialchar[k],upperchar[i],lowerchar[j],integer[l],toupper(upperchar[i])};

        printf("%c",backup[q]);

    }
}
printf("\n\n\nTo generate password again press 1\nOr 2 to exit.!\n");
scanf("%d",&ch);
if(ch==1)
goto pro;
else
    exit(0);
}
