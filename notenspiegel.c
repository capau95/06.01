#include <stdio.h>

int main() {

float noten[10];
int i;
float summe;

for(i=0; i<10; i++) {
	printf("Bitte geben Sie die Note ein:\n");
	scanf("%f", &noten[i]);
}

for(i=0; i<10; i++) {
	summe += noten[i];
}

printf("Der Notenschnitt beträgt %.2f\n", summe / 10);

return 0;

}

