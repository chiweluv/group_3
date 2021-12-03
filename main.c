#include <stdio.h>
#include <stdlib.h>

#include "Books.h"

int main() {
	Book book;
	int option, quit = 1;
	int quantity;
	char title[50];
	
	do{
		printf("Please, Choose An Operation to Perform");
		printf("\n1. Add Book \n2. Borrow Book\n3. View Book Details \n4. Return Book\n5. Search Book\n6. Check Book Quantity\n");
		scanf("%d", &option);
		
		
		switch(option){
			case 1:
				printf("\n Enter Book Title, Author and Quantity\n");
				scanf("%s %s %d", book.name, book.author, book.qty);
				printf("Book Stored Successfully\n");
				break;
				
			case 2:
				printf("\n How many books do you want to borrow?\n");
				scanf("%d", &quantity);
				if(quantity > book.qty){
					printf("\n Avaliable Quatity is not upto the demand!\n");
				}else{
					book.qty = book.qty - quantity;
					printf("%d books borrowed and %d books are remaining\n", quantity, book.qty);
				}
				break;
				
			case 3:
				printf("Book Title: %s \nAuthor: %s \nAvaliable Quantity: %d", book.name, book.author, book.qty);
				printf("Book Stored Successfully\n");
				break;
				
			case 4:
				printf("\n How many books are you returning?\n");
				scanf("%d", &quantity);
				book.qty = book.qty + quantity;
				printf("%d books returned and %d avaliable books are \n", quantity, book.qty);
				break;
				
			
			case 5:
				printf("\n Enter the title of the book you wish to search for!\n");
				scanf("%s", &title);
				if(title == book.name){
					printf("Book Title: %s \nAuthor: %s \nAvaliable Quantity: %d", book.name, book.author, book.qty);
				}else{
					printf("Book Not Found!");
				}
				break;
			
			case 6:
				printf("Avaliable books are \n", book.qty);
				break;
				
			default:
				printf("Invalid Option\n");
				break;
		}
		
		printf("Do you wish to perform another operation?\n");
		printf("\n1. Yes \n2. No\n");
		scanf("%d \n\n", &quit);
	}while(quit == 1);
	
	
	
	
	return 0;
}
