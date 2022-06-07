//#include <stdio.h>
//
//int main(){
//	int var1;
//	char var2[10];
//	printf("Adresa var1: %x\n", &var1);
//	printf("Adresa var2: %x", &var2);
//	return 0;
//}


//#include <stdio.h>
//
//int main(){
//	int var1 = 20;
//	int *p1;
//	p1 = &var1;
//	printf("Adresa var1: %x\n", &var1);
//	printf("Adresa p1: %x\n", p1);
//	printf("Vrednost p1: %d\n", *p1); 
//	return 0;
//}

//#include <stdio.h>
//
//const int MAX = 3;
//
//int main(){
//	int var[] = {1,10,100};
//	int i,*ptr;
//	ptr = var;
//	for(i=0;i<MAX;i++){
//		printf("Adresa var[%d] = %x\n",i,ptr);
//		printf("Vrednost var[%d] = %d\n",i,*ptr);
//		ptr++;
//	}
//	return 0;
//}


//#include <stdio.h>
//
//const int MAX = 3;
//
//int main(){
//	int var[] = {1,10,100};
//	int i,*ptr;
//	ptr = var;
//	while(ptr<=&var[MAX-1]){
//		printf("Adresa var[%d] = %x\n",i,ptr);
//		printf("Vrednost var[%d] = %d\n",i,*ptr);
//		ptr++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//const int MAX = 3;
//
//int main(){
//	int var[] = {1,10,100};
//	int i,*ptr[MAX];
//	for(i=0;i<MAX;i++){
//		ptr[i] = &var[i];
//	}
//	for(i=0;i<MAX;i++){
//		printf("Vrednost var[%d] = %d\n",i,*ptr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//
//const int MAX = 3;
//
//int main(){
//	int var[] = {1,10,100};
//	int i,*ptr;
//	ptr = var;
//	for(i=0;i<MAX;i++){
//		printf("Adress of var[%d] = %x\n",i,ptr);
//		printf("Value of var[%d] = %d\n\n",i,*ptr);
//		ptr++;
//	}
//	return 0;
//}



//#include <stdio.h>
//#define MAX 4
//int main(){
//	char *names[] = {
//		"Zara Ali",
//		"Hina Ali",
//		"Nuha Ali",
//		"Sara Ali"
//	};
//	
//	int i = 0;
//	for(i=0;i<MAX;i++){
//		printf("Value of name[%d]: %s\n",i,names[i]);
//	}
//	
//	return 0;
//}


//#include <stdio.h>
//
//int main(){
//	int var;
//	int *ptr;
//	int **pptr;
//	var = 3000;
//	ptr = &var;
//	pptr = &ptr;
//	
//	printf ("Value of var = %d\n", var);
//	printf ("Value of *ptr = %d\n", *ptr);
//	printf ("Value of **pptr = %d\n", **pptr);
//	return 0;
//}

//#include <stdio.h>
//
//double getAverage(int *arr, int len);
//
//int main(){
//	int balance[5] = {1000,2,3,17,50};
//	double avg = getAverage(balance,5);
//	printf("Average value is: %.2lf", avg);
//	return 0; 
//}
//
//double getAverage(int *arr, int len){
//	int i,sum=0;
//	for(i=0;i<len;i++){
//		sum += arr[i];
//	}
//	return (double)sum/len;
//}



//#include <stdio.h>
//
//void ucitavanje(int *niz,int n);
//int sumiranje(int *ptr,int n);
//
//int main(){
//	int n;
//	printf("Unesite duzinu niza: ");
//	scanf("%d", &n);
//	int niz[n];
//	ucitavanje(niz,n);
//	int sum = sumiranje(niz,n);
//	printf("Suma = %d",sum);
//	return 0;
//}
//
//void ucitavanje(int *niz,int n){
//	int i;
//	printf("Unesite elemente niza: ");
//	for(i=0;i<n;i++){
//		scanf("%d", &niz[i]);
//	}
//}
//
//int sumiranje(int *niz,int n){
//	int sum=0,i;
//	for(i=0;i<n;i++){
//		sum+= niz[i];
//	}
//	return sum;
//}


