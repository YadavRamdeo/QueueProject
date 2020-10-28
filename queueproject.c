#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue [5],dequeue[N],front=-1,rear=-1,choice=1,n,x,i,f;
void queueusingarray();
	void enqueue();
	void display();
	void peek();
	void dequeuearray();
void queueusinglinklist();
	void enqueuell();
	void displayll();
	void peekll();
	void dequeuell();
void cirqueueusingarray();
	void cenqueue();
	void cdisplay();
	void cpeek();
	void cdequeue();
void cqueueusinglinklist();
	void cenqueuell();
	void cdisplayll();
	void cpeekll();
	void cdequeuell();
void queueusingstack();
	void enqueuestack();
	void displaystack();
	void dequeuestack();
void deusingcirqueue();
	void enqueuefront();
	void enqueuerear();
	void ddisplay();
	void getfront();
	void getrear();
	void dequeuefront();
	void dequeuerear();
struct node
	{
		int data;
		struct node *next;
	};
	struct node *newnode, *temp, *frontl=0, *rearl=0,*m;
	int s1[N],s2[N],top1,top2,a,b,count=0;
int main()
{
	while(1)
	{
		system("color A");
		printf("\n----------------------------------------------------------------------------------\n\n");
		printf(" *************************    Q U E U E  OPERATION BY  **************************\n");
		printf("                             R    A    M    D    E   O                            \n");
		printf("----------------------------------------------------------------------------------\n");
		printf("1.QUEUE USING ARRAY\n");
		printf("2.QUEUE USING LINKED LIST\n");
		printf("3.CIRCULAR QUEUE USING ARRAY\n");
		printf("4.CIRCULAR QUEUE USING LINKED LIST\n");
		printf("5.QUEUE USING STACK\n");
		printf("6.DEQUEUE USING ARRAY\n");
		printf("0.EXIT\n");
		
		printf("ENTER YOUR CHOICE: ");
		scanf("%d",&choice);
		{
			switch(choice)
			{
				case 1:
					queueusingarray();
					break;
				case 2:
					queueusinglinklist();
					break;
				case 3:
					cirqueueusingarray();
					break;
				case 4:
					cqueueusinglinklist();
					break;
				case 5:
					queueusingstack();
					break;
				case 6:
					deusingcirqueue();
					break;
				case 0:
					exit(0);
					break;
				default:
					printf("PRESS 0 TO EXIT");
					break;
			}
		}
	}
	return 0;
}
void queueusingarray()
{
	while(1)
	{
		system("color B");
		printf("\n----------------------------------------------------------------------------------\n\n");
		printf(" **********************    QUEUE OPERATION USING ARRAY BY  ************************\n");
		printf("                             R    A    M    D    E   O                            \n");
		printf("----------------------------------------------------------------------------------\n");
		printf("1.ENQUEUE\n");
		printf("2.DISPLAY\n");
		printf("3.PEEK\n");
		printf("4.DEQUEUE\n");
		printf("0.EXIT\n");
		
		printf("ENTER YOUR CHOICE: ");
		scanf("%d",&choice);
		{
			switch(choice)
			{
				case 1:
					enqueue();
					break;
				case 2:
					display();
					break;
				case 3:
					peek();
					break;
				case 4:
					dequeuearray();
					break;
				case 0:
					exit(0);
					break;
				default:
					printf("PRESS 0 TO EXIT");
					break;
			}
		}
	}
}
void enqueue()
{
	printf("HOW MANY DATA YOU WANT TO ENTER: ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		if(rear==N-1)
		{
			printf("OVERFLOW");
		}
		else if(rear==-1 && front==-1)
		{
			front=rear=0;
			queue[rear]=x;
		}
		else
		{
			rear++;
			queue[rear]=x;
		}
		printf("ENTER DATA:\n");
		scanf("%d",&x);
	}	
}
void display()
{
	if(front==-1 && rear==-1)
	{
		printf("EMPTY QUEUE");
	}
	else
	{
		printf("THE ENTERED DATA ARE: \n");
		for(i=front; i<rear+1; i++)
		{
			printf("%d ",queue[i]);
		}
	}
}
void peek()
{
	if(front==-1 && rear==-1)
	{
		printf("EMPTY QUEUE");
	}
	else
	{
		printf("%d",queue[front]);
	}
}
void dequeuearray()
{
	if(front==-1 && rear==-1)
	{
		printf("UNDERFLOW");
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		printf("DATA DELETED: %d",queue[front]);
		front++;
	}
}
void queueusinglinklist()
{
	while(1)
	{
		system("color C");
		printf("\n----------------------------------------------------------------------------------\n\n");
		printf(" *******************   QUEUE OPERATION USING LINKED LIST BY  *********************\n");
		printf("                             R    A    M    D    E   O                            \n");
		printf("----------------------------------------------------------------------------------\n");
		printf("1.ENQUEUE\n");
		printf("2.DISPLAY\n");
		printf("3.PEEK\n");
		printf("4.DEQUEUE\n");
		printf("0.EXIT\n");
		
		printf("ENTER YOUR CHOICE: ");
		scanf("%d",&choice);
		{
			switch(choice)
			{
				case 1:
					enqueuell();
					break;
				case 2:
					displayll();
					break;
				case 3:
					peekll();
					break;
				case 4:
					dequeuell();
					break;
				case 0:
					exit(0);
					break;
				default:
					printf("PRESS 0 TO EXIT");
					break;
			}
		}
	}
}
void enqueuell()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=0;
	newnode->next=0;
	printf("HOW MANY DATA YOU WANT TO ENTER: ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		if(frontl==0 && rearl==0)
		{
			frontl=rearl=newnode;
		}
		else
		{
			rearl->next=newnode;
			rearl= newnode;
		}
		printf("ENTER DATA:\n");
		scanf("%d",&x);
	}	
}
void displayll( )
{
	if(frontl==0 && rearl==0)
	{
		printf("EMPTY LIST");
	}
	else
	{
		temp=frontl;
		while(temp!=0)
		{
			printf("%d",temp->data);
			temp=temp->data;
		}
	}
}
void peekll()
{
	if(frontl==0 && rearl==0)
	{
		printf("EMPTY LIST");
	}
	else
	{
		printf("%d",frontl->data);
	}
}
void dequeuell()
{
	temp=frontl;
	if(frontl==0 && rearl==0)
	{
		printf("EMPTY LIST");
	}
	else
	{
		printf("DATA DELETED %d",frontl->data);
		free(temp);
	}
}
void cirqueueusingarray()
{
	while(1)
	{
		system("color B");
		printf("\n----------------------------------------------------------------------------------\n\n");
		printf(" ****************    CIRCULAR QUEUE OPERATION USING ARRAY BY  *******************\n");
		printf("                             R    A    M    D    E   O                            \n");
		printf("----------------------------------------------------------------------------------\n");
		printf("1.ENQUEUE\n");
		printf("2.CDISPLAY\n");
		printf("3.PEEK\n");
		printf("4.DEQUEUE\n");
		printf("0.EXIT\n");
		
		printf("ENTER YOUR CHOICE: ");
		scanf("%d",&choice);
		{
			switch(choice)
			{
				case 1:
					cenqueue();
					break;
				case 2:
					cdisplay();
					break;
				case 3:
					cpeek();
					break;
				case 4:
					cdequeue();
					break;
				case 0:
					exit(0);
					break;
				default:
					printf("PRESS 0 TO EXIT");
					break;
			}
		}
	}
}
void cenqueue(int x)
{
	printf("HOW MANY DATA YOU WANT TO ENTER: ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		if(front==-1 && rear==-1)
		{
			front=rear=0;
			queue[rear]=x;
		}
		else if((rear+1)%N==front)
		{
			printf("QUEUE IS FULL");
		}
		else
		{
			rear=(rear+1)%N;
			queue[rear]=x;
		}
	}
}
void cdisplay()
{
	if(front==-1 && rear==-1)
	{
		printf("UNDERFLOW/EMPTY");
	}
	else
	{
		printf("QUEUE IS");
		while(i!=rear)
		{
			printf("%d",queue[i]);
			i=(i+1)%N;
		}
		printf("%d ",queue[rear]);
	}
}
void cpeek()
{
	if(front==-1 && rear==-1)
	{
		printf("EMPTY LIST");
	}
	else
	{
		printf("%d",queue[front]);
	}
}
void cdequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("UNDERFLOW");
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
}

