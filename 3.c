#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int mdtc=1,mntc=1,c=0,d=0;
char ins[20],line[20],str[10],op[10],ala[10];
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
	int l,i,j=0,f=0,flag=0,index=0,count=1;
	FILE *f1,*f2;
	f1=fopen("d://ourmacro/input.txt","r+");
	f2=fopen("d://ourmacro/output.txt","w+");
	fscanf(f1,"%s",ins);
	while((strcmp(ins,"END"))!=0)
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
							//i=0;
							l=strlen(op);
						//	printf("%c",op[i]);
							for(i=0;i<l;i++)
								if(op[i]=='&')
									ala[index++]=op[i+1];
							/*for(i=0;i<index;i++)
								printf("%c ",ala[i]);*/
								c++;d++;
							fscanf(f1,"%s%s",ins,op);
							//strcpy(mdt[c].opr,"");
							count=48;
							while((strcmp(ins,"MEND"))!=0)
							{
								flag=0;
									mdt[c].mdtc1=mdtc;
							       	strcpy(mdt[c].ins1,ins);
							       	//strcpy(mdt[c].opr,op);
							       	l=strlen(op);
							       //	printf("%d",l);
							       	for(i=0;i<l;i++)
									{
									     	for(j=0;j<index;j++)
												{
													if(op[i]==ala[j])
													{
														flag=1;
														break;
													}
												}
											if(flag!=1)
												mdt[c].opr[f++]=op[i];
											else
											{
												mdt[c].opr[f++]='#';
												mdt[c].opr[f++]=(char)count;
												count++;
									    	}
									    	//flag=0;
									}	
									//	puts(mdt[c].opr);	
									mdtc++;c++;
									fscanf(f1,"%s%",ins,op);
							
									//l=strlen(op);
							}
							mdt[c].mdtc1=mdtc;
							strcpy(mdt[c].ins1,ins);
							c++;mdtc++;
							//fscanf(f1,"%s%s",ins,op);
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
			
		//ins[1]="hello";
		fscanf(f1,"%s%s",line,op);
		puts(line);
		fscanf(f1,"%s",line);
		printf("%s",line);
}

