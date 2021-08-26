
#include<stdio.h>
#include <stdlib.h>
#include <windows.h>
#include"STD_TYPES.h"
#include "BIT_MATH.h"

#define true 1
#define ADMIN_MODE 2
#define number_One 1
#define number_three 3
#define Entery_Mode 1
#define Default_PW 1234
#define ID_patient 115
#define Patient_Record  1



u8 press;
u32 PW=0,New_PW,Replay_PW,itration;
u32 Flag = 0,PW_Changed = 0;
u8 View_Patient_Record,ID;

int main()
{

	

system("cls"); 
printf("---------------------Welcome To Clinic Mangment System---------------------\n");
Sleep(2000);
 

while(true)
{
	
	 system("cls");	

		printf("For User  Mode Press 1:\n"
		       "For Admin Mode Press 2:\n");
		scanf("%d",&press);
	   while( press > 2 || press < 1 )
	   {
		   system("cls");
		  printf("Invalid Choice!! \n");
		  printf("For User Mode press 1"" \nFor Admin Mode Press 2\n");
		  scanf("%d",&press);
	   }
	   
	   if ( press == ADMIN_MODE)
	{
		system("cls"); //clear previous Code
		printf("You Choosed Admin mode\n"); 
		printf("\nFor Entery Mode press 1:\n"
			   "For Changing Password Press 2:\n");
		scanf("%d",&press);
		while( press > 2 || press < 1 )
	   {
		   system("cls");
		  printf("Invalid Choice!! \n");
		  printf("For Entery Mode press 1"" \nFor Changing Password Press 2\n");
		  scanf("%d",&press);
		    

	   }
		if(  press == Entery_Mode)
		{	
	system("cls");
			for( itration = number_One ; itration <= number_three ; itration++ ) 
			{
				printf(" Enter PassWord :");
				scanf("%d",&PW);
				if(  ( PW == Default_PW ) || ( PW == PW_Changed) )
				{
					SET_BIT(Flag,0);
				    break;
				}
				else
				{
					if(itration == number_three )
					{
						printf("\nNo More Tries !!\n");	
					//Sleep(10000);						
						 return 0;
					}
					else
					{
						printf("\nSorry wronge password \nYou have %d more tries. Be Care!! \n",number_three-itration);
						printf("\n*************************\n");
						Sleep(2500);
						system("cls");
					}
				}	
			}
			
			if( GET_BIT ( Flag , 0) );
			{
				system("cls");
				printf("5 func\n");
				 Sleep(2000);
							
			}
		}
		else
		{	system("cls");
			printf("Enter Previous PassWord:\n");
			scanf("%d",&PW);
				while ( ( PW != 1234  ) &&( PW != PW_Changed  ) )
				{
					system("cls");
					printf("Invalid Previous Password!!...Try Againe\n");
					printf("Enter Previous PassWord:\n");
					scanf("%d",&PW);
				}
				system("cls");
								
			printf("Enter New password: \n");
			scanf("%d",&New_PW);
			printf("Replay the password: \n");
			scanf("%d",&Replay_PW);
			while(Replay_PW != New_PW)
			{	
		        system("cls");
				printf("Invalid New Password!!.Try Againe\n");
				printf("\nEnter New password : ");
				scanf("%d",&New_PW);
				printf("\nReplay the password: ");
				scanf("%d",&Replay_PW);
			}
			system("cls");

			 PW_Changed = New_PW;	
			 printf("\npassword is changed.\n");
			 Sleep(2000);

		}
	}
	  
	  else 
	{
		system("cls");
	   
		printf("  You Choosed user mode \n");
	    printf("For Patient Record Press 1:\n"
			   "For View Today's Reservation Press 2:\n");
		scanf("%d",&press);	
		
      while( press > 2 || press < 1 )
	   {
		  printf("Invalid Choice!! \n");
		  printf("For Patient Record Press 1:\n"
			     "For View Today's Reservation Press 2:\n");
		  scanf("%d",&press);
		  system("cls");
	   }
  			   
	  
	   if (  Patient_Record == press)
	   {
		   printf("Pleas Enter The Patient ID:");
		   scanf("%d",&ID);
		   while(ID != ID_patient)
		   {
			printf("patient Id dose't exist!\n"); 
			printf("Pleas Enter The Patient ID:\n");
			scanf("%d",&ID);
			system("cls");			
		   }
		    
		  printf("call view patient list func");
		  Sleep(2000);
	   }
	   else 
	   {
		   printf("call view today reservation func");
		   Sleep(2000);
	   }
	}
	     
	   
}	   
}


