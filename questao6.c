int verificar_substring(char *str1, char *str2) {
    if (*str2 == '\0') return 1;

    char *ptr1, *ptr2, *temp_ptr1;

    for (ptr1 = str1; *ptr1 != '\0'; ptr1++) {
        temp_ptr1 = ptr1;
        ptr2 = str2;

        while (*temp_ptr1 != '\0' && *ptr2 != '\0' && *temp_ptr1 == *ptr2) {
            temp_ptr1++;
            ptr2++;
        }
        if (*ptr2 == '\0') {
            return 1;
        }
    }

}

int main() {
    char str1[] = "programacao em C";
    char str2[] = "em";

    if (verificar_substring(str1, str2)) {
        printf("'%s' está contida em '%s'\n", str2, str1);
    } else {
        printf("'%s' não está contida em '%s'\n", str2, str1);
    }

    return 0;
}
