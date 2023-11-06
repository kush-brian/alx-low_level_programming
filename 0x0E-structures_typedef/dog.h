/**
 * struct dog - a dogs info
 * @name: first element
 * @age: second element
 * @owner: third element
 * Description: longer one
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
