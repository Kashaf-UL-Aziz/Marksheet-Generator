#include<stdio.h>
#include<string.h>

void main(){
	char name[30];
	int roll_no, standard, english, urdu, math, science, history;
	
	
	printf("Enter Your Name: \n");
	scanf("%s", &name);
	
	printf("Enter Your Roll No: \n");
	scanf("%d", &roll_no);
	
	printf("Enter Your Class Standard: \n");
	scanf("%d", &standard);
	
	printf("Enter Your English Marks: \n");
	scanf("%d", &english);
	
	printf("Enter Your Urdu Marks: \n");
	scanf("%d", &urdu);
	
	printf("Enter Your Math Marks: \n");
	scanf("%d", &math);
	
	printf("Enter Your Science Marks: \n");
	scanf("%d", &science);
	
	printf("Enter Your History Marks: \n");
	scanf("%d", &history);
	
	
	int sum = english + urdu + math + science + history;
	int result = (sum * 100) / 500;
	
	printf("Your Name is: %s and Roll No: %d and Your Class Standard is: %d \n", name, roll_no, standard);
	printf("%d Percentage ", result);
	
	if(result >= 80){
		 printf("Congratulation your grade is A+");
	}
	else if(result < 80 && result > 70){
	 printf("Congratulation your grade is A");
	}
	else if(result < 70 && result > 60){
		printf("Your grade is B");
	}
	else{
		printf("Ahh,Yo Better Luck Next Time");
	}
	
	
}
