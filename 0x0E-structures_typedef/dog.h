#ifndef DOG_H
#define DOG_H

/**
 * struct dog - basic structure of a dog
 * @name: name of the dog.
 * @age: how old the dog is.
 * @owner: the owner of the dog.
 *
 * Description: User-defined data type for a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
