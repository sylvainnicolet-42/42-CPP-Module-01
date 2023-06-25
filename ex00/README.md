## Différence entre le tas (heap) et la pile (stack)

En C++, la différence principale entre le tas (heap) et la pile (stack) réside dans la manière dont la mémoire est allouée et gérée.

Heap (tas) :
- La mémoire est allouée dynamiquement à l'exécution à l'aide des opérateurs `new` et `delete`.
- Les objets alloués sur le tas ont une durée de vie qui peut être gérée de manière plus flexible.
- L'allocation de mémoire sur le tas nécessite un temps d'exécution supplémentaire et peut entraîner des fuites de mémoire si la libération de la mémoire n'est pas effectuée correctement.
- Les objets alloués sur le tas doivent être explicitement libérés à l'aide de l'opérateur `delete` une fois qu'ils ne sont plus nécessaires.

Stack (pile) :
- La mémoire est allouée automatiquement et de manière statique lorsqu'une fonction est appelée.
- Les objets alloués sur la pile ont une durée de vie limitée à la portée dans laquelle ils ont été déclarés.
- L'allocation de mémoire sur la pile est plus rapide que sur le tas car elle ne nécessite qu'un simple déplacement de pointeur.
- La gestion de la mémoire sur la pile est automatique et ne nécessite pas d'actions supplémentaires de la part du programmeur.

En général, il est recommandé d'utiliser la pile pour les objets avec une durée de vie courte et prévisible, tandis que le tas est plus adapté aux objets avec une durée de vie plus longue ou dont la taille est inconnue à la compilation. Cependant, il est important de gérer correctement la mémoire allouée sur le tas pour éviter les fuites de mémoire.

---

## New

L'allocation de mémoire dynamique avec new permet de créer des objets dont la durée de vie peut être contrôlée plus précisément que les objets à durée de vie automatique (sur la pile). Cependant, il est important de libérer correctement cette mémoire avec l'opérateur delete une fois que vous avez fini d'utiliser les objets alloués dynamiquement.

