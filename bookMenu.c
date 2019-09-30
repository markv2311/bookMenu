#include <stdio.h>
#include <malloc.h>
#include <string.h>



int main (int argv, char **args){
    int numOfBooks = 10;
    float prices[10]; 
    int answer = 0; 
    char **list;
    int i,y, running = 1, book=0;
    double total; 
    list = malloc(sizeof(char*)*10);
    for (i=0; i < numOfBooks; i++);{
        list[i] = malloc(sizeof(char) * (numOfBooks + 1));
    }

        printf("Select your option..."); 
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
        fscanf(stdin, "%d", &answer);

        switch (answer) {
            case 1: 
                printf("What is the name of the book? ");
                fgetc(stdin);
                fgets(list[y], 100, stdin);
            
                printf("What is the price of book: %s", list[i]);
                fscanf(stdin, "%f", &prices[i]);
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
    for (i =0; i <0; i++){
        free(list[i]);
    }
    free(list);
}