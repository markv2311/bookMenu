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
    for (i=0; i < numOfBooks; i++);{
        list[i] = malloc(sizeof(char) * (numOfBooks + 1));
    }

        printf("Select your option...\n"); 
        printf ("=========================\n");
        printf ("|         Books          |\n");
        printf ("=========================\n");
        printf ("|1.Enter Book(10 at once)|\n");
        printf ("|                        |\n");
        printf ("|2.   Books & Prices     |\n");
        printf ("|                        |\n");
        printf ("|3.    Total Value       |\n");
        printf ("=========================\n");

    while(running && book < numOfBooks){  
        scanf("%d", &answer);
        getchar();
        switch (answer) {
            case 1: 
                printf("What is the name of the book? ");
                fgets(list[book], 100, stdin);

                printf("What is the price of book: %s", list[book]);
                scanf("%f", &prices[book]);
                book++;
                break;
            case 2: 
                for(y =0; y < numOfBooks; y++){
                    printf("Book: %s Price: %f", list[y], prices[y]);
                }
                book++;
                break;
            case 3: 
                for (i = 0; i<numOfBooks; i++){
                    total+=prices[i];
                }
                book++;
                break;
            default:
                running = 0; 
                break;
        }   
    }
    for (i =0; i < 10; i++){
        free(list[i]);
    }
   
}