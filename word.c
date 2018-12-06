#include<stdio.h>
#include<stdlib.h>

void play(char w[100],char t[100],int l)
{
	int i=0,a=0,j=0,c=0,k=0,h=0;
	char x,y;
	while(w[i]!='\0')
		{
			if(w[i]=='a'||w[i]=='e'||w[i]=='i'||w[i]=='o'||w[i]=='u')
			{
				y=w[i];
				t[i]=y;
			}
			i++;
		}
		printf("%s\n",t);
		j=0;
	
	while(c!=10)
	{
		printf("enter an alphabet\n");
		scanf(" %c",&x);
		if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
			{
				printf("already displayed\n");
				printf("%s\n",t);
				j++;
			}
			i=0;
			j=0;
			h=0;
			k=0;
		while(w[i]!='\0')
		{
			
		    if(w[i]==x)
			{
				printf("%c is present at position %d\n",w[i],i);
				t[i]=w[i];
				printf("%s\n",t);
				j++;
			}
			i++;
		}
		if(j==0)
		a++;
		while(w[k]!='\0')
		{
			if(t[k]==w[k])
			{
				h++;
			}
			k++;
		}
		if(h==l)
		{
			printf("word guessed\n");
			break;
		}
		if(a==1)
		{
			system("cowsay E");
			printf("%s\n",t);		
}
		if(a==2)
		{
	//		printf("EX\n");
			system("cowsay EX");
			printf("%s\n",t);
		}
		if(a==3)
		{
		//	printf("EXE\n");
			system("cowsay EXE");
			printf("%s\n",t);
	}
		if(a==4)
		{
//			printf("EXEC\n");
			system("cowsay EXEC");
			printf("%s\n",t);
		}
		if(a==5)
		{
//			printf("EXECU\n");
			system("cowsay EXECU");
			printf("%s\n",t);
		}
		if(a==6)
		{
		//	printf("EXECUT\n");
			system("cowsay EXECUT");
			printf("%s\n",t);
}
		if(a==7)
		{
		//	printf("EXECUTE\n");
			system("cowsay EXECUTE");
			printf("%s\n",t);
}


		
		if(a>=8)
		{
			system("cowsay EXECUTED You Lose!!!!!!! ");
			printf("  The entered word was %s\n",w);
			break;
		}
		c++;

	
	}
	
}

void main()
{
	int i,l;
	char w[100],t[100];
	printf("enter the number of letters\n");
	scanf("%d",&l);
	printf("enter a  word:\n");
			system("stty -echo");
		scanf("%s",w);
	system("stty echo");

	for(i=0;i<l;i++)
	{
//		w[i]=getchar();

		
	//	printf("*");
		t[i]='_';

	}
//	printf("%c\n",w[0]	);	
printf("%s\n",t);
	play(w,t,l);
}
