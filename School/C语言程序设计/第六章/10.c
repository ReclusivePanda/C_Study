// 这段程序是直接Copy的
#include <stdio.h>
#include <conio.h>

int main()
{
    char str[3][80];
    int i, j, bl, sl, num, space, others;
    for (i=0; i<3; i++)
        gets(str[i]);
    bl = sl = num = space = others = 0;
    for (j=0; j<3; j++){
        for (i=0; i<80; i++){
            if (str[j][i]>='A' && str[j][i]<='Z')
                bl++;
            else if (str[j][i]>='a' && str[j][i]<='z')
                sl++;
            else if (str[j][i]>='0' && str[j][i]<='9')
                num++;
            else if (str[j][i]==' ' || str[j][i]=='\t')
                space++;
            else
                others++;
        }
    }
	printf("bl = %d  sl = %d  num = %d  space = %d  others = %d\n", bl, sl, num, space, others);

	_getch();
    return 0;
}
