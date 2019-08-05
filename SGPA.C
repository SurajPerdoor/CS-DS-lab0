#include<stdio.h>
#include<conio.h>
#include<math.h>
struct student{
	char name[20];
	float marks[6];
	float credits[6];
	}s1;
void main(){
	int i; float sgpa, grade, c;
	printf("Name:\n");
	gets(s1.name);
	for(i=0; i<6 ; i++){
		printf("Enter marks and credits:%d\n", i);
		fflush(stdin);
		scanf("%f\n%f", &s1.marks[i], &s1.credits[i]);
		}
	for(i=0; i<6 ; i++){
		c = s1.marks[i];
		if(c >=90 && c <=100){
			grade = 10;
			}
		else if(c >=80){
			grade = 9;
			}
		else if(c >=70){
			grade = 8;
			}
		else if(c >=60){
			grade = 7;
			}
		else if(c >=50){
			grade = 6;
			}
		else if(c >=40){
			grade = 5;
			}
		else{
			grade = 0;
			}

		sgpa += grade * s1.credits[i];
		}
	sgpa /= 20;
	printf("%f", sgpa);
	getch();
}