//#include <stdio.h>
//
//int main(){
//	int n;
//	printf("Unesite duzinu niza: ");
//	scanf("%d", &n);
//	int niz[n],i;
//	printf("Unesite elemente niza: ");
//	for(i=0;i<n;i++)
//		scanf("%d", &niz[i]);
//	for(i=0;i<n;i+=2)
//		niz[i] *= -1;
//	printf("Novi elementi niza: ");
//	for(i=0;i<n;i++)
//		printf("%d   ",niz[i]);
//	return 0;
//}


//#include <stdio.h>
//
//int brPrElmSaNepInd(int *niz,int n){
//	int brojac=0,i;
//	for(i=1;i<n;i+=2){
//		if(niz[i]%2 == 0) brojac++;
//	}
//	return brojac;
//}
//
//int main(){
//	int n;
//	printf("Unesite duzinu niza: ");
//	scanf("%d", &n);
//	int niz[n],i;
//	printf("Unesite elemente niza: ");
//	for(i=0;i<n;i++)
//		scanf("%d", &niz[i]);
//	printf("Broj parnih elemenata sa neparnim indeksima: %d", brPrElmSaNepInd(niz,n));
//	return 0;
//}


//#include <stdio.h>
//
//int brojPromena(int *niz, int n){
//	int i,brojac=0,j;
//	for(i=1;i<n;i++){
//		j=i-1;
//		ponovo:
//			if((niz[j]<0 && niz[i]>0) || (niz[j]>0 && niz[i]<0))
//				brojac++;
//			else if(niz[j] == 0){
//				for(j=i-1;j>=0 && niz[j]==0;j--);
//				if(niz[j]!=0) goto ponovo;
//			}
//	}
//	return brojac;
//}
//
//int main(){
//	int n;
//	printf("Unesi duzinu niza: ");
//	scanf("%d", &n);
//	int niz[n],brojac=0,i;
//	printf("Unesi elemente niza: ");
//	for(i=0;i<n;i++)
//		scanf("%d", &niz[i]);
//	printf("Broj promene znaka u nizu elemenata razlicitih od nule: %d",brojPromena(niz,n));
//	return 0;
//}


//Primer 15. Napisati program kojim se za zadate nizove a[1], a[2], …, a[n] i
//b[1], b[2], …, b[n] izracunava a[1]*b[n]+a[2]*b[n-1]+…+a[n]*b[1].

//#include <stdio.h>
//
//int main(){
//	int n;
//	printf("Unesite duzinu niza: ");
//	scanf("%d",&n);
//	int a[n],b[n];
//	printf("Unesi elemente niza a: ");
//	int i;
//	for(i=0;i<n;i++)
//		scanf("%d",&a[i]);
//	printf("Unesi elemente niza b: ");
//	for(i=0;i<n;i++)
//		scanf("%d",&b[i]);
//	int sum=0;
//	for(i=0;i<n;i++)
//		sum = sum + (a[i]*b[n-i-1]);
//	printf("Suma: %d",sum);
//	return 0;
//}



//Primer 16. Napisati program kojim se na osnovu nizova b[1], b[2], …, b[n] i
//c[1], c[2], …, c[n] formira niz a[1], a[2], …, a[2n] cije su vrednosti: b[1], c[1],
//b[2], c[2], …, b[n], c[n].


//#include <stdio.h>
//
//int main(){
//	int n;
//	printf("Unesite duzinu niza: ");
//	scanf("%d",&n);
//	int a[n],b[n],c[2*n];
//	printf("Unesi elemente niza a: ");
//	int i;
//	for(i=0;i<n;i++)
//		scanf("%d",&a[i]);
//	printf("Unesi elemente niza b: ");
//	for(i=0;i<n;i++)
//		scanf("%d",&b[i]);
//	int j = 0;
//	for(i=0;i<2*n;i++){
//		if(i%2 == 0) c[i] = a[j];
//		else{
//			c[i] = b[j];
//			j++;
//		}
//	}
//	printf("Niz c: ");
//	for(i=0;i<2*n;i++)
//		printf("%d ",c[i]);
//	return 0;
//}



