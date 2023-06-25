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

---

## Static

En C++, la spécification `static` peut être appliquée aux fonctions pour modifier leur comportement et leur portée. Voici les principales caractéristiques des fonctions statiques en C++ :

1. Portée locale : Les fonctions statiques ont une portée limitée au fichier dans lequel elles sont déclarées. Elles ne sont pas visibles ou accessibles depuis d'autres fichiers source.

2. Liage interne : Les fonctions statiques ont un liage interne, ce qui signifie qu'elles ne peuvent être référencées que dans le fichier source où elles sont déclarées. Cela permet de créer des fonctions "privées" qui ne sont pas exposées à d'autres parties du programme.

3. Appel direct : Les fonctions statiques peuvent être appelées directement, sans avoir besoin d'instancier une classe ou un objet. Elles sont généralement utilisées pour encapsuler du code qui ne dépend pas de l'état d'un objet spécifique.

4. Accès aux membres statiques : Les fonctions statiques peuvent accéder aux membres statiques de la classe, tels que les variables statiques ou les autres fonctions statiques de la même classe.

5. Recursion limitée : Les fonctions statiques sont soumises à une limitation de récursion, car elles partagent le même espace mémoire pour leurs variables locales lorsqu'elles sont appelées de manière récursive.

Les fonctions statiques sont utiles lorsque vous souhaitez encapsuler du code qui ne dépend pas d'un objet spécifique, et vous voulez limiter leur portée au fichier source actuel. Elles sont souvent utilisées dans les classes pour fournir des fonctions utilitaires ou des fonctions d'assistance qui ne nécessitent pas l'état d'un objet particulier.