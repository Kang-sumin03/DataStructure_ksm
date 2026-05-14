#pragma once
#define MAX_VERTEX 30

//그래프를 인접 행렬로 표현하기 위한 구조체 정의
typedef struct GraphType {
	int n;													// 정점의 개수
	int adjMatrix[MAX_VERTEX][MAX_VERTEX];					// 그래프에 대한 30x30의 2차원 배열
} GraphType;

void createGraph(GraphType* g);
void insertVertex(GraphType* g, int v);
void insertEdge(GraphType* g, int u, int v);
void print_adjMatrix(GraphType* g);