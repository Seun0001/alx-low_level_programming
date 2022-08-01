#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
*new_dog - struct returning
*@name: dog name
*@age: age of dog
*@owner: owner name
*Return: dog struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	int nameSize = 0, ownerSize = 0, loop;

while (name[nameSize] != '\0')
{
nameSize++;
}
while (owner[ownerSize] != '\0')
{
ownerSize++;
}
dog1 = malloc(sizeof(dog_t));
if (dog1 == NULL)
{
free(dog1);
return (NULL);
}
dog1->name = malloc(sizeof(dog1->name) * nameSize);
if (dog1->name == NULL)
{
free(dog1->name);
free(dog1);
return (NULL);
}
for (loop = 0; loop <= nameSize; loop++)
{
dog1->name[loop] = name[loop];
}
dog1->age = age;
dog1->owner = malloc(sizeof(dog1->owner) * ownerSize);
if (dog1->owner == NULL)
{
free(dog1->owner);
free(dog1->name);
free(dog1);
return (NULL);
}
for (loop = 0; loop <= ownerSize; loop++)
dog1->owner[loop] = owner[loop];
return (dog1);
}
