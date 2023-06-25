
## new Zombie[N]

Le code `Zombie *zombieHorde = new Zombie[N];` en C++ alloue dynamiquement un tableau de N objets de type Zombie sur le tas (heap).

---

## delete []

Le code `delete[] zombieHorde;` en C++ est utilisé pour libérer la mémoire allouée pour un tableau d'objets à l'aide de l'opérateur `new[]`.

Voici ce que fait ce code :

Il libère la mémoire allouée dynamiquement pour un tableau d'objets qui a été créé précédemment avec l'opérateur `new[]`.

L'opérateur `delete[]` est spécifiquement utilisé pour libérer la mémoire allouée pour des tableaux d'objets, tandis que delete est utilisé pour des objets individuels.

Il est important de noter que zombieHorde doit être un pointeur vers un tableau d'objets qui a été précédemment alloué avec `new[]`. De plus, l'utilisation de `delete[]` est nécessaire pour libérer correctement la mémoire allouée pour un tableau, sinon cela pourrait entraîner des fuites de mémoire.