#include <stdio.h>

int main() {
    int t1, t2, t3;
    
    printf("Masukkan nilai tahanan 1: ");
    scanf("%d", &t1);
    
    printf("Masukkan nilai tahanan 2: ");
    scanf("%d", &t2);
    
    printf("Masukkan nilai tahanan 3: ");
    scanf("%d", &t3);
    
    if (t1 >= 0 && t2 >= 0 && t3 >= 0) {
        int total_tahanan = t1 + t2 + t3;
        printf("Total tahanan jika dirangkai seri: %d\n", total_tahanan);
    } 
	else {
        printf("Masukan tahanan tidak boleh negatif\n");
    }
    
    return 0;
}
