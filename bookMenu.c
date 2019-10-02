#include <stdio.h>
#include <malloc.h>
#include <string.h>


int main (){
    int numOfBooks = 10;
    float prices[10]; 
    int answer = 0; 
    char *list[10];
    int i,y, running = 1, book=0;
    double total; 
    for (i=0; i < numOfBooks; i++){
        list[i] = malloc(sizeof(char) * (numOfBooks + 1));
    }

        printf("Select your option... 0 to kill\n"); 
        printf ("=========================\n");
        printf ("|         Books          |\n");
        printf ("=========================\n");
        printf ("|1.Enter Book(10 at once)|\n");
        printf ("|                        |\n");
        printf ("|2.   Books & Prices     |\n");
        printf ("|                        |\n");
        printf ("|3.    Total Value       |\n");
        printf ("=========================\n");

    do{  
        fscanf(stdin, "%d", &answer);
        getchar();
            if (answer == 1) { 
                printf("What is the name of the book? ");
                fgets(list[book], 100, stdin);
                for (i =0; i<strlen(*list);i++){
                    if(*(list +i) == 10)
                        *(list+i) == 0;
                }        
                printf("What is the price of book: %s", list[book]);
                scanf("%f", &prices[book]);
                book++;
            }
            if (answer == 2){
                int g = book;
                y=0; 
                do{
                    printf("Book: %s Price: $%.2lf\n", list[y], prices[y]);
                    y++;
                }while (y < g);
                
            }
            if (answer == 3){ 
                for (i = 0; i< book; i++){
                    total+=prices[i];
                }
                printf("The total is: %.2lf\n", total);
            }
            if (answer == 0){
                break;
            }
            
    }while(book < 10);

    for (i =0; i < 10; i++){
        free(list[i]);
    }
   
}