//Primer 17. Napisati program kojim se na osnovu niza a[1], a[2], …, a[2*n]
//formiraju nizovi b[1], b[2], …, b[n] i c[1], c[2], …, c[n] ciji su elementi redom
//jednaki: a[1], a[3], …, a[2*n-1] i a[1], a[4], …, a[2*n] .


//#include <stdio.h>
//
//int main(){
//	int n;
//	printf("Unesite duzinu niza: ");
//	scanf("%d",&n);
//	int a[n],b[n],c[n];
//	printf("Unesi elemente niza a: ");
//	int i;
//	for(i=0;i<n;i++)
//		scanf("%d",&a[i]);
//	return 0;
//}



//#include <stdio.h>
//
//int indeksDatogBroja(int niz[],int n,int br){
//	int iMAX=n-1,iMIN=0,mogInd,brojac=0;
//	while(iMIN<=iMAX){
//		mogInd = iMIN+(iMAX-iMIN)/2;
//		if(niz[mogInd] == br) return mogInd;
//		else if(br < niz[mogInd]) iMAX = mogInd - 1;
//		else iMIN = mogInd + 1;
//		
//	}
//	return -1;
//}
//
//int main(){
//	int n;
//	printf("Unesite duzinu niza: ");
//	scanf("%d",&n);
//	int a[n];
//	printf("Unesi elemente niza a: ");
//	int i;
//	for(i=0;i<n;i++)
//		scanf("%d",&a[i]);
//	int br;
//	printf("Unesite element koji zelite pronaci: ");
//	scanf("%d", &br);
//	if(indeksDatogBroja(a,n,br) == -1) printf("Dati element ne postoji u nizu.");
//	else printf("Indeks datog broja je: %d", indeksDatogBroja(a,n,br));
//}



//#include <stdio.h>
//#include <string.h>
//
//typedef struct Books{
//	char title[50];
//	char author[50];
//	char subject[100];
//	int book_id;
//}BOOK;
//
//void printBook(BOOK *book){
//	printf("Book title: ");
//	puts(book->title);
//	printf("Book author: ");
//	puts(book->author);
//	printf("Book subject: ");
//	puts(book->subject);
//	printf("Book ID: %d", book->book_id);
//}
//
//int main(){
//	BOOK book1;
//	strcpy(book1.title,"The silky road");
//	strcpy(book1.author,"Peter");
//	strcpy(book1.subject,"Novel");
//	book1.book_id = 23456;
//	printBook(&book1);
//	return 0;
//}



//malloc

//#include <stdio.h>
//
//int main(){
//	int *p;
//	p = malloc(sizeof(int));
//	printf("The address of p is %x\n", p);
//	printf("The value of p is %d\n\n", *p);
//	*p = 5;
//	printf("The address of p is %x\n", p);
//	printf("The value of p is %d", *p);
//	return 0;
//}



//calloc

//#include <stdio.h>
//
//int main(){
//	int *p;
//	p = calloc(1,sizeof(int));
//	printf("The address of p is %x\n", p);
//	printf("The value of p is %d\n\n", *p);
//	*p = 5;
//	printf("The address of p is %x\n", p);
//	printf("The value of p is %d", *p);
//	free(p);
//	return 0;
//}



//realloc

//#include <stdio.h>
//
//int main(){
//	int *p;
//	p = malloc(sizeof(int));
//	printf("The address of p is %x\n", p);
//	printf("The value of p is %d\n", *p);
//	printf("Size of p is %d\n\n", sizeof(int));
//	*p = 5;
//	p = realloc(p,5*sizeof(int));
//	printf("The address of p is %x\n", p);
//	printf("The value of p is %d\n", *p);
//	printf("Size of p is %d\n\n", 5*sizeof(int));
//	free(p);
//	return 0;
//}


