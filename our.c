#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int mdtc=1,mntc=1,c=0,d=0;
char ins[20],str[10],op[10];
struct mdtable
{
	int mdtc1;
	char ins1[10];
	char opr[10];
}mdt[10];
struct mntable
{
	int mdtc2,mntc2;
	char ins2[10];
}mnt[10];
void main()
{
	int l,i,j=0;
	FILE *f1,*f2;
	f1=fopen("d://ourmacro/input.txt","r+");
	f2=fopen("d://ourmacro/output.txt","w+");
	fscanf(f1,"%s",ins);
	while(strcmp(ins,"END")!=0)
	{
		if((strcmp(ins,"MACRO"))==0)
		{
					fscanf(f1,"%s%s",ins,op);//reads next line after macro
					mdt[c].mdtc1=mdtc;       //we will have all instruction as single alphabet
					strcpy(mdt[c].ins1,ins);
					strcpy(mdt[c].opr,op);
					mnt[d].mntc2=mntc;
					strcpy(mnt[d].ins2,ins);
					mnt[d].mdtc2=mdtc;
					mdtc++;
					mntc++;
					c++;d++;
					fscanf(f1,"%s%s",ins,op);
					while(strcmp(ins,"MEND")!=0)
					{
						mdt[c].mdtc1=mdtc;
						strcpy(mdt[c].ins1,ins);
						strcpy(mdt[c].opr,op);
						mdtc++;c++;
						fscanf(f1,"%s%s",ins,op);
					}
					mdt[c].mdtc1=mdtc;
					strcpy(mdt[c].ins1,ins);
					c++;mdtc++;
				//	fscanf(f1,"%s",ins);
		}
		else
		{
				fscanf(f1,"%s",ins);
				fprintf(f2,"%s\n",ins);	
		}
	}	
		for(i=0;i<mdtc-1;i++)
		{
		    	printf("\n%d ",mdt[i].mdtc1);
		    	printf("%s %s",mdt[i].ins1,mdt[i].opr);
		}
		printf("\n");
		for(i=0;i<mntc-1;i++)
		    {
		    	printf("\n%d ",mnt[i].mntc2);
		    	printf("%s ",mnt[i].ins2);
		    	printf(" %d\n",mnt[i].mdtc2);
			}
}
