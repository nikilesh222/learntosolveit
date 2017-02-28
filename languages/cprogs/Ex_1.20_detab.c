#include <stdio.h>
int main()
{
	char c;
	int pos=0,nt;
	while((c=getchar())!=EOF)
	{
		if(c!='\t')
		{
			putchar(c);
			pos++;
		}
		if(c=='\t')
		{
			if(pos<=8)
				nt=8-pos;
			else
				nt=(8-(pos%8));
			pos=0;
			for(;nt>0;nt--)
				printf("#");
		}
	}
	return 0;
}
