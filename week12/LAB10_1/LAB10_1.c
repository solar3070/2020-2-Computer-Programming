struct customer {
	char name[40];
	int age;
};

#include <stdio.h>
#include <string.h>
int main(void)
{
	struct customer aCustomer = {"�ڼ���", 36};
	struct customer cArray[2] = {{"�嵿��", 38}, {"��ҿ�", 38}};
	struct customer *cp = &aCustomer;
	int i;

	//��
	printf("Name = %s, Age = %d\n", aCustomer.name, aCustomer.age);
	//��
	for (i = 0; i < 2; i++)
		printf("Name = %s, Age = %d\n", cArray[i].name, cArray[i].age); 
	//��
	printf("Name = %s, Age = %d\n", cp->name, cp->age);
	//��
	cp = cArray;
	for (i = 0; i < 2; i++) {
		printf("Name = %s, Age = %d\n", cp->name, cp->age); 
		cp++;
	}
} 