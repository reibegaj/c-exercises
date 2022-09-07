#include <stdio.h>
#include <string.h>
int main() {
    int i = 0;
    int j = 0;
    int u = 20;

    char name[20] = {};
    printf("Input name: \n");
    scanf("%s", &name);
    printf("%s \n", name);

    char surname[20] = {};
    printf("Input surname: \n");
    scanf("%s", &surname);
    printf("%s\n",surname);
    
    char forbidden[5] = {'a','e','i','o','u'};

    printf("%s %s\n", name,surname);

    #include <string.h>

    char *strrev(char *str)
    {
        if (!name || ! *str)
            return name;

        int i = strlen(str) - 1, j = 0;

        char ch;
        while (i > j)
        {
            ch = str[i];
            str[i] = str[j];
            str[j] = ch;
            i--;
            j++;
        }
    return str;
    }

    print("Reversed name: %s\n", strrev(name));
    printf("Reversed surname: %s\n", strrev(surname));

    while(i < 5){
        for(j = 0; j < 20; j++){
            if(name[j] == forbidden[i])
            {
                name[j] = 'z';
            };
            
            if (surname[j] == forbidden[i])
            {
                surname[j] = 'z';
            };
            
        };
        i++;
    };

    printf("\n%s %s", name, surname);
return 0;
};