#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>

using namespace std;

vector<list<int> > v (50);
vector<bool> expDFS (50,false);
vector<bool> expBFS (50,false);

stack<int> s;
queue<int> q;

void addEdge(int i,int j);
void bfs();
void dfs();
void makeGraph();
void seeAdjacencyLists();


int main(){
	/*
	for(int i=0;i<50;i++){
		list<int> l;
		v.push_back(l);
	}
	*/
	makeGraph();
	s.push(1);
	dfs();
	q.push(1);
	bfs();
	
	
	return 0;
}

void dfs(){
	if(!s.empty()){
		int vertex = s.top();
		s.pop();
		if(expDFS[vertex] != true){
			expDFS[vertex] = true;
			cout<<vertex;
		}
		list<int>::iterator it;
		list<int> l = v[vertex];
		for(it = l.begin();it != l.end(); ++it){
			if (!expDFS[*it] ){
				s.push(*it);
			}
		}
		cout<<"\n";
		dfs();
	}
}

void bfs(){
	if(!q.empty()){
		int vertex = q.front();
		q.pop();
		if(expBFS[vertex] != true){
			expBFS[vertex] = true;
			cout<<vertex;
			cout<<"\n";
		}
		list<int>::iterator it;
		list<int> l = v[vertex];
		for(it = l.begin();it != l.end(); ++it){
			if (!expBFS[*it]){
				//cout<<"\n"<<"expBFS["<<*it<<"]not true";
				q.push(*it);
			}
		}
		bfs();
	}
}

void addEdge(int i,int j){
	v[i].push_back(j);
	v[j].push_back(i);
}

void makeGraph(){
	addEdge(1,2);
	addEdge(1,5);
	addEdge(1,6);
	addEdge(2,6);
	addEdge(5,6);
	addEdge(2,3);
	addEdge(3,4);
	addEdge(4,5);
	addEdge(2,5);
}

void seeAdjacencyLists(){
	for(int i = 1;i<v.size();i++){
		list<int>::iterator it;
		for(it = v[i].begin();it != v[i].end();++it){
			cout<<*it<<"\t";
		}
		cout<<"\n";
	}
}