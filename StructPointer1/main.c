#include <stdio.h>
#include<stdlib.h>
    
// student structure
struct student {
  char id[15];
  char firstname[64];
  char lastname[64];
  float points;
};

// function prototypes declaration
void getDetail(struct student *);
void displayDetail(struct student *);

int n;

int main(void) {
  struct student *ptr;
  // student structure variable
  
  printf("Enter Number of Students: ");
  scanf("%d", &n);

  struct student std[n];
  ptr = (struct student*) malloc(n * sizeof(struct student));
  
  // get student detail
  getDetail(std);
  
  // display student detail
  displayDetail(std);

  
  return 0;
}

// function definition


void getDetail(struct student *ptr) {

  int i;
 

  for (i = 0; i < n; i++) {
    printf("Enter detail of student #%d\n", (i + 1));
    printf("Enter ID: ");
    scanf("%s", ptr->id);
    printf("Enter first name: ");
    scanf("%s", ptr->firstname);
    printf("Enter last name: ");
    scanf("%s", ptr->lastname);
    printf("Enter Points: ");
    scanf("%f", &ptr->points);
    
    // update pointer to point at next element
    // of the array std
    ptr++;
  }

}

void displayDetail(struct student *ptr) {

  int i;

  for (i = 0; i < n; i++) {
    printf("\nDetail of student #%d\n", (i + 1));
    
    // display result via ptr variable
    //printf("\nResult via ptr\n");
    printf("ID: %s\t", ptr->id);
    printf("First Name: %s\t", ptr->firstname);
    printf("Last Name: %s\t", ptr->lastname);
    printf("Points: %f\t", ptr->points);
    
    // update pointer to point at next element
    // of the array std
    ptr++;
  }

}