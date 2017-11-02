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



struct Book {
    char title[50];
    char author[20];
    double year;
};

void create_new(struct Book *new);


int main()
{
    struct Book book1;
    create_new(&book1);



    printf("Title: %s\nAuthor: %s\nYear: %.0lf\n", book1.title, book1.title, book1.year);

    return 0;
}


void create_new(struct Book *new)
{
    printf("Type title: ");
    gets(new->title);

    printf("Type author: ");
    gets(new->author);

    printf("Type year of publication: ");
    scanf("%lf", &new->year);

}
