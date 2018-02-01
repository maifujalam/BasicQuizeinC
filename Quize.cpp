#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void design();
int score(int,int,int);
void simple();
	int re1[]={3,1,4,3,2,1,3,3,4,2};
	int gre=0;
	int u=0;
main()
{
	aa:
	design();
	int ch,scr=0;
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
				int lol;
			printf("Terms and Conditions to follow:\n\n");
			printf("Each Questions Carries 1 marks.\n");
         	printf("0.25 is reduced for wrong answer.\n");
         	printf("Press 0 to skip a question.\n\n\n");
         	printf("Press 1 to accept Terms and Conditions else press any key to exit:\n");
         	scanf("%d",&lol);
         	if(lol==1)
			simple();
			else
			exit(0);
	     	}
			break;
			case 2:
				{
					printf("All Answers are given Blow:\n");
					for(int kk=1;kk<=10;kk++)
					{
					printf("  %d.",kk);
					printf("%d",re1[kk-1]);
				    }
				    printf("\n\n");
				}
				break;
			case 3:
				{
					printf("Gold Medal for 10 marks.\n");
					printf("Silver Medal for 9-10 marks.\n");
					printf("Bronze Medal for 8-9 marks.\n");
				}
			case 4:
				{
					exit(0);
				}
				default:
					{
						int zz;
						printf("Wrong Choice!Press 1 to try Again else press any key to Exit.");
						scanf("%d",&zz);
						if(zz==1)
						goto aa;
						else
						exit(0);
					}
				
				
			}
			
	}
	
void design()
{
	 system(" COLOR 5F");
    printf("                        * * * * * * * * * * * * * * * * * * * * *");
	printf("\n\n\t\t\t*   Press 1 to  start Quize             *");
	printf("\n\n\t\t\t*   Press 2 to see answers                *");
	printf("\n\n\t\t\t*   Press 3 to  see Prizes              *");
	printf("\n\n\t\t\t*   Press 4 to  Exit:                   *");
	printf("");
	printf("");
	printf("\n");
	printf("\n                        * * * * * * * * * * * * * * * * * * * * *");
}

