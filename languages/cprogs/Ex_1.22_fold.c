#include <stdio.h>
int main()
{
	int pos;
	char c;
	while((c=getchar())!=EOF)
	{
		pos++;
		if(pos>=50)
			if(c==' '||c=='\t')
			{
				printf("\n");
					pos=0;
				c=getchar();
			}
		putchar(c);
	}
	return 0;
}
