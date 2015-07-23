#include <TH1F.h>
#include <THStack.h>

void Comb(){

  TFile *fqcd = new TFile("QCD.root");
  TFile *fsig = new TFile("SIG.root");
  TFile *fttb = new TFile("TTB.root");

  double xcqcd = 25.42*1000; 
  double xcttb = 831.76*1000; 
  double xcsig = 0.0624391*1000;
  
  double lumi = 5.0 ; 
  

  double nt_qcd = xcqcd*lumi; 
  double nt_sig = xcsig*lumi; 
  double nt_ttb = xcttb*lumi; 

  fqcd->cd();
  demo->cd();
  double scf_qcd = nt_qcd/(1.0*Ev0->GetEntries()); 

  TH1F *ak8ptq = ak8pt->Clone();
  TH1F *t31q = ak8t31->Clone();
  TH1F *ak8_phosubfq = ak8_phosubFrac->Clone();  
  TH1F *pm0q = ak8_prunnedM0->Clone(); 
  TH1F *pm1q = ak8_prunnedM1->Clone(); 
  TH1F *pm2q = ak8_prunnedM2->Clone(); 
  TH1F *pm3q = ak8_prunnedM3->Clone(); 
  TH1F *pm4q = ak8_prunnedM4->Clone(); 
  TH1F *pm5q = ak8_prunnedM5->Clone(); 
 

 fttb->cd();
  demo->cd();
  double scf_ttb = nt_ttb/(1.0*Ev0->GetEntries()); 

  TH1F *ak8ptt = ak8pt->Clone();
  TH1F *t31t = ak8t31->Clone();
  TH1F *ak8_phosubft = ak8_phosubFrac->Clone();  
  TH1F *pm0t = ak8_prunnedM0->Clone(); 
  TH1F *pm1t = ak8_prunnedM1->Clone(); 
  TH1F *pm2t = ak8_prunnedM2->Clone(); 
  TH1F *pm3t = ak8_prunnedM3->Clone(); 
  TH1F *pm4t = ak8_prunnedM4->Clone(); 
  TH1F *pm5t = ak8_prunnedM5->Clone(); 


  fsig->cd();
  demo->cd();
  double scf_sig = nt_sig/(1.0*Ev0->GetEntries()); 

  TH1F *ak8pts = ak8pt->Clone();
  TH1F *t31s = ak8t31->Clone();
  TH1F *ak8_phosubfs = ak8_phosubFrac->Clone();  
  TH1F *pm0s = ak8_prunnedM0->Clone(); 
  TH1F *pm1s = ak8_prunnedM1->Clone(); 
  TH1F *pm2s = ak8_prunnedM2->Clone(); 
  TH1F *pm3s = ak8_prunnedM3->Clone(); 
  TH1F *pm4s = ak8_prunnedM4->Clone(); 
  TH1F *pm5s = ak8_prunnedM5->Clone(); 


  //Scaling all the historgrams: 
  ak8pts->Scale(scf_sig);
  t31s->Scale(scf_sig);
  ak8_phosubfs->Scale(scf_sig);
  pm0s->Scale(scf_sig);
  pm1s->Scale(scf_sig);
  pm2s->Scale(scf_sig);
  pm3s->Scale(scf_sig);
  pm4s->Scale(scf_sig);
  pm5s->Scale(scf_sig);
   
  ak8pts->SetFillColor(kRed);
  t31s->SetFillColor(kRed);
  ak8_phosubfs->SetFillColor(kRed);
  pm0s->SetFillColor(kRed);
  pm1s->SetFillColor(kRed);
  pm2s->SetFillColor(kRed);
  pm3s->SetFillColor(kRed);
  pm4s->SetFillColor(kRed);
  pm5s->SetFillColor(kRed);

  
  ak8pts->SetLineColor(kRed);
  t31s->SetLineColor(kRed);
  ak8_phosubfs->SetLineColor(kRed);
  pm0s->SetLineColor(kRed);
  pm1s->SetLineColor(kRed);
  pm2s->SetLineColor(kRed);
  pm3s->SetLineColor(kRed);
  pm4s->SetLineColor(kRed);
  pm5s->SetLineColor(kRed);





  ak8ptq->Scale(scf_qcd);
  t31q->Scale(scf_qcd);
  ak8_phosubfq->Scale(scf_qcd);
  pm0q->Scale(scf_qcd);
  pm1q->Scale(scf_qcd);
  pm2q->Scale(scf_qcd);
  pm3q->Scale(scf_qcd);
  pm4q->Scale(scf_qcd);
  pm5q->Scale(scf_qcd);

  
  ak8ptq->SetFillColor(kGray+3);
  t31q->SetFillColor(kGray+3);
  ak8_phosubfq->SetFillColor(kGray+3);
  pm0q->SetFillColor(kGray+3);
  pm1q->SetFillColor(kGray+3);
  pm2q->SetFillColor(kGray+3);
  pm3q->SetFillColor(kGray+3);
  pm4q->SetFillColor(kGray+3);
  pm5q->SetFillColor(kGray+3);


 
  ak8ptt->Scale(scf_ttb);
  t31t->Scale(scf_ttb);
  ak8_phosubft->Scale(scf_ttb);
  pm0t->Scale(scf_ttb);
  pm1t->Scale(scf_ttb);
  pm2t->Scale(scf_ttb);
  pm3t->Scale(scf_ttb);
  pm4t->Scale(scf_ttb);
  pm5t->Scale(scf_ttb);

  
  ak8ptt->SetFillColor(kMagenta);
  t31t->SetFillColor(kMagenta);
  ak8_phosubft->SetFillColor(kMagenta);
  pm0t->SetFillColor(kMagenta);
  pm1t->SetFillColor(kMagenta);
  pm2t->SetFillColor(kMagenta);
  pm3t->SetFillColor(kMagenta);
  pm4t->SetFillColor(kMagenta);
  pm5t->SetFillColor(kMagenta);



  
  THStack *hpt     = new THStack("hpt","JetsPt");
  //hpt->Add(ak8ptq);
  //hpt->Add(ak8ptt);
  hpt->Add(ak8pts);


  THStack *ht31    = new THStack("ht31","JetsPt");
  // ht31->Add(t31q);
  //ht31->Add(t31t);
  ht31->Add(t31s);

  THStack *hphos   = new THStack("hphos","JetsPt");
  //hphos->Add(ak8_phosubfq);
  //hphos->Add(ak8_phosubft);
  hphos->Add(ak8_phosubfs);
  
  THStack *hhaspho = new THStack("hhaspho","JetsPt");
 
  THStack *hm0 = new THStack("hm0","JetsPt");
  //hm0->Add(pm0q);
  //hm0->Add(pm0t);
  hm0->Add(pm0s);
  
  THStack *hm1 = new THStack("hm1","JetsPt");
  //hm1->Add(pm1q);
  //hm1->Add(pm1t);
  hm1->Add(pm1s);
 
  THStack *hm2 = new THStack("hm2","JetsPt");
  //hm2->Add(pm2q);
  //hm2->Add(pm2t);
  hm2->Add(pm2s);

  
  THStack *hm3 = new THStack("hm3","JetsPt");
  //hm3->Add(pm3q);
  //hm3->Add(pm3t);
  hm3->Add(pm3s);

  THStack *hm4 = new THStack("hm4","JetsPt");
  //hm4->Add(pm4q);
  //hm4->Add(pm4t);
  hm4->Add(pm4s);

  THStack *hm5 = new THStack("hm5","JetsPt");
  //hm5->Add(pm5q);
  //hm5->Add(pm5t);
  hm5->Add(pm5s);



  
 


  TCanvas *c1 = new TCanvas("c1","step1",600,600);
  c1->Divide(2,1); 
  c1->cd(1);
  hpt->Draw();
  
  c1->cd(2);
  hm1->Draw();
  c1->SaveAs("ptcut.png");
  
  TCanvas *c2 = new TCanvas("c2","step2",600,600);
  c2->Divide(2,1); 
  c2->cd(1);
  ht31->Draw();
  
  c2->cd(2);
  hm2->Draw();
  c2->SaveAs("ht31.png");
  
  /*  
  TCanvas *c3 = new TCanvas("c3","step2",600,600);
  c3->Divide(2,1); 
  c3->cd(1);
  hhasphos->Draw();
  
  c3->cd(2);
  hm3->Draw();
  c3->SaveAs("hasphos.png");
  */
  
  TCanvas *c4 = new TCanvas("c4","step2",600,600);
  c4->Divide(2,1); 
  c4->cd(1);
  hphos->Draw();
  
  c4->cd(2);
  hm4->Draw();
  c4->SaveAs("phos.png");
  
  


}
