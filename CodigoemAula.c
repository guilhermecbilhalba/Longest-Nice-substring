#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char s[100];
char lowerkeep[100];
char upperkeep[100];
char keep1[1];
char keep2[1];
char keep3[1];
char keep4[1];
char fim[100];
int x = 0,y = 0,z = 0;


printf("Digite uma string:");
scanf("%s",s);

for (int i = 0;s[i] != '\0';i++) {

keep1[0] = s[i];
keep2[0] = lowercase[i];

if (strcmp(keep1,keep2)) {
lowerkeep[x] = s[i];
x++;
}

keep2[0] = uppercase[i];

if (strcmp(keep1,keep2)) {
upperkeep[y] = s[i];
y++;
}
}

for (int i = 0;lowerkeep[i] != '\0';i++) {
keep1[0] = lowerkeep[i];
keep2[0] = upperkeep[i];


for (y = 0;y < 24;y++) {
keep3[0] = lowercase[y];
keep4[0] = uppercase[y];
if (strcmp(keep1,keep3))
if (strcmp(keep2,keep4)){
fim[z] = keep1[0];
z++;
fim[z] = keep2[0];
z++;
}


}


}

printf("Longest Nice Substring:%s",fim);

}

