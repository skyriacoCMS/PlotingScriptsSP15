#include <TH1F.h>
#include <THStack.h>

void NJcom(){

  TFile *fqcd = new TFile("QCD.root");
  TFile *fsig = new TFile("SIG.root");
  TFile *fttb = new TFile("TTB.root");


  gStyle->SetOptStat(0);


  fqcd->cd();
  demo->cd();

  TH1F *Evq = Ev0->Clone();


  fttb->cd();
  demo->cd();

  TH1F *Evt = Ev0->Clone();


  
  fsig->cd();
  demo->cd();

  TH1F *Evs = Ev0->Clone();

  
  Evs->Scale(1./Evs->GetEntries());
  Evt->Scale(1./Evt->GetEntries());
  Evq->Scale(1./Evq->GetEntries());
 
  Evs->SetLineColor(kRed);
  Evq->SetLineColor(kGray+3);
  Evt->SetLineColor(kMagenta);



  TCanvas *c1 = new TCanvas("c1","Nj",600,600);
  c1->cd();
  Evt->Draw();
  Evq->Draw("same");  
  Evs->Draw("same"); 
  Evt->GetXaxis()->SetTitle("Number Of Jets");
  c1->SaveAs("NofJets.png");

}