//strukture

//#include <stdio.h>
//
//struct datum{
//	int dan;
//	int mesec;
//	int godina;
//};
//
//int main(){
//	struct datum *vreme;
//	vreme = (struct datum*)malloc(sizeof(struct datum));
//	vreme->dan=4;
//	vreme->mesec=3;
//	vreme->godina= 2005;
//	printf("Datum: %d.%d.%d.",vreme->dan,vreme->mesec,vreme->godina);
//	return 0;
//}


//jednostruke povezane liste

//#include <stdio.h>
//
//typedef struct node{
//	int data;
//	struct node *next;
//}NODE;
//
//NODE *first = NULL,*last = NULL, *temp = NULL;
//
//int isEmpty(){
//	if(first == NULL) return 1;
//	return 0;
//}
//
//void create(int elem){
//	temp = (struct node *)malloc(sizeof(struct node));
//	temp->data = elem;
//	temp->next = NULL;
//	if(first == NULL){
//		first = temp;
//		last = temp;
//	} else{
//		last->next = temp;
//		last = temp;
//	}
//}
//
//void insert_after(NODE *pom, int elem){
//	temp = (struct node*) malloc(sizeof(struct node));
//	temp->data = elem;
//	temp->next = pom->next;
//	pom->next = temp;
//	if(pom == last) last = temp;
//}
//
//void insert_before(NODE *pom, int elem){
//	temp = (struct node*) malloc(sizeof(struct node));
//	temp->data = pom->data;
//	temp->next = pom->next;
//	pom->data = elem;
//	pom->next = temp;
//	if(pom == last){
//		last = temp;
//	}
//}
//
//void delete_after(NODE *pom){
//	if(isEmpty()) printf("Lista je prazna!");
//	temp = pom->next;
//	pom->next = temp->next;
//	temp->next = NULL;
//	free(temp);
//}
//
//void delete_actual(NODE *pom){
//	if(pom == first && first == last){
//		first=last=NULL;
//		free(pom);
//	}
//	temp = pom->next;
//	pom->next= temp->next;
//	pom->data= temp->data;
//	free(temp);
//}
//
//void delete_on_position(int pos){
//	int count = 1;
//	NODE *p;
//	p = first;
//	if(pos == 1){
//		first=p->next;
//		free(p);
//		return;
//	}
//	while(count < pos){
//		p = p->next;
//		count++;
//	}
//	delete_actual(p);
//}
//
//void delete_by_value(int value){
//	NODE *p, *q;
//	p = first;
//	q = NULL;
//	while(p->data != value && p != last){
//		q = p;
//		p = p->next;
//	}
//	if(first == p && first == last){
//		first=last=NULL;
//		free(p);
//		printf("Lista je sada prazna!");
//	}
//	else if(p == last){
//		q->next=NULL;
//		free(p);
//		last = q;
//	}
//	else{
//		q->next = p->next;
//		free(p);
//	}
//}
//
//void display(){
//	temp = first;
//	printf("First --> ");
//	while(temp!=NULL){
//		printf("|%d| --> ",temp->data);
//		temp = temp->next;
//	}
//	printf("NULL");
//}
//
//NODE *invertuj(NODE *first){
//	NODE *p,*q,*r;
//	p=first;
//	q=NULL;
//	while(p!=NULL){
//		r = q;
//		q = p;
//		p = p->next;
//		q->next = r;
//	}
//	first = q;
//	return first;
//}
//
//NODE *concat(NODE *list1, NODE *list2){
//	NODE *p,*q;
//	if(list1 == NULL) return list2;
//	else if(list2 == NULL) return list1;
//	p = list1;
//	while(p->next != NULL){
//		p = p->next;
//	}
//	p->next = list2;
//	return list1;	
//}
//
//int main(){
//	
//	return 0;
//}


