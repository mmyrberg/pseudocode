#include <stdio.h>

int main() {
    int num, num2, i;
    char str[20];
    //string str;
    scanf("%d %d %s", &num, &num2, str);
    //cin >> num >> num2 >> str;

    if (num == num2) {
        //cout << "Numbers_are_equal" << endl;
        puts("Numbers_are_equal");
    }

    for (i=0; i<num; i++) {
        //cout << str << endl;
        printf("%s\n", str);
    }

    return 0;
}