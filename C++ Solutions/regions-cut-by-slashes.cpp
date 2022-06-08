// https://leetcode.com/problems/regions-cut-by-slashes

class Solution {
public:
    int par[100000];
    int rank[100000];
    int count=0;
    int find(int x){
        if(par[x]==x){
            return x;
        }
        int temp=find(par[x]);
        par[x]=temp;
        return temp;
    }
    void union1(int x,int y){
        int lx=find(x);
        int ly=find(y);
        // cout<<lx<<" "<<ly<<" "<<x<<" "<<y<<endl;
        if(lx!=ly){
            if(rank[lx]>rank[ly]){
                par[ly]=lx;
            }
            else if(rank[ly]>rank[lx]){
                par[lx]=ly;
            }
            else{
                par[lx]=ly;
                rank[ly]++;
            }
        }
        else{
            count++;
        }
    }
    int regionsBySlashes(vector<string>& grid) {
        int n=grid.size();
        int dots=n+1;
        memset(par,0,sizeof(par));
        memset(rank,1,sizeof(rank));
        count=1;
        for(int i=0;i<dots*dots;i++){
            par[i]=i;
            cout<<par[i];
        }
        for(int i=0;i<dots;i++){
            for(int j=0;j<dots;j++){
                if(i==0 || j==0 || i==dots-1 || j==dots-1){
                    int cellno=i*dots+j;
                    if(cellno!=0){
                        // cout<<cellno;
                        union1(0,cellno);
                    }
                }
            }
        }   
        // cout<<count;
        for(int i=0;i<grid.size();i++){
            string s=grid[i];
            for(int j=0;j<s.size();j++){
                if(s[j]=='/'){
                    int cellno1=(i*dots)+j+1;
                    int cellno2=(i+1)*dots+j;
                    union1(cellno1,cellno2);
                }
                else if(s[j]=='\\'){
                    int cellno1=i*dots+j;
                    int cellno2=(i+1)*dots+(j+1);
                    union1(cellno1,cellno2);
                }
            }
        }
        return count;
    }
};