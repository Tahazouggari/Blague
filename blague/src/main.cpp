#include "book.hpp"
#include <iostream>












int main(int, char *[]) 
{   
    Book livre_min , livre_max;
    Book books[4] = {
        {" The Art of Computer Programming ", 256},
        {" Tom Sawyer ", 128},
        {" Le Dernier Jour d'un Condamné", 142},
        {"L'avare ", 192 }};
    std ::cout << "********Avant L'echange*************** "<< std ::endl;
    afficher_tableau_de_livre(books,4);
    
    swapPageCount(Min_pages(books,3),Max_pages(books,3));
    std ::cout << "********Apres L'echange*************** "<< std ::endl;
    afficher_tableau_de_livre(books,4);
    std ::cout << "************Blague********************* "<< std ::endl;
    livre_max=Max_pages(books,4);
    livre_min=Min_pages(books,4);
    swapPageCount(livre_max,livre_min);
    afficher_tableau_de_livre(books,4);


    /*swapPageCount(lireLivre(),lireLivre());*/

}