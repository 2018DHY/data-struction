//
//  graph.h
//  Data struction
//
//  Created by HY D on 2020/4/16.
//  Copyright © 2020 HY D. All rights reserved.
//

#ifndef graph_h
#define graph_h

#include <stdio.h>
typedef int VertexType;
typedef int EdgeType;
  
struct edge
{
    int jj;//边的另一顶点的序号
    EdgeType bertexinfo;//边表结点对象
    struct edge *next;//指向下一条边的指针
    
};
typedef struct edge Edge;

struct vertex
{
    VertexType data;//顶点的数据类型
    Edge *out;//指向边表的指针
};
typedef struct vertex Vertex;

struct graph
{
    Vertex * VertexList;//顶点表
    int NumBertices;//图中顶点个数
    int MaxNumVertices,MaxNumEdges;//途中允许的最大的顶点，边的个数
    int NumEdges;//边的个数
};
typedef struct graph Graph;
#endif /* graph_h */
