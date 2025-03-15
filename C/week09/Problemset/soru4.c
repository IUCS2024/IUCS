#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Palindrom kontrolü yapan fonksiyon (sadece boşlukları yok sayar)
int is_palindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        // Sol tarafta boşlukları geç
        while (left < right && isspace(str[left]))
         {
          left++;
        }
        // Sağ tarafta boşlukları geç
        while (left < right && isspace(str[right]))
        {
          right--;
        }

        // Karakterleri kıyasla (küçük harf hassasiyetini kaldır)
        if (tolower(str[left]) != tolower(str[right])) {
            return 0; // Palindrom değil
        }

        left++;
        right--;
    }

    return 1; // Palindrom
}

int main() {
    char metin[100];
    printf("Bir metin girin: ");
    fgets(metin, sizeof(metin), stdin);

    // Yeni satır karakterini kaldır
    metin[strcspn(metin, "\n")] = '\0';

    // Palindrom kontrolü
    if (is_palindrome(metin)) {
        printf("Girilen metin bir palindromdur.\n");
    } else {
        printf("Girilen metin bir palindrom değildir.\n");
    }

    return 0;
}
