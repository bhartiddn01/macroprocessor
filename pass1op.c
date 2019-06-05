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
	FILE *f1;
	f1=fopen("d://ourmacro/input.txt","r+");
	fscanf(f1,"%s",ins);
	/*l=strlen(ins);
	for(i=0;i<l;i++)
	{
		if(ins[i]!=32)
				str[j++]=ins[i];
	}*/
	//puts(ins);
	//fscanf(f1,"%s",ins);
	//	puts(ins);
	while((strcmp(ins,"MEND"))!=0)
	{
		if((strcmp(ins,"MACRO"))==0)
		{
					fscanf(f1,"%s%s",ins,op);//reads next line after macro
					//puts(ins);
					//puts(op);
					j=0;
					/*for(i=0;i<10;i++)
		    		{
				    	if(ins[i]!=32)
						str[j++]=ins[i];
			    	}*/
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
					/*j=0;
					for(i=0;i<10;i++)
					{
						if(ins[i]!=32)
						str[j++]=ins[i];
					}*/
				}
			else
				{
					mdt[c].mdtc1=mdtc;
					strcpy(mdt[c].ins1,ins);
					strcpy(mdt[c].opr,op);
					mdtc++;c++;
					fscanf(f1,"%s%s",ins,op);
					/*j=0;
					for(i=0;i<10;i++)
					{
						if(ins[i]!=32)
							str[j++]=ins[i];
					}*/
		        }
		}
		mdt[c].mdtc1=mdtc;
		strcpy(mdt[c].ins1,ins);
		c++;mdtc++;
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

