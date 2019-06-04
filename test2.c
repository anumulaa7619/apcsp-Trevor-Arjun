#include <stdio.h>
#include <string.h>

struct Student{
  char fname[256];
  char lname[256];
  int age;
  int id;
}; 

void printStudent(struct Student* student){
  printf("\nFirst Name: %s\n", student->fname);
  printf("Last Name: %s\n", student->lname);
  printf("Age: %d\n", student->age);
  printf("Student ID: %d\n\n", student->id);
}

void UI1(){
  char input[256];
  struct Student Stdnt[256];
  char ans;
  int c = 0;
  int num = 1;

  char fname[256];
	char lname[256];
	int age;
	int id;
  void UI2();

  while (c == 0){
    printf("View(v) | Enter(e) | Edit(x): ");
    fgets(input, 256, stdin);
    sscanf(input, "%s", &ans);
    if (strcmp(&ans, "e") == 0){

	    printf("Enter first name: ");
	    fgets(input, 256, stdin);
	    sscanf(input, "%s", fname);

	    printf("Enter last name: ");
	    fgets(input, 256, stdin);
	    sscanf(input, "%s", lname);

	    printf("Enter age: ");
      while (1){
	      fgets(input, 256, stdin);
	      if (sscanf(input, "%d", &age) == 1) break;
        printf("Invalid Input\n");
      }
	    printf("Enter student ID ");
      while (1){
	      fgets(input, 256, stdin);
 	      if (sscanf(input, "%d", &id) == 1) break;
        printf("Invalid Input\n");
      }

	    strcpy(Stdnt[num].fname, fname);
	    strcpy(Stdnt[num].lname, lname);
	    Stdnt[num].age = age;
	    Stdnt[num].id = id;
	    num++;
    } else if(strcmp(&ans, "v") == 0){
	    c = 1;
    } else if(strcmp(&ans, "x") == 0){
	    c = 2;
    } else{
      printf("Invalid Input\n");
    }
  }
  
  int n;
  char r;
  int b = 0;
  
  while (c == 1){
	    printf("View(Student ID) | Exit(c):  ");
	    while (1){
	      fgets(input, 256, stdin);
        sscanf(input, "%s", &r);
        if (strcmp(&r, "c") == 0){
          UI2();
        }
 	      if (sscanf(input, "%d", &n) == 1) break;
        printf("Invalid Input\n");
      }
      printStudent(&Stdnt[n]);
  }

  while (c == 2){
	    printf("Edit(Student ID) | Exit(c):  ");
	    while (1){
	      fgets(input, 256, stdin);
        sscanf(input, "%s", &r);
        if (strcmp(&r, "c") == 0){
          UI2();
        }
 	      if (sscanf(input, "%d", &n) == 1) break;
        printf("Invalid Input\n");
      }
      printStudent(&Stdnt[n]);
      printf("Edit(ex. Name, age, GPA): ");
      fgets(input, 256, stdin);
      sscanf(input, "%s", &r);
      if (strcmp(&r, "name") == 0){
        printf("first or last: ");
        fgets(input, 256, stdin);
        sscanf(input, "%s", &r);
        if (strcmp(&r, "first") == 0){
          printf("New first name: ");
	        fgets(input, 256, stdin);
	        sscanf(input, "%s", fname);
          strcpy(Stdnt[n].fname, fname);
        } else if (strcmp(&r, "last") == 0){
          printf("New last name: ");
	        fgets(input, 256, stdin);
	        sscanf(input, "%s", lname);
          strcpy(Stdnt[n].lname, lname);
        }
      }
  }
}




void UI2(){
  char input[256];
  struct Student Stdnt[256];
  char ans;
  int c = 0;
  int num = 1;

  char fname[256];
	char lname[256];
	int age;
	int id;
  void UI1();

  while (c == 0){
    printf("View(v) | Enter(e) | Edit(x): ");
    fgets(input, 256, stdin);
    sscanf(input, "%s", &ans);
    if (strcmp(&ans, "e") == 0){

	    printf("Enter first name: ");
	    fgets(input, 256, stdin);
	    sscanf(input, "%s", fname);

	    printf("Enter last name: ");
	    fgets(input, 256, stdin);
	    sscanf(input, "%s", lname);

	    printf("Enter age: ");
      while (1){
	      fgets(input, 256, stdin);
	      if (sscanf(input, "%d", &age) == 1) break;
        printf("Invalid Input\n");
      }
	    printf("Enter student ID ");
      while (1){
	      fgets(input, 256, stdin);
 	      if (sscanf(input, "%d", &id) == 1) break;
        printf("Invalid Input\n");
      }

	    strcpy(Stdnt[num].fname, fname);
	    strcpy(Stdnt[num].lname, lname);
	    Stdnt[num].age = age;
	    Stdnt[num].id = id;
	    num++;
    } else if(strcmp(&ans, "v") == 0){
	    c = 1;
    } else if(strcmp(&ans, "x") == 0){
	    c = 2;
    } else{
      printf("Invalid Input\n");
    }
  }
  
  int n;
  char r;
  int b = 0;
  
  while (c == 1){
	    printf("View(Student ID) | Exit(c):  ");
	    while (1){
	      fgets(input, 256, stdin);
        sscanf(input, "%s", &r);
        if (strcmp(&r, "c") == 0){
          UI1();
        }
 	      if (sscanf(input, "%d", &n) == 1) break;
        printf("Invalid Input\n");
      }
      printStudent(&Stdnt[n]);
  }

  while (c == 2){
	    printf("Edit(Student ID) | Exit(c):  ");
	    while (1){
	      fgets(input, 256, stdin);
        sscanf(input, "%s", &r);
        if (strcmp(&r, "c") == 0){
          UI1();
        }
 	      if (sscanf(input, "%d", &n) == 1) break;
        printf("Invalid Input\n");
      }
      printStudent(&Stdnt[n]);
      printf("Edit(ex. Name, age, GPA): ");
      fgets(input, 256, stdin);
      sscanf(input, "%s", &r);
      if (strcmp(&r, "name") == 0){
        printf("first or last: ");
        fgets(input, 256, stdin);
        sscanf(input, "%s", &r);
        if (strcmp(&r, "first") == 0){
          printf("New first name: ");
	        fgets(input, 256, stdin);
	        sscanf(input, "%s", fname);
          strcpy(Stdnt[n].fname, fname);
        } else if (strcmp(&r, "last") == 0){
          printf("New last name: ");
	        fgets(input, 256, stdin);
	        sscanf(input, "%s", lname);
          strcpy(Stdnt[n].lname, lname);
        }
      }
  }
}

int main(){
  void UI2();
  UI2();
}
