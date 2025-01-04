// #include <stdio.h>
// #include <string.h>
// #define NUM 100
// #define COLAR 100
// typedef struct Point
// {
// 	int x;
// 	int y;
// }point;
// typedef struct Calor
// {
// 	point date[COLAR];
// 	int count;
// }colar;
// // 输入
// void my_scanf(int (*arr)[NUM],int n,int m,colar *type)
// {
// 	int i=0;
// 	for(i=0;i<n;i++)
// 	{
// 		int j=0;
// 		for(j=0;j<m;j++)
// 		{
// 			scanf("%d",&arr[i][j]);
// 			(type[arr[i][j]].date)[type[arr[i][j]].count].x=j;
// 			(type[arr[i][j]].date)[type[arr[i][j]].count].y=i;
// 			type[arr[i][j]].count++;
// 		}
// 	}
// }
// //计算距离
// int caculate_s(int x1,int y1,int x2,int y2)
// {
// 	return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
// }

// //功能写完//有问题
// int find_max(int (*arr)[NUM],colar *type,int num_colors) 
// {
	
// }
    
// int main()
// {
// 	int arr[NUM][NUM]={0};
// 	int n=0,m=0;
// 	scanf("%d%d ",&n,&m);
// 	colar type[COLAR]={0};
// 	my_scanf(arr,n,m,type);
// 	int max=find_max(arr,type,COLAR);
// 	printf("%d\n",max);
// 	return 0;
// }



#include <stdio.h>
#include <stdlib.h>

#define HASH_SIZE 10007

struct hash_node {
    int color;
    int x_min, y_min_x;
    int x_max, y_max_x;
    int y_min, x_min_y;
    int y_max, x_max_y;
    int count;
    struct hash_node *next;
};

struct hash_table {
    struct hash_node **nodes;
    int size;
};

void hash_init(struct hash_table *ht, int size) {
    ht->size = size;
    ht->nodes = (struct hash_node **)malloc(sizeof(struct hash_node *) * size);
    for(int i = 0; i < size; i++) {
        ht->nodes[i] = NULL;
    }
}

void hash_insert(struct hash_table *ht, int color, int x, int y) {
    int index = color % ht->size;
    struct hash_node *node = ht->nodes[index];
    while(node != NULL) {
        if(node->color == color) {
            if(x < node->x_min) {
                node->x_min = x;
                node->y_min_x = y;
            }
            if(x > node->x_max) {
                node->x_max = x;
                node->y_max_x = y;
            }
            if(y < node->y_min) {
                node->y_min = y;
                node->x_min_y = x;
            }
            if(y > node->y_max) {
                node->y_max = y;
                node->x_max_y = x;
            }
            node->count++;
            return;
        }
        node = node->next;
    }
    node = (struct hash_node *)malloc(sizeof(struct hash_node));
    node->color = color;
    node->x_min = x;
    node->y_min_x = y;
    node->x_max = x;
    node->y_max_x = y;
    node->y_min = y;
    node->x_min_y = x;
    node->y_max = y;
    node->x_max_y = x;
    node->count = 1;
    node->next = ht->nodes[index];
    ht->nodes[index] = node;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    struct hash_table ht;
    hash_init(&ht, HASH_SIZE);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int color;
            scanf("%d", &color);
            hash_insert(&ht, color, i, j);
        }
    }
    int max_distance = 0;
    for(int i = 0; i < ht.size; i++) {
        struct hash_node *node = ht.nodes[i];
        while(node != NULL) {
            if(node->count >= 2) {
                int x1 = node->x_min;
                int y1 = node->y_min_x;
                int x2 = node->x_max;
                int y2 = node->y_max_x;
                int x3 = node->x_min_y;
                int y3 = node->y_min;
                int x4 = node->x_max_y;
                int y4 = node->y_max;
                int d1 = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
                int d2 = (x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1);
                int d3 = (x4 - x1)*(x4 - x1) + (y4 - y1)*(y4 - y1);
                int d4 = (x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3);
                int d5 = (x2 - x4)*(x2 - x4) + (y2 - y4)*(y2 - y4);
                int d6 = (x4 - x3)*(x4 - x3) + (y4 - y3)*(y4 - y3);
                int current_max = d1;
                if(d2 > current_max) current_max = d2;
                if(d3 > current_max) current_max = d3;
                if(d4 > current_max) current_max = d4;
                if(d5 > current_max) current_max = d5;
                if(d6 > current_max) current_max = d6;
                if(current_max > max_distance) max_distance = current_max;
            }
            node = node->next;
        }
    }
    printf("%d\n", max_distance);
    // 释放哈希表内存
    for(int i = 0; i < ht.size; i++) {
        struct hash_node *node = ht.nodes[i];
        while(node != NULL) {
            struct hash_node *next = node->next;
            free(node);
            node = next;
        }
    }
    free(ht.nodes);
    return 0;
}

