
#include <stdio.h>
#include <string.h>



struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student student[100];
int count;

void studentdetail() {
     char name[50];
     int roll;
     float marks;

     printf("Enter the student name :");
     scanf( "%s", student[count].name);

     printf("Enter student roll no :");
     scanf("%d", &student[count].roll);
     
     printf("Enter student marks :");
     scanf("%f", &student[count].marks);

     count++;
     printf("student added successfully\n");
     
}

void displaydetail() {
    if( count == 0) {
        printf( "Nothing to show \n");
        return;
    }

    printf("\n %s %s %s \n", "name" , "roll" , "marks" );
    for(int i=0; i<count ; i++){
        printf("%s %d %f", student[i].name, student[i].roll, student[i].marks);

 }    


}

void searchroll() {
    int roll;
    printf("\n Enter the roll no :");
    scanf("%d", &roll);

    for (int i=0; i<count; i++) {
        if ( student[i].roll == roll ){

            printf("%s %d %f", student[i].name, student[i].roll, student[i].marks);
            return;
        }   
    }
    printf("not found");
}

void searchbyname(){
    char naam[50];
    printf("please enter student name:");
    scanf( "%s", naam);

    for(int i=0; i<count; i++){
        if(strcmp(student[i].name,naam) == 0) {

            printf("%s %d %f", student[i].name, student[i].roll, student[i].marks);
            return;
        }
        
    }
    printf("not found");
}

void topper() {
    int topperindex =0 ;
    printf("\n The topper is: \n");

    for (int i=1 ; i<count; i++){
        if ( student[i].marks > student[topperindex].marks ){
            topperindex = i;
        }
    }
    printf("%s %d %f", student[topperindex].name, student[topperindex].roll, student[topperindex].marks);
}


int main() {

    int choice;
    while(1) {
    
    printf("\n Menu \n");
    printf( "1.Enter the details for the student :\n");
    printf( "2.Display the student details :\n");
    printf( "3.Search the student by roll no :\n");
    printf( "4.Search the student by name :\n");
    printf( "5.Give the topper's details :\n");
    printf( "6.Exit");
    printf( "Enter your choice:");
    scanf( "%d", &choice);

    switch (choice) {

        case 1 : studentdetail() ; break;
        case 2 : displaydetail() ; break;
        case 3 : searchroll() ; break;
        case 4 : searchbyname() ; break;
        case 5 : topper() ; break;
        case 6 : printf("You have exited \n");
                 return 0;
        
        default : printf( "Invalid choice");
    }
}
    return 0;
}





