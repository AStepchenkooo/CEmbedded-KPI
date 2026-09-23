#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[50];
    float price;
    int pages;
    char language[20];
    float weight;
    int year;

    struct Book *next;
};

int main() {
    struct Book *b1 = (struct Book*)malloc(sizeof(struct Book));
    struct Book *b2 = (struct Book*)malloc(sizeof(struct Book));
    struct Book *b3 = (struct Book*)malloc(sizeof(struct Book));

    snprintf(b1->title, sizeof(b1->title), "Philosopher's Stone");
    b1->price = 15.99;
    b1->pages = 223;
    snprintf(b1->language, sizeof(b1->language), "English");
    b1->weight = 310.0;
    b1->year = 1997;

    snprintf(b2->title, sizeof(b2->title), "Chamber of Secrets");
    b2->price = 16.50;
    b2->pages = 251;
    snprintf(b2->language, sizeof(b2->language), "English");
    b2->weight = 340.0;
    b2->year = 1998;

    snprintf(b3->title, sizeof(b3->title), "Prisoner of Azkaban");
    b3->price = 18.00;
    b3->pages = 317;
    snprintf(b3->language, sizeof(b3->language), "English");
    b3->weight = 420.0;
    b3->year = 1999;

    struct Book *head = b1; 
    b1->next = b2;          
    b2->next = b3;          
    b3->next = NULL;  


    struct Book *current = head;
    while (current != NULL) {
        printf("Title: %s\n", current->title);
        printf("Price: %.2f$\n", current->price);
        printf("Pages: %d\n", current->pages);
        printf("Language: %s\n", current->language);
        printf("Weight: %.1fg\n", current->weight);
        printf("Year: %d\n", current->year);
        printf("-------------------------\n");

        current = current->next;
    }

    free(b1);
    free(b2);
    free(b3);

    return 0;
}