#include<iostream>
#include<cstdlib>
#include<stack>
#include<queue>
#include<list>
using namespace std;

class Graph
{
public:
	int V;
	list<int> *array;
	Graph(int V){
		this->V=V;
		array = new list<int>[V];
	}
	
	void addEdge(int src, int dest){
		array[src].push_back(dest);
		array[dest].push_back(src);
	}
	
	void addDirectedEdge(int src, int dest){
		array[src].push_back(dest);
	}
	
	void printGraph(){
		int v;
		for(v=0;v<V;++v){
			cout<<v<<"->";
			list<int>::iterator it = array[v].begin();
			while(it != array[v].end()){
				cout<<*it<<" ";
				++it;
			}
			
			cout<<endl;
		}
	}
	
	
	void dfs(){
		cout<<"The Depth First Search \n";
		bool *explored = new bool[V]();
		for(int i = 0; i < V;i++){
			explored[i] = false;
		} 
		for(int i = 0; i < V ; i++){
			
			if(explored[i] == false){
				stack<int> s;
				s.push(i);
				explored[i] = true;
				while(!s.empty()){
					int vert = s.top();
					s.pop();
						cout<<vert<<"\t";
					list<int>::iterator it = array[vert].begin();
					while(it != array[vert].end()){
						//cout<<"explored["<<temp->dest<<"] = " << explored[temp->dest]<<"\n";
						if(!explored[*it]){
							
							s.push(*it);
							explored[*it] = true;
						}
						++it;
					}
					
				}
				cout<<"\n";	
			}
		}
		cout<<"\n";
	}
	
	
	void dfs2(){
		bool *visited = new bool[V];
		for(int i=0;i<V;i++){
			visited[i] = false;
		}
		stack<int> stack;
		int s = 0;
		visited[s] = true;
		stack.push(s);
		list<int>::iterator i;
		
		while(!stack.empty()){
			s = stack.top();
			cout<<s<<" ";
			stack.pop();
			for(i = array[s].begin();i != array[s].end();++i){
				if(!visited[*i]){
					visited[*i] = true;
					stack.push(*i);
				}
			}
		}
		cout<<"\n";
	}
	
	
	void dfsutil(){
		
	}
	
	
	void bfs(){
		bool *visited = new bool[V];
		for(int i=0;i<V;i++){
			visited[i] = false;
		}
		for(int i =0 ;i<V;i++){
			if(visited[i] == false){
				queue<int> queue;
				int s = i;
				visited[s] = true;
				queue.push(s);
				list<int>::iterator i;
				while(!queue.empty()){
					s = queue.front();
					cout<<s<<" ";
					queue.pop();
					for(i = array[s].begin();i != array[s].end();++i){
						if(!visited[*i]){
							visited[*i] = true;
							queue.push(*i);
						}
					}
				}
				cout<<"\n";
			}
		}
		
	}
	
};

list<int>* createReverseArray(list<int> *array, int size){
	list<int> *array2 = new list<int>[size];
	for(int i = 0;i<size;i++){
		list<int>::iterator it;
		for(it = array[i].begin();it != array[i].end();++it){
			array2[*it].push_back(i);
		}
	}
	return array2;
}

Graph createReverseGraph(Graph g){
	Graph gNew(g.V);
	gNew.array = createReverseArray(g.array,g.V);
	return gNew;
}

void dfs(Graph g, int i, bool visited[], int leader[], int s,int &t,int f[]){
	visited[i] = true;
	leader[i] = s;
	list<int>::iterator it = g.array[i].begin();
	for(it = g.array[i].begin();it != g.array[i].end();++it){
		int a = *it;
		if(!visited[*it]){
			dfs(g,*it, visited, leader, s,t,f);
		}
	}
	f[i] = t++;
}

void printArray(int *f, int size){
	for(int i = 0;i<size;i++){
		cout<<i<<" "<<f[i]<<"\n";
	}
}

int* dfsLoop(Graph g, int f[],bool reverse){
	int t = 0;
	int s;
	int *leader = new int[g.V];
	bool *visited = new bool[g.V];
	int n = g.V;
	for(int i = 0;i<n;i++){
		visited[i] = false;
	}
	
	Graph G = g;
	printArray(f,g.V);
	if(reverse == true){
		G = createReverseGraph(g);
		list<int> *arr = G.array;
		for(int i = 0;i < n; i++){
			G.array[i] = arr[f[i]];
		}
	}
	
	
	
	for(int i = n - 1 ;i >= 0; i--){
		if(!visited[i]){
			s = i;
			dfs(G,i,visited, leader,s,t,f);
		}
	}
	return leader;
}








void kosaraju(Graph g){
	int *f = new int[g.V];
	for(int i = 0;i<g.V;i++){
		f[i] = i;
	}
	dfsLoop(g, f, false);
	int *leader = dfsLoop(g, f, true);
	for(int i=0;i<g.V;i++){
		for(int j = 0 ; j <g.V;j++){
			if(leader[i] == f[j]){
				cout<<j<<" ";
			}
		}
	}
	cout<<"\n";
}



int main(){
	Graph gh(9);
	gh.addDirectedEdge(0,6);
	gh.addDirectedEdge(3,0);
	gh.addDirectedEdge(6,3);
	gh.addDirectedEdge(6,8);
	gh.addDirectedEdge(2,8);
	gh.addDirectedEdge(8,5);
	gh.addDirectedEdge(5,2);
	gh.addDirectedEdge(5,7);
	gh.addDirectedEdge(7,1);
	gh.addDirectedEdge(1,4);
	gh.addDirectedEdge(4,7);
	kosaraju(gh);
	return 0;
}