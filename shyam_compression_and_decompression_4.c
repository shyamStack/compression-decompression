#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
void writeToInputFile(const char *fileName) { 
FILE *fp = fopen(fileName, "w"); 
if (fp == NULL) { 
printf("Error: Cannot open file for writing.\n"); 
return; 
} 
char buffer[1000]; 
printf("Type the content to be saved in the file:\n"); 
fgets(buffer, sizeof(buffer), stdin); 
size_t len = strlen(buffer); 
if (len > 0 && buffer[len - 1] == '\n') 
buffer[len - 1] = '\0'; 
fputs(buffer, fp); 
fclose(fp); 
printf("Data written successfully to '%s'.\n", fileName); 
} 
void applyRLECompression(const char *sourceFile, const char *compressedFile) { 
FILE *src = fopen(sourceFile, "r"); 
FILE *dest = fopen(compressedFile, "w"); 
if (!src || !dest) { 
printf("File opening failed during compression.\n"); 
return; 
} 
int count = 1; 
char current, previous; 
previous = fgetc(src); 
if (previous == EOF) { 
printf("The input file is empty. Nothing to compress.\n"); 
fclose(src); 
fclose(dest); 
return; 
} 
while ((current = fgetc(src)) != EOF) { 
if (current == previous) { 
count++; 
} else { 
fprintf(dest, "%c%d", previous, count); 
previous = current; 
count = 1; 
} 
} 
fprintf(dest, "%c%d", previous, count); 
fclose(src); 
fclose(dest); 
printf("Compression done! Output saved to '%s'.\n", compressedFile); 
} 
int main() { 
char source[] = "data.txt"; 
char result[] = "rle_output.txt"; 
writeToInputFile(source); 
applyRLECompression(source, result); 
return 0; 
}
