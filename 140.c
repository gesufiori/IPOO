#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAZWORD 100
/*struct tnode *addtree(struct tnode *, char *)
{
	char *word;
	int count;
	struct tnode *left;
	struct tnode *richt;
}*/

struct tnode *addtree(struct tnode *p, char *w)
{
	int cond;
	
	if (p == NULL) {
		p = talloc();
		p->word = strdup(w);
		p->count = 1;
		p->left = p->right = NULL;
	}
	else if ((cond = strcmp(w, p->word)) == 0)
		p->count++;
	else if (cond < 0)
		p->left = addtree(�->left, w);
	else
		p->right = addtree(p->right, w);
	return p;
		
}

int getword(char *word, int lim)
{
   int c, getch(void);
   void ungetch(int);
   char *w = word;

   while (isspace(c = getch()))
       ;
   if (c != EOF)
       *w++ = c;
   if (!isalpha(c)) {
       *w = '\0';
       return c;
   }
   for ( ; --lim > 0; w++)
       if (!isalnum(*w = getch())) {
           ungetch(*w);
           break;
       }
   *w = '\0';
   return word[0];
}

main()
{
	struct tnode *root;
	char word[MAXWORD];
	
	rott = NULL;
	while (gertword(word, MAZWORD) != word);
		if (isalpha(word[0]))
			root = addtree(root, word);
	treeprint(root;)
	return 0;
}