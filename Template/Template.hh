#ifndef Template_h
#define Template_h 1

#include "TObject.h"
#include "TFile.h"
#include "TH1D.h"
#include "TH2D.h"
#include "iostream"
#include "TMath.h"
#include "TF1.h"
#include "TCanvas.h"
#include "fstream"

using namespace std;
using namespace TMath;

class Template : public TObject
{
public:
  Template();
  ~Template();

  ClassDef(Template,1)
};

#endif
