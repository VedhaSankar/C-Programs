#include<stdio.h>
#include<string.h>


struct dir
{
char name[20];
char number[10];
};

void insert(FILE *);
void update(FILE *);
void del(FILE *);
void display(FILE *);
void search(FILE *);

int record = 0;

int main()
{
    int choice = 0;
	FILE *fp = fopen( "sample1.txt", "w+" );
	if (fp == NULL ) perror ("Error opening file");
	printf("\n***Telephone Directory***");
	while (choice != 6)
	{
		printf("\n1:Insert");
		printf("\n2:Update");
		printf("\n3:Delete");
		printf("\n4:Display");
		printf("\n5:Search");
		printf("\n6:Exit");
		printf("\n-------------------------------\n");
		printf("\nEnter your choice:");
		scanf("%d", &choice);
		printf("\n***********\n");
		switch(choice)
		{
			case 1: insert(fp); break; 
			case 2: update(fp); break;
			case 3: del(fp); break;
			case 4: display(fp); break;
			case 5: search(fp); break;
			default: ;
		}
	}
	fclose(fp);
	return 0;
}

void insert(FILE *fp)
{
	struct dir contact;
	fseek( fp,0, SEEK_END );
	printf("Enter individual/company name: ");
	scanf("%s", contact.name);
	printf("Enter telephone number: ");
	scanf("%s", contact.number);
	fwrite(&contact, sizeof(struct dir), 1, fp);
	printf("\n***********\n");
}

void update(FILE *fp)
{
	char name[20], number[10];
	int result;
	struct dir contact, blank;
	printf("Enter name:");
	scanf("%s", name);
	rewind(fp);
	while(!feof(fp))
	{
		result = fread(&contact, sizeof(struct dir), 1, fp);
		if(result != 0 && strcmp(name, contact.name) == 0)
		{
			printf("Enter number:");
			scanf("%s", number);
			strcpy(contact.number, number);
			fseek(fp, -sizeof(struct dir), SEEK_CUR);
			fwrite(&contact, sizeof(struct dir), 1, fp);
			printf("Updated successfully\n");
			printf("\n***********\n");
			return;
		}
	}
	printf("Record not found\n");
}

void del(FILE *fp)
{
	char name[20], number[10];
	int result, record=0;
	struct dir contact, blank = {"", ""};
	printf("Enter name:");
	scanf("%s", name);
	rewind(fp);
	while(!feof(fp))
	{
		result = fread(&contact, sizeof(struct dir), 1, fp);
		if(result != 0 && strcmp(name, contact.name) == 0)
		{
			fseek(fp, record*sizeof(struct dir), SEEK_SET);
			fwrite(&blank, sizeof(struct dir), 1, fp);
			printf("%d Deleted successfully\n", record-1);
			printf("\n***********\n");
			return;
		}
		record++;
	}
	printf("not found in %d records\n", record);

}

void display(FILE *fp)
{
	struct dir contact;
	int result;
	rewind(fp);
	printf("\n\n Telephone directory\n");
	printf("\n***********\n");
	printf("%s \t\t %s\n", "Name", "Number");

	while(!feof(fp))
	{
		result = fread(&contact, sizeof(struct dir), 1, fp);
		if(result != 0 && strlen(contact.name) > 0)
		printf("%s \t\t %s\n",contact.name, contact.number);
	}
	printf("\n***********\n");

}

void search(FILE *fp)
{
	struct dir contact;
	int result; char name[20];
	rewind(fp);
	printf("\nEnter name:");
	scanf("%s", name);
	while(!feof(fp))
	{
		result = fread(&contact, sizeof(struct dir), 1, fp);
		if(result != 0 && strcmp(contact.name, name) == 0)
		{
		printf("\n%s %s\n",contact.name, contact.number);
		return;
		}
	}
	printf("Record not found\n");
		
}