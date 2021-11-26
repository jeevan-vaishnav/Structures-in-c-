#include<stdio.h>
#include<string.h>
using namespace std;
/*
	Author Name : Jeevan Vaishnav
	Date of Program : 26/11/2021
	Name Of Program : Structure 
*/

//creating structure with personal 1 varibale

struct Person{
	char name[10];
	int cityNo;
	float salary;
	
}Person1;

int main(){
	
		//assing value to name of Person1
		strcpy(Person1.name,"Jeevan");
		
		// assign values to other person1 variables

		Person1.cityNo = 2000;
		Person1.salary = 5000;
		
		//print the statement value 
		printf("Name of %s\n",Person1.name);
		printf("Citizenship No : %d\n",Person1.cityNo);
		printf("Salary : %.2f ", Person1.salary);
			
	
	
		return 0;
}