void cqueueusinglinklist()
{
	while(1)
	{
		system("color C");
		printf("\n----------------------------------------------------------------------------------\n\n");
		printf(" ***************   CIRCULAR QUEUE OPERATION USING LINKED LIST BY  ****************\n");
		printf("                             R    A    M    D    E   O                            \n");
		printf("----------------------------------------------------------------------------------\n");
		printf("1.ENQUEUE\n");
		printf("2.DISPLAY\n");
		printf("3.PEEK\n");
		printf("4.DEQUEUE\n");
		printf("0.EXIT\n");
		
		printf("ENTER YOUR CHOICE: ");
		scanf("%d",&choice);
		{
			switch(choice)
			{
				case 1:
					cenqueuell();
					break;
				case 2:
					cdisplayll();
					break;
				case 3:
					cpeekll();
					break;
				case 4:
					cdequeuell();
					break;
				case 0:
					exit(0);
					break;
				default:
					printf("PRESS 0 TO EXIT");
					break;
			}
		}
	}
}
void cenqueuell(int x)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=0;
	printf("HOW MANY DATA YOU WANT TO ENTER: ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		if(rearl==0)
		{
			frontl=rearl=newnode;
			rearl->next=frontl;
		}
		else
		{
			rearl->next=newnode;
			rearl= newnode;
			rearl->next=frontl;
		}
		printf("ENTER DATA:\n");
		scanf("%d",&x);
	}	
}
void cdisplayll( )
{
	if(frontl==0 && rearl==0)
	{
		printf("EMPTY LIST");
	}
	else
	{
		temp=frontl;
		while(temp->next=frontl)
		{
			printf("%d",temp->data);
			temp=temp->data;
		}
		printf("%d",temp->data);
	}
}
void cpeekll()
{
	if(frontl==0 && rearl==0)
	{
		printf("EMPTY LIST");
	}
	else
	{
		printf("%d",frontl->data);
	}
}
void cdequeuell()
{
	temp=frontl;
	if(frontl==0 && rearl==0)
	{
		printf("UNDERFLOW");
	}
	else if(frontl==rearl)
	{
		frontl=rearl=0;
		free(temp);
	}
	else
	{
		frontl=frontl->next;
		rearl->next=frontl;
		printf("DATA DELETED %d",frontl->data);
		free(temp);
	}
}
void queueusingstack()
{
		while(1)
	{
		system("color B");
		printf("\n----------------------------------------------------------------------------------\n\n");
		printf(" **********************    QUEUE OPERATION USING ARRAY BY  ************************\n");
		printf("                             R    A    M    D    E   O                            \n");
		printf("----------------------------------------------------------------------------------\n");
		printf("1.ENQUEUE\n");
		printf("2.DISPLAY\n");
		printf("3.PEEK\n");
		printf("4.DEQUEUE\n");
		printf("0.EXIT\n");
		printf("ENTER YOUR CHOICE: ");
		scanf("%d",&choice);
		{
			switch(choice)
			{
				case 1:
					enqueuestack();
					break;
				case 2:
					displaystack();
					break;
				case 3:
					peek();
					break;
				case 4:
					dequeuestack();
					break;
				case 0:
					exit(0);
					break;
				default:
					printf("PRESS 0 TO EXIT");
					break;
			}
		}
	}
}

