#include<iostream>
#include<string.h>

int main()
{
	int edge,vertex,i,j;
    

	int ver1, ver2;
	FILE*fi;
	fi=fopen("dothi.txt ","r");
	fscanf(fi,"%d",&vertex); fscanf(fi,"%d",&edge);
	int A[edge][2];
	bool maTranKe[vertex][vertex];
	for(i=0;i<vertex;i++)
		for(j=0;j<vertex;j++)
			maTranKe[i][j]=false;
    for (i=0;i<edge;i++)
    {
    	fscanf(fi,"%d%d",&ver1,&ver2);
    	A[i][0]=ver1; A[i][1]=ver2;
    	maTranKe[ver1][ver2]=true;
		maTranKe[ver2][ver1]=true;
	}
	char* color[]={"", "red", "green", "gray", "orange", "yellow","pink","black","violet","brown",
	"purple","crimson","orchid","greenyellow","turquoise ","snow","grey","bisque","aliceblue","chocolate","  tan "};
	int mau[vertex];
	for ( i=0;i<vertex;i++)
	{
		mau[i]=0;
	}
	for(i=0;i<vertex;i++){
		mau[i]=1;
		for(j=0;j<vertex;j++) {
			if(maTranKe[i][j]==1){
				if(mau[i]==mau[j]){
					mau[i]++;
				}
			}
		}		
	}
	FILE *fo;
	fo=fopen("dothitomau.dot","w");
	fprintf(fo,"graph dothi\n{\n"); 
	for (i=0;i<vertex;i++)
	{
		fprintf(fo,"%d [fillcolor=%s,style=filled];\n",i,color[mau[i]]);
	}
	for (i=0;i<edge;i++)
	{
		fprintf(fo,"\n%d--%d",A[i][0],A[i][1]);
	}
	fprintf(fo,"\n}");
	fclose(fi);
    fclose(fo);  
	return 0;	
}






