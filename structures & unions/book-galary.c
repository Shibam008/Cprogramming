
/*
    //* Qs -> 
            Create a structure named Book to store book details like title, author, and price. Write a C program to input details for three books, find the most expensive and the lowest priced books, and display their information.
*/

#include<stdio.h>

struct book{
    int price;
    char title[100];
    char author[100];
};

void display(struct book newBook) {
    printf("\n\n");
    printf("Book name : %s\n", newBook.title);
    printf("Author name : %s\n", newBook.author);
    printf("Book price : %d\n", newBook.price);
}


// The format specifier " %[^\n]" in C is used with scanf to read a line of text, including spaces, until a newline character (\n) is encountered

int main() {
    struct book b1, b2, b3;
    printf("\nFill the details of first book \n");
    printf("Enter book name : ");
    scanf(" %[^\n]", b1.title);
    printf("Enter author name : ");
    scanf(" %[^\n]", b1.author);
    printf("Enter price : ");
    scanf("%d", &b1.price);

    printf("\nFill the details of second book \n");
    printf("Enter book name : ");
    scanf(" %[^\n]", b2.title);
    printf("Enter author name : ");
    scanf(" %[^\n]", b2.author);
    printf("Enter price : ");
    scanf("%d", &b2.price);

    printf("\nFill the details of third book \n");
    printf("Enter book name : ");
    scanf(" %[^\n]", b3.title);
    printf("Enter author name : ");
    scanf(" %[^\n]", b3.author);
    printf("Enter price : ");
    scanf("%d", &b3.price);

    printf("\n--------------Printing all the available books-----------------");

    display(b1);
    display(b2);
    display(b3);

    int maxPrice = (b1.price > b2.price) ? (b1.price > b3.price ? b1.price : b3.price) : (b3.price > b2.price ? b3.price : b2.price);
    int minPrice = (b1.price < b2.price) ? (b1.price < b3.price ? b1.price : b3.price) : (b3.price < b2.price ? b3.price : b2.price);

    printf("\nExpensive book of this list : ");
    if(maxPrice == b1.price) 
    {
        display(b1);
    }
    else if(maxPrice == b2.price) 
    {
        display(b2);
    }
    else{
        display(b3);
    }

    printf("\nCheapest book of this list : ");
    if(minPrice == b1.price)
    {
        display(b1);
    }
    else if(minPrice == b2.price) 
    {
        display(b2);
    }
    else{
        display(b3);
    }
}