// structures_function_00
/*
 * Create a structure representing the data of a book:
 *    * Title
 *    * Author
 *    * Year of publication
 *
 * Create functions for:
 *    * Creating a new book.
 *    * Changeing or setting the Title
 *    * Changeing or setting the Author
 *    * Changeing or setting the Year of publication
 *    * Getting each of these separately by a singel function each.
 *
 * IMPORTANT: The first parameter of each function should be a "Book", a variable of the type of this structure.
 *
 * Create a main where You demonstrate that each of these works and print out the necessary info.
 * IMPORTANT: You should only print from the main function. All other functions should return the info needed.
 */



#include <stdio.h>
#include <string.h>



struct Book {
    char title[50];
    char author[20];
    double year;
};

int create_new(struct Book *new);
void change_title(struct Book *book, char *new_title);
void change_author(struct Book *book, char *new_author);
void change_year(struct Book *book, double new_year);

int main()
{
    struct Book book1;
    create_new(&book1);
    printf("\nTitle: %s\tAuthor: %s\tYear: %.0lf\n", book1.title, book1.author, book1.year);

    change_title(&book1, "This is the new title\n");
    printf("New title is: %s\n", book1.title);

    change_author(&book1, "Steve Jobs\n");
    printf("New author is: %s\n", book1.author);
    printf("\nTitle: %s\tAuthor: %s\tYear: %.0lf\n", book1.title, book1.author, book1.year);

    change_year(&book1, 1985);
    printf("New year is: %.0lf\n", book1.year);
    printf("\nTitle: %s\tAuthor: %s\tYear: %.0lf\n", book1.title, book1.author, book1.year);

    return 0;
}


int create_new(struct Book *new)
{
    printf("Type title: ");
    gets(new->title);

    printf("Type author: ");
    gets(new->author);

    printf("Type year of publication: ");
    scanf("%lf", &new->year);

    return 0;
}


void change_title(struct Book *book, char *new_title)
{
    strcpy(book->title, new_title);
}


void change_author(struct Book *book, char *new_author)
{
    strcpy(book->author, new_author);
}


void change_year(struct Book *book, double new_year)
{
    book->year = new_year;
}
