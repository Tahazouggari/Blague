#include <iostream>
#include <string>

struct Book
{
    char titre[50];
    int pages;
};

int lire_page()
{
    int p;
    do
    {
        std::cout << "Enter le nombre de page: ";
        std::cin >> p;
        if (p < 2 || p > 2000)
        {
            std::cout << "le nombre de page n'a pas de sens .\n";
            break;
        }
    } while (p < 2 || p > 2000);
    return p;
}
void lire_page(int *p)
{
    do
    {
        std::cout << "Enter le nombre de page: ";
        std::cin >> *p;
        if ((*p) < 2 || (*p) > 2000)
        {
            std::cout << "le nombre de page n'a pas de sens .\n";
            break;
        }
    } while (*p < 2 || *p > 2000);
}

namespace void_int
{
    void lire_page(int p)
    {
        int &r = p;

        do
        {
            std::cout << "Enter le nombre de page: ";
            std::cin >> r;
            if (r < 2 || r > 2000)
            {
                std::cout << "le nombre de page n'a pas de sens .\n";
                break;
            }
        } while (r < 2 || r > 2000);
    }
}

void lire_page(int &p)
{
    do
    {
        std::cout << "Enter le nombre de page: ";
        std::cin >> p;
        if ((p) < 2 || (p) > 2000)
        {
            std::cout << "le nombre de page n'a pas de sens .\n";
            break;
        }
    } while (p < 2 || p > 2000);
}
Book lireLivre()
{
    Book livre;
    
    std::cout << "entre le titre du livre :";
    std::cin.ignore();
    std::cin.getline(livre.titre, 50);
    livre.pages = lire_page();
    return livre;
}

void remplirTableauLivres(Book livres[], int taille)
{
    for (int i = 0; i < taille; ++i)
    {
        std::cout << "Livre " << (i + 1) << ":\n";
        livres[i] = lireLivre();
        std::cout << std::endl;
    }
}

void afficherLivre(Book livre)
{
    std::cout << "le titre de livre est :" << livre.titre << "\n";
    std::cout << "le nombre de pages est :" << livre.pages << "\n";
}

void afficher_tableau_de_livre(Book livres[], int taille)
{
    for (int i = 0; i < taille; i++)
    {
        afficherLivre(livres[i]);
    }
}

void swapPageCount(Book &livre1, Book &livre2)
{
    int page= livre1.pages;
    livre1.pages=livre2.pages;
    livre2.pages=page; 
}

Book& Max_pages(Book livres[], int taille)
{
    int max = livres[0].pages;
    int max_size;
    for (int i = 0; i < taille; i++)
    {
        if (livres[i].pages > max)
        {
            max= livres[i].pages;
            max_size=i;
        }
    }
    return livres[max_size];
}
Book& Min_pages(Book livres[], int taille)
{
    int min = livres[0].pages;
    int min_indice;
    for (int i = 0; i < taille; i++)
    {
        if (livres[i].pages < min)
        {
            min = livres[i].pages;
            min_indice=i;
        }
    }
    return livres[min_indice];
}