void simple()
{
	int wa=0;int skp=0;	float m1=0;
	int re[10];
	n11:
	printf("\n1.What is the Largest Animal on Earth?\n");
	printf("1.Elephant  2.Shark  3.Blue Wheal  4.Anaconda\n");
	scanf("%d",&re[0]);
	if(re1[0]==re[0])
	{
	m1=m1+1;
	printf("Correct Answer.\n");
    }
	if(re[0]==0)
	{
	skp++;
	goto n1;
    }
	if(re[0]>4)
	{
	printf("Invalid!Try Again:\n");
	goto n11;
    }
    if(re[0]!=re1[0] && re[0]<=4)
    {
    printf("Wrong Answer.\nCorrect Answer is Blue Wheal.\n");
    wa=wa+1;
    }
    n1:
    n22:
    printf("\n2.What is the Tallest Building on Earth?\n");
    printf("1.Burj Khalifa  2.Taipei 101  3.Lotte World Tower  4.Abraj Al-Bait Clock Tower\n");
    scanf("%d",&re[1]);
    if(re[1]==re1[1])
    {
    m1=m1+1;
    printf("Correct Answer.\n");
    }
    if(re[1]==0)
    {
	skp++;
    goto n2;
    }
    if(re[1]!=re1[1] && re[1]<=4)
    {
    printf("Wrong Answer.\nCorrect Answer is Burj Khalifa.\n");
    wa++;
    }
    if(re[1]>4)
    {
    printf("Invalid!Try Again:\n");
    goto n22;
    }
    n2:
   	n33:
	printf("\n3.C language was developed by?\n");
	printf("1.Jhon Vown Newman  2.Guido van Rossum  3.Bjarne Stroustrup 4.Dennis M. Ritchie\n");
	scanf("%d",&re[2]);
	if(re[2]==re1[2])
	{
		m1++;
		printf("Correct Answer.\n");
	}
	if(re[2]==0)
	{
	skp++;
	goto n3;
    }
	if(re[2]!=re1[2] && re[2]<=4)
	{
	printf("Wrong Answer.\nCorrect Answer is Dennis M. Ritchie\n");
	wa++;
    }
	if(re[2]>4)	
	{
	printf("Invalid!Try Again:\n");
    goto n33;
	}
	n3:
	n44:
	printf("\n4.When was the first e-mail sent ?\n");
	printf("1.1963  2.1969  3.1971  4.1974\n");
	scanf("%d",&re[3]);
	if(re[3]==re1[3])
	{
		m1++;
		printf("Correct Answer.\n");
    }
	if(re[3]==0)
	{
	skp++;
	goto n4;
    }
	if(re[3]!=re1[3] && re[3]<=4)
	{
	printf("Wrong Answer.\nCorrect Answer is 1971.");
	wa++;
    }
	if(re[3]>4)	
	{
	printf("Invalid!Try Again:\n");
    goto n44;
	}
	n4:
	n55:
	printf("\n5.What type of memory is volatile ?\n");
	printf("1.Cache  2.RAM  3.ROM  4.Hard Drive\n");
	scanf("%d",&re[4]);
	if(re[4]==re1[4])
	{
		m1++;
		printf("Correct Answer.\n");
    }
	if(re[4]==0)
	{
	skp++;
	goto n5;
    }
	if(re[4]!=re1[4] && re[4]<=4)
	{
	printf("Wrong Answer.\nCorrect Answer is RAM");
	wa++;
    }
	if(re[4]>4)	
	{
	printf("Invalid!Try Again:\n");
    goto n55;
	}
	n5:
	n66:
	printf("\n6.Which of the below is not an iPhone 4 feature ?\n");
	printf("1.4G  2.Front facing camera  3.HD recording  4.Multitasking \n");
	scanf("%d",&re[5]);
	if(re[5]==re1[5])
	{
		m1++;
		printf("Correct Answer.\n");
    }
	if(re[5]==0)
	{
	skp++;
	goto n6;
    }
	if(re[5]!=re1[5] && re[5]<=4)
	{
	printf("Wrong Answer.\nCorrect Answer is 4G.");
	wa++;
    }
	if(re[5]>4)	
	{
	printf("Invalid!Try Again:\n");
    goto n66;
	}
	n6:
	n77:
	printf("\n7.For reproducing sound the CD audio player uses a ?\n");
	printf("1.Quartz Cristal  2.Titanium Needle  3.Laser Beam  4.Barium Titanium Ceramic\n");
	scanf("%d",&re[6]);
	if(re[6]==re1[6])
	{
		m1++;
		printf("Correct Answer.\n");
    }
	if(re[6]==0)
	{
	skp++;
	goto n7;
    }
	if(re[6]!=re1[6] && re[6]<=4)
	{
	printf("Wrong Answer.\nCorrect Answer is Laser Beam.\n");
	wa++;
    }
	if(re[6]>4)	
	{
	printf("Invalid!Try Again:\n");
    goto n77;
	}
	n7:
	n88:
	printf("\n8.What does SSL stands for ?\n");
	printf("1.System socket layer 2.Secure system login 3.Secure socket layer 4.Secure system login\n");
	scanf("%d",&re[7]);
	if(re[7]==re1[7])
	{
		m1++;
		printf("Correct Answer\n");
    }
	if(re[7]==0)
	{
	skp++;
	goto n8;
    }
	if(re[7]!=re1[7] && re[7]<=4)
	{
	printf("Wrong Answer.\nCorrect Answer is Secure socket layer.\n");
	wa++;
    }
	if(re[7]>4)	
	{
	printf("Invalid!Try Again:\n");
    goto n88;
	}
	n8:
	n99:
	printf("\n9.What is MAC ?\n");
	printf("1.A computer made by Apple 2.Memory address corruption 3.Mediocre Apple Computer 4.Media Access Control\n");
	scanf("%d",&re[8]);
	if(re[8]==re1[8])
	{
		m1++;
		printf("Correct Answer.\n");
    }
	if(re[8]==0)
	{
	skp++;
	goto n9;
    }
	if(re[8]!=re1[8] && re[8]<=4)
	{
	printf("Wrong Answer.\nCorrect Answer is Media Access Control.");
	wa++;
    }
	if(re[8]>4)	
	{
	printf("Invalid!Try Again:\n");
    goto n99;
	}
	n9:
	nnn:
	printf("\n10.Which person was the first to offer a definition of the term 'computer virus'?\n");
	printf("1.Smith  2.Cohen  3.Norton  4.Mcafee\n");
	scanf("%d",&re[9]);
	if(re[9]==re1[9])
	{
		m1++;
		printf("Correct Answer.\n");
    }
	if(re[9]==0)
	{
	skp++;
	goto nn;
    }
	if(re[9]!=re1[9] && re[9]<=4)
	{
	printf("Wrong Answer.\nCorrect Answer is Cohen.\n");
	wa++;
    }
	if(re[9]>4)	
	{
	printf("Invalid!Try Again:\n");
    goto nnn;
	}
	nn:
		int oo=m1;
	m1=m1-wa*0.25;
	printf("-------------------RESULT-------------------\n");
	printf("Questions Attepted:%d\n",(10-skp));
	printf("Rignt Answers%d\n",oo);
	printf("Wrong Answers:%d\n",wa);
	printf("Score:%.3f\n",m1);
	printf("----------------------------------------------\n\n");
	if(m1==10)
	printf("CONGRATULATIONS! YOU WON GOLD MEDEL\n");
	if(m1>=9 && m1<10)
	printf("CONGRATULATIONS! YOU WON SILVER MEDEL\n");
	if(m1>=8 && m1<9)
	printf("CONGRATULATIONS! YOU WON BRONZE MEDEL\n");
	if(m1<8)
	printf("SORRY!YOU DID NOT WON ANY MEDEL!TRY AGAIN\n\n");
	printf("***************THANK YOU******************");
}
   
	