//Zadatak 1. Napisati potprogram koji na osnovu zadate vrednosti elementa:
//(a)vraca 1 ako se elementa nalazi u lancanoj listi, u suprotnom vraca 0
//(b) vraca element ako je naden u listi
//(c) vraca presek dve lancane liste

//#include <stdio.h>
//
//typedef struct node{
//	int data;
//	struct node *next;
//}NODE;
//
//NODE *first=NULL,*last=NULL,*temp=NULL;
//
////a
//int postoji_u_listi(int elem){
//	NODE *p;
//	p = first;
//	while(p!=NULL){
//		if(p->data == elem) return 1;
//		p = p->next;
//	}
//	return 0;
//}
//
////b
//int element_u_listi(int elem){
//	NODE *p;
//	p = first;
//	while(p != NULL){
//		if(p->data == elem) return p;
//		p=p->next;
//	}
//	return 0;
//}
//
////c
//struct node *presek_dve_liste(NODE *list1, NODE *list2){
//	NODE *list3,*p,*q,*r;
//	list3 = (struct node*)malloc(sizeof(struct node));
//	r = list3;
//	p = list1;
//	while(p->data!=NULL){
//		q=list2;
//		while(q->data!=NULL){
//			printf("1");
//			if(q->data == p->data){
//				r->data = p->data;
//				r->next = (struct node*)malloc(sizeof(struct node));
//				r = r->next;
//				break;
//			}
//			q = q->next;
//		}
//		p = p->next;
//	}
//	free(r);
//	return list3;
//}
//
//int main(){
//	NODE *list1,*list2,*p,*q;
//	printf("Unesi elemente prve liste: ");
//	list1 = (NODE*)malloc(sizeof(NODE));
//	list2 = (NODE*)malloc(sizeof(NODE));
//	p = list1;
//	q = p;
//	while(q->data!=0){
//		scanf("%d", &p->data);
//		q = p;
//		p->next = (struct node*) malloc(sizeof(struct node));
//		p = p->next;
//	}
//	q->data = NULL;
//	free(q);
//	free(p);
//	p = list2;
//	q = p;
//	printf("Unesi elemente druge liste: ");
//	while(q->data!=0){
//		scanf("%d", &p->data);
//		q = p;
//		p->next = (struct node*) malloc(sizeof(struct node));
//		p = p->next;
//	}
//	q->data = NULL;
//	free(q);
//	free(p);
//	NODE *presek;
//	presek = presek_dve_liste(list1,list2);
//	p = presek;
//	printf("Presek dve unete liste: ");
//	while(p!=NULL){
//		printf("%d  ",p->data);
//		p=p->next;
//	}
//	return 0;
//}



//Zadatak 2. Napisati program kojim se svako pojavljivanje elementa el1 u listi zamenjuje elementom el2.


//#include <stdio.h>
//
//typedef struct node{
//	int data;
//	struct node *next;
//}NODE;
//
//NODE *first,*last,*temp;

//void zameni(int el1, int el2){
//	NODE *p;
//	p = first;
//	while(p!=NULL){
//		if(p->data == el1){
//			p->data = el2;
//		}
//		p = p->next
//	}
//}





//Zadatak 3. Napisati potprogram kojim se dodaje element na pocetak lancane liste.

//#include <stdio.h>
//
//typedef struct node{
//	int data;
//	struct node *next;
//}NODE;
//
//NODE *first,*last,*temp;
//
//void dodaj_na_pocetak(int el1){
//	if(first == NULL){
//		first = (NODE*) malloc(sizeof(struct node));
//		first->data = el1;
//		first->next = NULL; 
//		last = first;
//	}
//	temp = (struct node*)malloc(sizeof(struct node));
//	temp->next = first->next;
//	temp->data = first->data;
//	first->next = temp;
//	first->data = el1;
//	if(first == last){
//		last = temp;
//	}
//}




