#include <iostream>
using namespace std;
 main(){
  int previous, current, total_kw, total_riel;
  cout<<"Input Previous kw = ";
  cin>>previous;
  cout<<"Input current kw = ";
  cin>>current;
  cout<<"----------------------";
  
  total_kw = current - previous;

  if(total_kw < 100){
    total_riel = total_kw * 750;
  }
  else if(total_kw <= 200){
    total_riel = total_kw * 1000;
  }
  else{
    total_riel = total_kw * 1250;
  }
  cout<<"Total Riel = "<<total_riel;
  
  //Include VAT : <20m = 0%, >20m & < 100m = 10%, >100m = 15%
  double total_vat = 0;
  if(total_riel<200000){
    total_vat = total_riel + (total_riel * 0 / 100);
  }
  cout<<"Total_vat ="<< total_vat;
}
// Electric Current