{
//this will load the class "ESpec_Fit_Err".
//with single '+', it means that if this class is modified, then the root will compiled this class automatically.
//with two '+', it means that regardless of modificationroot will compiled this class automatically.
  gROOT->ProcessLine(".L ESpec_Fit_Err.cpp+");
}