void enqueuestack(int x)
{
	printf("HOW MANY DATA YOU WANT TO ENTER: ");
	scanf("%d",&n);
	push1(x);
	count++;	
}
void push1(int data)
	{
	 	if(top1==N-1)
	{
		printf("OVERFLOW"); 	
	} 
	else
	{
		printf("ENTER DATA");
		scanf("%d",&x);
		for(i=0; i<n; i++)
		{
			top1++;
			s1[top1]=data;
		}	
	}
}
void push2(int data)
{
	if(top2==N-1)
	{
		printf("OVERFLOW"); 
	}
	else
	{
		top2++;
		s2[top2]=data;
	}
}
void displaystack()
{
	for(i=0; i<=top1; i++)
	{
		printf("%d",s1[i]);
	}
}
void dequeuestack()
{
	if(top1==-1 && top2==-1)
	{
		printf("EMPTY QUEUE");
	}
	else
	{
		for(i=0; i<count; i++)
		{
			a=pop1();
			push2(a);
		}
		b=pop2();
		printf("%d ",b);
		count--;
		for(i=0; i<count; i++)
		{
			a=pop2();
			push1(a);
		}
	}
}
int pop1()
{
	return s1[top1--];	
}
int pop2()
{
	return s2[top2--];
}

void deusingcirqueue()
{
	while(1)
	{
		system("color B");
		printf("\n----------------------------------------------------------------------------------\n\n");
		printf(" **********************    DE QUEUE OPERATION USING ARRAY BY  ************************\n");
		printf("                             R    A    M    D    E   O                            \n");
		printf("----------------------------------------------------------------------------------\n");
		printf("1.ENQUEUE FRONT\n");
		printf("2.ENQUEUE REAR\n");
		printf("3.DISPLAY\n");
		printf("4.DEQUEUE FRONT\n");
		printf("5.DEQUEUE REAR\n");
		printf("6.GET FRONT\n");
		printf("7.GET REAR\n");
		printf("0.EXIT\n");
		printf("ENTER YOUR CHOICE: ");
		scanf("%d",&choice);
		{
			switch(choice)
			{
				case 1:
					enqueuefront();
					break;
				case 2:
					enqueuerear();
					break;
				case 3:
					ddisplay();
					break;
				case 4:
					dequeuefront();
					break;
				case 5:
					dequeuerear();
					break;
				case 6:
					getfront();
					break;
				case 7:
					getrear();
					break;
				case 0:
					exit(0);
					break;
				default:
					printf("PRESS 0 TO EXIT");
					break;
			}
		}
	}
}

