
/*Below program is practice code of structure, pointer structure and 2 structure variable at one time concepts.*/


#include <stdio.h>
#include <string.h>

/*structure for city information*/
typedef struct mystruct{
    char city[10];
    unsigned long int ppl;
    int no_trains;
    char airport_name[3];
}bag_struct;

/*structure for companies information*/ 
struct companies{
    char comp_name[15];
    int employees;
    int no_offices;
};

/*structure declaration*/
bag_struct mycity, *mycity_ptr;
struct companies c1, c2;                //2 structure variables for 2 comapnies


int main()
{
    
    mycity_ptr = &mycity;

    printf("Enter 1st company name: ");
    scanf("%s", &c1.comp_name);

    printf("Enter number of emploees: ");
    scanf("%d", &c1.employees);

    printf("Enter 2nd company name: ");
    scanf("%s", &c2.comp_name);

    printf("Enter number of employess: ");
    scanf("%d", &c2.employees);

    printf("Enter number of offices: ");
    scanf("%d", &c2.no_offices);
    
    printf("\n1st company name is:%s\n", c1.comp_name);
    printf("Total number of employees in %s: %d\n\n", c1.comp_name, c1.employees);

    printf("\n2nd company name is:%s\n", c2.comp_name);
    printf("Total number of employees in %s: %d\n", c2.comp_name, c2.employees);
    printf("Total number of offices of %s company: %d\n\n", c2.comp_name, c2.no_offices);

    strcpy (mycity_ptr -> city, "Bangaluru");
    mycity_ptr -> ppl = 13193000;
    mycity_ptr -> no_trains = 5;
    strcpy (mycity_ptr -> airport_name, "BLR");

    printf("Name of the city is: %s\n", mycity_ptr -> city);
    printf("Population in Bangaluru: %d\n", mycity_ptr -> ppl);
    printf("Number of trains for Banguluru from Mumbai: %d\n", mycity_ptr -> no_trains);
    printf("Airport name is: %s\n",mycity_ptr -> airport_name);

    return 0;

}