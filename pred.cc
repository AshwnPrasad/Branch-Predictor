# include <bits/stdc++.h>

class bimodal_prediction()
{
    public: 
    int m2bimodal;   
    int counter;   //how to extract bits
    int btbsize;
    int btbassoc;



};
/*
class gshare_prediction()
{

};
*/

/*
class hybrid_prediction()
{

};
*/

int bimodal_execute(int m2bimodal, int btbsize, int btbassoc);
int gshare_execute();
int hybrid_execute();


int bimodal_execute(int m2bimodal, int btbsize, int btbassoc)
{
    
}


int main(int c, char** argv)
{
    bimodal_prediction bimodal; //object creation



    string predictiontype;
    string trace;
    ifstream trace_file;
    string each_line;



    predictiontype=argv[1];
    if(predictiontype=="bimodal")
    {
        bimodal.m2bimodal=atoi(argv[2]);
        bimodal.btbsize=atoi(argv[3]);
        bimodal.btbassoc=atoi(argv[4]);
        trace=string(argv[5]);
        bimodal_execute( m2bimodal,  btbsize,  btbassoc);



    }
    /*
    if(predictiontype=="gshare")
    {

    }
    */
    /*
    if(predictiontype=="hybrid")
    {

    }
    */



}