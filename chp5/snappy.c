#include <stdio.h>

struct exercise {
	const char *description;
	float duration;
};

struct meal {
	const char *ingredients;
	float weight;
};

struct preferences {
	struct meal food;
	struct exercise exercise;
};

struct fish {
	const char *name;
	const char *species;
	int teeth;
	int age;
	struct preferences care;
};

struct fish snappy = {"Snappy", "Pirahna", 32, 2, {{"Meat", 0.2}, {"Swimming", 7.5}}};

int main()
{
	printf("%s is a %s with %i teeth. %s is %i years old.\n", snappy.name, snappy.species, snappy.teeth, snappy.name, snappy.age);
	printf("Meal: %s weighing in at %.1f lbs.\n", snappy.care.food.ingredients, snappy.care.food.weight);
	printf("Exercise: %s for %.1f hours.\n", snappy.care.exercise.description, snappy.care.exercise.duration);
	return 0;
}
