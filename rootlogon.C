{
//this will load the class "ESpec_Fit_Err".
//with single '+': if this class is modified, the root will compiled this class automatically.
//with two '+': regardless of modification, the root will compile this class automatically.
//without '+': the root will load the library of this class, and never compile it.
  gROOT->ProcessLine(".L ESpec_Fit_Err.cpp+");
}
