#ifndef BOOK_H
#define BOOK_H
#include <iostream>


struct Book
{
    char titre[50];
    int pages;
};

int lire_page();
void lire_page(int *p);
namespace void_int{
    void lire_page(int p);
}
void lire_page(int &p);
Book lireLivre();
void remplirTableauLivres(Book livres[], int taille);
void afficherLivre(Book livre);

void afficher_tableau_de_livre(Book livres[], int taille);
void swapPageCount(Book &livre1, Book &livre2);
Book& Max_pages(Book livres[], int taille);
Book& Min_pages(Book livres[], int taille);





#endif