//Zadatak 4. Napisati program kojim se briše  element s pocetka lancane liste.

//#include <stdio.h>
//
//typedef struct node{
//	int data;
//	struct node *next;
//}NODE;
//
//NODE *first=NULL,*last=NULL,*temp=NULL;
//
//int main(){
//	if(first == NULL && first == last){
//		printf("lista je prazna!");
//		return 0;
//	}
//	temp = first;
//	first = first->next;
//	temp->next = NULL;
//	free(temp);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int *first,*second;
//	first = (int*)malloc(sizeof(int));
//	second = first;
//	*first = 5;
//	printf("Second: %d", *second);
//	free(first);
//	printf("\nFirst: %d", *first);
//	printf("\nSecond: %d", *second);
//	return 0;
//}


//Zadatak 5. Napisati potprogram kojim se proverava da li su dve lancane liste L1 i L2 jednake.

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct node{
//	int data;
//	struct node *next;
//}NODE;
//
//int dali_su_iste(NODE *l1,NODE *l2){
//	NODE *p,*q;
//	p = l1;
//	q = l2;
//	while(p != NULL || q != NULL){
//		if(p->data != q->data){
//			return -1;
//		}
//		p = p->next;
//		q = q->next;
//	}
//	if((p == NULL && q != NULL) || (p != NULL && q == NULL)){
//		return -1;
//	}
//	return 1;
//}
//
//int main(){
//	return 0;
//}



//Zadatak 6. Napisati rekurzivni potprogram koji nalazi:
//(a) maksimalni element lancane liste,
//(b) sumu svih elemenata lancane liste
//(c) ispituje da li se zadati element nalazi u listi
//(d) zamenjuje svako pojavljivanje elementa el1 elementom el2

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct node{
//	int data;
//	struct node *next;
//}NODE;
//
//
////a
//int maksimalan_broj(int max,NODE *p){
//	if(p->data > max) max = p->data;
//	p = p->next;
//	if(p != NULL) maksimalan_broj(max,p);
//	return max;
//}
//
//
////b
//int suma_svih_elemenata(NODE *p,int sum){
//	sum += p->data;
//	p = p->next;
//	if(p!=NULL) suma_svih_elemenata(p,sum);
//	return sum;
//}
//
//
////c
//int dali_se_nalazi(NODE *p,int el){
//	if(p->data == el) return 1;
//	p = p->next;
//	if(p!=NULL) dali_se_nalazi(p,el);
//	return 0;
//}
//
//
////d
//
//void zamenjuje(int el1,int el2,NODE *p){
//	if(p->data == el1) p->data = el2;
//	p = p->next;
//	if(p!=NULL) zamenjuje(el1,el2,p);
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//struct node{
//	int data;
//	struct node *next;
//	struct node *prev;
//};
//
//struct node *head;
//
//struct node *getNewNode(int x){
//	struct node *newNode;
//	newNode = (struct node*)malloc(sizeof(struct node));
//	newNode->data = x;
//	newNode->next = NULL;
//	newNode->prev = NULL;
//	return newNode;
//}
//
//void InsertAtHead(int x){
//	struct node *newNode = getNewNode(x);
//	if(head == NULL){
//		head = newNode;
//		return;
//	}
//	head->prev = newNode;
//	newNode->next = head;
//	head = newNode;
//}
//
//void InsertAtTail(int x){
//	struct node *newNode = getNewNode(x);
//	struct node *temp = head;
//	if(head == NULL){
//		head = newNode;
//		return;
//	}
//	while(temp->next != NULL){
//		temp = temp->next;
//	}
//	temp->next = newNode;
//	newNode->prev = temp;
//}
//
//void Print(){
//	struct node *temp = head;
//	if(head == NULL){
//		printf("Lista je prazna!");
//	}
//	while(temp!=NULL){
//		printf("<-- |%x|%d|%x| --> ",temp->prev,temp->data,temp->next);
//		temp = temp->next;
//	}
//}
//
//void ReversePrint(){
//	struct node *temp = head;
//	while(temp->next != NULL){
//		temp = temp->next;
//	}
//	printf("Reverse: ");
//	while(temp != NULL){
//		printf("%d	",temp->data);
//		temp = temp->prev;
//	}
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct node{
//	int info;
//	struct node *next;
//}NODE;
//
//NODE *front = NULL, *rear = NULL, *temp = NULL;
//
//void create(){
//	NODE *newNode = (struct node*)malloc(sizeof(struct node));
//	printf("Enter the node value: ");
//	scanf("%d", newNode->info);
//	newNode->next = NULL;
//	if(rear = NULL){
//		front = rear = newNode;
//	}
//	else {
//		rear->next = newNode;
//		rear = newNode;
//	}
//	rear->next = front;
//}
//
//void del(){
//	temp = front();
//	if(front == NULL)
//		printf("Underflow:\n");
//	else{
//		if(front == rear){
//			printf("\n%d",front->info);
//			front = rear = NULL;
//		}
//		else {
//			printf("\n%d",fornt->info);
//			front = front->next;
//			rear->next = front;
//		}
//		temp->next = NULL;
//		free(temp);
//	}
//}
//
//void display(){
//	temp = front;
//	if(front == NULL)
//		printf("Empty\n");
//	else{
//		printf("\n");
//		for(;temp!=rear;temp = temp->next){
//			
//		}
//	}
//}



//Zadatak 1. Brisanje elementa u dvostruko ulancanoj listi:
//S pocetka liste
//S kraja liste
//Pre zadatog elementa
//Nakon zadatog elementa itd. (kao za jednostruko povezanu).

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct node{
//	int data;
//	struct node *next;
//	struct node *prev;
//}NODE;
//
//NODE *first = NULL, *last = NULL, *temp = NULL;
//
//void brisanje_spocetka(){
//	temp = first;
//	if(first == NULL)
//		printf("Lista je prazna");
//	else{
//		if(first == last){
//			first = last = NULL;
//		}
//		else{
//			first = first->next;
//			last->next = first;
//			first->prev = last;
//		}
//		temp->next = NULL;
//		temp->prev = NULL;
//		free(temp);
//	}
//}
//
//void brisanje_skraja(){
//	temp = last;
//	if(first == NULL)
//		printf("Lista je prazna");
//	else{
//		if(first == last){
//			first = last = NULL;
//		}
//		else{
//			last = last->prev;
//			last->next = first;
//			first->prev = last;
//		}
//		temp->next = NULL;
//		temp->prev = NULL;
//		free(temp);
//	}
//}
//
//void brisanje_pre_elementa(int x){
//	temp = first;
//	struct node *HEAD = (struct node*)malloc(sizeof(struct node));
//	HEAD->data = NULL;
//	HEAD->next = first;
//	HEAD->prev = last;
//	first->prev = HEAD;
//	last->next = HEAD;
//	while(temp!=HEAD){
//		if(temp->data == x) break;
//		temp = temp->next;
//	}
//	if(temp->data == x){
//		struct node *p;
//		p = temp->prev;
//		temp->prev = p->prev;
//		temp = p;
//		p = temp->prev;
//		p->next = temp->next;
//		temp->next = NULL;
//		temp->prev = NULL;
//		free(temp);
//	}
//	HEAD->next = NULL;
//	HEAD->prev = NULL;
//	first->prev = last;
//	last->next = first;
//	free(HEAD);
//}



//Zadatak 2. Pretvaranje jednostruko ulancane liste u kružno ulancanu i obrnuto.

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct node{
//	int data;
//	struct node *next;
//}NODE;
//
//NODE *first = NULL, *last = NULL, *temp = NULL;
//
//void pretvaranje_u_kruzno(){
//	last->next = first;
//}
