void enqueuefront(int x)
{
	if((front==0 && rear==0) || (front==rear+1))
	{
		printf("QUEUE IF FULL");
	}
	printf("HOW MANY DATA YOU WANT TO ENTER: ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		if(front==-1 && rear==-1)
		{
			front=rear=0;
			dequeue[front]=x;
		}
		else if(front==0)
		{
			front=N-1;
			dequeue[front]=x;
		}
		else
		{
			front--;
			dequeue[front]=x;
		}
	}
}
void enqueuerear()
{
	if((front==0 && rear==0) || (front==rear+1))
	{
		printf("QUEUE IF FULL");
	}
	else if(front==-1 && rear==-1)
	{
		front=rear=0;
		dequeue[rear]=x;
	}
	else if(rear=N-1)
	{
		rear=0;
		dequeue[rear]=x;
	}
	else
	{
		rear++;
		dequeue[rear]=x;
	}
}
void ddisplay()
{
	while(i!=rear)
	{
		printf("%d",dequeue[i]);
		i=(i+1)%N;
	}
	printf("%d",dequeue[rear]);
}
void dequeuefront()
{
	if(front==-1 && rear==-1)
	{
		printf("EMPTY QUEUE");
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else if(front==N-1)
	{
		printf("%d ",dequeue[front]);
		front=0;
	}
	else
	{
		printf("%d",dequeue[front]);
		front++;
	}
}
void dequeuerear()
{
	if(front==-1 && rear==-1)
	{
		printf("EMPTY QUEUE");
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else if(rear==0)
	{
		printf("%d ",dequeue[rear]);
		rear=N-1;
	}
	else
	{
		printf("%d",dequeue[rear]);
		rear--;
	}
}
void getfront()
{
	if((front==0 && rear==0) || (front==rear+1))
	{
		printf("QUEUE IF FULL");
	}
	printf("%d",dequeue[front]);	
}
void getrear()
{
	if((front==0 && rear==0) || (front==rear+1))
	{
		printf("QUEUE IF FULL");
	}
	printf("%d",dequeue[rear]);	
}
