#include <stdio.h>
#include <stdlib.h>

struct node{
    int n;
    struct node *next;
};
void crear(struct node *p,int m){
    struct node *vec,*cur;
    vec=malloc(sizeof (struct node));
    p->n=1;
    vec=p;
    int i;
    for(i=2;i<=m;i++){
        cur = malloc (sizeof (struct node));
        cur->n=i;
        vec->next=cur;
        vec=cur;
    }
    vec->next=NULL;
    return ;
}
void mostrar(struct node *p){
    struct node *q;
    q=malloc(sizeof(struct node));
    q=p;
    while (q != NULL){
        printf("%d\n",q->n);
        q=q->next;
    }
    return ;
}
void quitar(struct node *p,int posicion){
    struct node *q,*w;
    q=malloc(sizeof(struct node));
    w=malloc(sizeof(struct node));
    q=p;
    if(q->n==posicion){
        p=p->next;
        return ;
    }
    w=q->next;
    while(w!=NULL){
        if(w->n==posicion){
            q->next=w->next;
            break;
        }
        q=q->next;
        w=w->next;
    }
    return;
}
void concatenar(struct node *p,struct node *q){
	struct node *s, *w;
	s=malloc(sizeof(struct node));
	w=malloc(sizeof(struct node));
	s=p;
	w=q;
	while (s != NULL){
		s=s->next;
	}
	s->next = w;
	return;
}

void poner(struct node *p,int posicion){
    struct node *q,*s,*r, *w;
    s=malloc(sizeof(struct node));
    r=malloc(sizeof(struct node));
    w=malloc(sizeof(struct node));
    q=p;
    r=q->next;
    w=q->next;
    if(q->n==posicion){
    	s->n=posicion;
    	s->next=r;
    	q->next=s;
        return ;
    }
    while(w!=NULL){
        if(w->n==posicion){
            s->n=posicion;
    		s->next=r;
    		q->next=s;
    		return ;
        }
        q=q->next;
        w=w->next;
    }
    return;
}
main(){
	struct node *head; //*head1;
    head=malloc(sizeof(struct node));
    //head1=malloc(sizeof(struct node));
	int n;
    scanf("%d",&n);
    crear(head,n);
    //crear(head1,n);
    poner(head,2);
    //quitar(head,4);
    //mostrar(head);
    //mostrar(head1);
	//concatenar(head,head1,n);
    mostrar(head);
}
