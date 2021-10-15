#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
// welcome to behind the scenes of my restaurant
struct food {char *name; double price;};

// prints out stuff in a reasonable way
void print_food(struct food *m){
	printf("\n");
	printf("Rayyans Halal Truck\n");
	printf("A %s costs: %.2f \n",m->name, m->price);
	printf("\n");
}


// makes a new struct in heap memory w parameters appropriate to ur struct
struct food * make_food(char* c, double i){
	// makes a struct f
	struct food *f;
	// allocates memory
	f = malloc(sizeof(struct food));
	
	// sets the name and price of the food to the paremeter values
	f->name = c;
	f->price =i;
	return f;
}


int main(){
	srand(time(NULL));
	
	
	// classic food
    char *s = "chicken over rice";
	
			// gives either 0 or 1
    double chickenprice = (rand() % 2);
			// remember 0 is false and anything else is true
	if (chickenprice){
		chickenprice = 5.00;
	} else chickenprice = 7.00;
	
    struct food *h = make_food(s,chickenprice);
    print_food(h);
	
	// if chicken over rice 5 :) else :(
	if (chickenprice == 5.00){
		(printf("ahh the days before covid :)\n \n"));
	} else if (chickenprice == 7.00){
		(printf(":( 7 dollar at most carts\n \n"));
	}
    free(h);
    return 0;
}
