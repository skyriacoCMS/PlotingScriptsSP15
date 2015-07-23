#include <TH1F.h>
#include <THStack.h>

void BINcomb(){

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
  TH1F *njt3q = NJT3->Clone();
  TH1F *njl3q = NJL3->Clone();
  TH1F *njt4q = NJT4->Clone();
  TH1F *njl4q = NJL4->Clone();
  TH1F *htaq = HTa->Clone();
  TH1F *ht3q = HT3->Clone();
  TH1F *ht4q = HT4->Clone();
  TH1F *ht4l1q = HT4L1->Clone();
  TH1F *ht4l2q = HT4L2->Clone();
  TH1F *ht4t1q = HT4T1->Clone();
  TH1F *ht4t2q = HT4T2->Clone();
  TH1F *ht3l1q = HT3L1->Clone();
  TH1F *ht3l2q = HT3L2->Clone();
  TH1F *ht3t1q = HT3T1->Clone();
  TH1F *ht3t2q = HT3T2->Clone();
  
  TH1F *Thotmassq = T2jet_4evmasspruned->Clone();
  TH1F *Lhotmassq = L3jet_4evmasspruned->Clone();
 

  fttb->cd();
  demo->cd();
  double scf_ttb = nt_ttb/(1.0*Ev0->GetEntries()); 



  TH1F *Thotmasst = T2jet_4evmasspruned->Clone();
  TH1F *Lhotmasst = L3jet_4evmasspruned->Clone();
 
 
  TH1F *ak8ptt = ak8pt->Clone();
  TH1F *t31t = ak8t31->Clone();
  TH1F *ak8_phosubft = ak8_phosubFrac->Clone();  
  TH1F *pm0t = ak8_prunnedM0->Clone(); 
  TH1F *pm1t = ak8_prunnedM1->Clone(); 
  TH1F *pm2t = ak8_prunnedM2->Clone(); 
  TH1F *pm3t = ak8_prunnedM3->Clone(); 
  TH1F *pm4t = ak8_prunnedM4->Clone(); 
  TH1F *pm5t = ak8_prunnedM5->Clone(); 
  TH1F *njt3t = NJT3->Clone();
  TH1F *njl3t = NJL3->Clone();
  TH1F *njt4t = NJT4->Clone();
  TH1F *njl4t = NJL4->Clone();
  TH1F *htat = HTa->Clone();
  TH1F *ht3t = HT3->Clone();
  TH1F *ht4t = HT4->Clone();
  TH1F *ht4l1t = HT4L1->Clone();
  TH1F *ht4l2t = HT4L2->Clone();
  TH1F *ht4t1t = HT4T1->Clone();
  TH1F *ht4t2t = HT4T2->Clone();
  TH1F *ht3l1t = HT3L1->Clone();
  TH1F *ht3l2t = HT3L2->Clone();
  TH1F *ht3t1t = HT3T1->Clone();
  TH1F *ht3t2t = HT3T2->Clone();


  fsig->cd();
  demo->cd();
  double scf_sig = nt_sig/(1.0*Ev0->GetEntries()); 

  TH1F *Thotmasss = T2jet_4evmasspruned->Clone();
  TH1F *Lhotmasss = L3jet_4evmasspruned->Clone();
 

  TH1F *ak8pts = ak8pt->Clone();
  TH1F *t31s = ak8t31->Clone();
  TH1F *ak8_phosubfs = ak8_phosubFrac->Clone();  
  TH1F *pm0s = ak8_prunnedM0->Clone(); 
  TH1F *pm1s = ak8_prunnedM1->Clone(); 
  TH1F *pm2s = ak8_prunnedM2->Clone(); 
  TH1F *pm3s = ak8_prunnedM3->Clone(); 
  TH1F *pm4s = ak8_prunnedM4->Clone(); 
  TH1F *pm5s = ak8_prunnedM5->Clone(); 
  TH1F *njt3s = NJT3->Clone();
  TH1F *njl3s = NJL3->Clone();
  TH1F *njt4s = NJT4->Clone();
  TH1F *njl4s = NJL4->Clone();
  TH1F *htas = HTa->Clone();
  TH1F *ht3s = HT3->Clone();
  TH1F *ht4s = HT4->Clone();
  TH1F *ht4l1s = HT4L1->Clone();
  TH1F *ht4l2s = HT4L2->Clone();
  TH1F *ht4t1s = HT4T1->Clone();
  TH1F *ht4t2s = HT4T2->Clone();
  TH1F *ht3l1s = HT3L1->Clone();
  TH1F *ht3l2s = HT3L2->Clone();
  TH1F *ht3t1s = HT3T1->Clone();
  TH1F *ht3t2s = HT3T2->Clone();


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
  njt3s->Scale(scf_sig);
  njl3s->Scale(scf_sig);
  njt4s->Scale(scf_sig);
  njl4s->Scale(scf_sig);
  htas->Scale(scf_sig);
  ht3s->Scale(scf_sig);
  ht4s->Scale(scf_sig);
  ht4l1s->Scale(scf_sig);
  ht4l2s->Scale(scf_sig);
  ht4t1s->Scale(scf_sig);
  ht4t2s->Scale(scf_sig);
  ht3l1s->Scale(scf_sig);
  ht3l2s->Scale(scf_sig);
  ht3t1s->Scale(scf_sig);
  ht3t2s->Scale(scf_sig);
  Thotmasss->Scale(scf_sig);
  Lhotmasss->Scale(scf_sig);




 Thotmasss->SetFillColor(kRed);
 Lhotmasss->SetFillColor(kRed);
  ak8pts->SetFillColor(kRed);
  t31s->SetFillColor(kRed);

  
  ak8_phosubfs->SetFillColor(kRed);
  pm0s->SetFillColor(kRed);
  pm1s->SetFillColor(kRed);
  pm2s->SetFillColor(kRed);
  pm3s->SetFillColor(kRed);
  pm4s->SetFillColor(kRed);
  pm5s->SetFillColor(kRed);
  njt3s->SetFillColor(kRed);
  njl3s->SetFillColor(kRed);
  njt4s->SetFillColor(kRed);
  njl4s->SetFillColor(kRed);
  htas->SetFillColor(kRed);
  ht3s->SetFillColor(kRed);
  ht4s->SetFillColor(kRed);
  ht4l1s->SetFillColor(kRed);
  ht4l2s->SetFillColor(kRed);
  ht4t1s->SetFillColor(kRed);
  ht4t2s->SetFillColor(kRed);
  ht3l1s->SetFillColor(kRed);
  ht3l2s->SetFillColor(kRed);
  ht3t1s->SetFillColor(kRed);
  ht3t2s->SetFillColor(kRed);


  Thotmasss->SetLineColor(kRed);
  Lhotmasss->SetLineColor(kRed);
  
  ak8pts->SetLineColor(kRed);
  t31s->SetLineColor(kRed);
  ak8_phosubfs->SetLineColor(kRed);
  pm0s->SetLineColor(kRed);
  pm1s->SetLineColor(kRed);
  pm2s->SetLineColor(kRed);
  pm3s->SetLineColor(kRed);
  pm4s->SetLineColor(kRed);
  pm5s->SetLineColor(kRed);
  njt3s->SetLineColor(kRed);
  njl3s->SetLineColor(kRed);
  njt4s->SetLineColor(kRed);
  njl4s->SetLineColor(kRed);
  htas->SetLineColor(kRed);
  ht3s->SetLineColor(kRed);
  ht4s->SetLineColor(kRed);
  ht4l1s->SetLineColor(kRed);
  ht4l2s->SetLineColor(kRed);
  ht4t1s->SetLineColor(kRed);
  ht4t2s->SetLineColor(kRed);
  ht3l1s->SetLineColor(kRed);
  ht3l2s->SetLineColor(kRed);
  ht3t1s->SetLineColor(kRed);
  ht3t2s->SetLineColor(kRed);




  ak8ptq->Scale(scf_qcd);
  t31q->Scale(scf_qcd);
  ak8_phosubfq->Scale(scf_qcd);
  pm0q->Scale(scf_qcd);
  pm1q->Scale(scf_qcd);
  pm2q->Scale(scf_qcd);
  pm3q->Scale(scf_qcd);
  pm4q->Scale(scf_qcd);
  pm5q->Scale(scf_qcd);
  njt3q->Scale(scf_qcd);
  njl3q->Scale(scf_qcd);
  njt4q->Scale(scf_qcd);
  njl4q->Scale(scf_qcd);
  htaq->Scale(scf_qcd);
  ht3q->Scale(scf_qcd);
  ht4q->Scale(scf_qcd);
  ht4l1q->Scale(scf_qcd);
  ht4l2q->Scale(scf_qcd);
  ht4t1q->Scale(scf_qcd);
  ht4t2q->Scale(scf_qcd);
  ht3l1q->Scale(scf_qcd);
  ht3l2q->Scale(scf_qcd);
  ht3t1q->Scale(scf_qcd);
  ht3t2q->Scale(scf_qcd);

  Thotmassq->Scale(scf_qcd);
  Lhotmassq->Scale(scf_qcd);

  
  
  Thotmassq->SetFillColor(kGray+3);
  Lhotmassq->SetFillColor(kGray+3);

  ak8ptq->SetFillColor(kGray+3);
  t31q->SetFillColor(kGray+3);
  ak8_phosubfq->SetFillColor(kGray+3);
  pm0q->SetFillColor(kGray+3);
  pm1q->SetFillColor(kGray+3);
  pm2q->SetFillColor(kGray+3);
  pm3q->SetFillColor(kGray+3);
  pm4q->SetFillColor(kGray+3);
  pm5q->SetFillColor(kGray+3);
  njt3q->SetFillColor(kGray+3);
  njl3q->SetFillColor(kGray+3);
  njt4q->SetFillColor(kGray+3);
  njl4q->SetFillColor(kGray+3);
  htaq->SetFillColor(kGray+3);
  ht3q->SetFillColor(kGray+3);
  ht4q->SetFillColor(kGray+3);
  ht4l1q->SetFillColor(kGray+3);
  ht4l2q->SetFillColor(kGray+3);
  ht4t1q->SetFillColor(kGray+3);
  ht4t2q->SetFillColor(kGray+3);
  ht3l1q->SetFillColor(kGray+3);
  ht3l2q->SetFillColor(kGray+3);
  ht3t1q->SetFillColor(kGray+3);
  ht3t2q->SetFillColor(kGray+3);

  
  Thotmassq->SetLineColor(kGray+3);
  Lhotmassq->SetLineColor(kGray+3);

  ak8ptq->SetLineColor(kGray+3);
  t31q->SetLineColor(kGray+3);
  ak8_phosubfq->SetLineColor(kGray+3);
  pm0q->SetLineColor(kGray+3);
  pm1q->SetLineColor(kGray+3);
  pm2q->SetLineColor(kGray+3);
  pm3q->SetLineColor(kGray+3);
  pm4q->SetLineColor(kGray+3);
  pm5q->SetLineColor(kGray+3);
  njt3q->SetLineColor(kGray+3);
  njl3q->SetLineColor(kGray+3);
  njt4q->SetLineColor(kGray+3);
  njl4q->SetLineColor(kGray+3);
  htaq->SetLineColor(kGray+3);
  ht3q->SetLineColor(kGray+3);
  ht4q->SetLineColor(kGray+3);
  ht4l1q->SetLineColor(kGray+3);
  ht4l2q->SetLineColor(kGray+3);
  ht4t1q->SetLineColor(kGray+3);
  ht4t2q->SetLineColor(kGray+3);
  ht3l1q->SetLineColor(kGray+3);
  ht3l2q->SetLineColor(kGray+3);
  ht3t1q->SetLineColor(kGray+3);
  ht3t2q->SetLineColor(kGray+3);



 
  ak8ptt->Scale(scf_ttb);
  t31t->Scale(scf_ttb);
  ak8_phosubft->Scale(scf_ttb);
  pm0t->Scale(scf_ttb);
  pm1t->Scale(scf_ttb);
  pm2t->Scale(scf_ttb);
  pm3t->Scale(scf_ttb);
  pm4t->Scale(scf_ttb);
  pm5t->Scale(scf_ttb);
  njt3t->Scale(scf_ttb);
  njl3t->Scale(scf_ttb);
  njt4t->Scale(scf_ttb);
  njl4t->Scale(scf_ttb);
  htat->Scale(scf_ttb);
  ht3t->Scale(scf_ttb);
  ht4t->Scale(scf_ttb);
  ht4l1t->Scale(scf_ttb);
  ht4l2t->Scale(scf_ttb);
  ht4t1t->Scale(scf_ttb);
  ht4t2t->Scale(scf_ttb);
  ht3l1t->Scale(scf_ttb);
  ht3l2t->Scale(scf_ttb);
  ht3t1t->Scale(scf_ttb);
  ht3t2t->Scale(scf_ttb);


  Thotmasst->Scale(scf_ttb);
  Lhotmasst->Scale(scf_ttb);

  
  Thotmasst->SetFillColor(kMagenta);
  Lhotmasst->SetFillColor(kMagenta);
  
  ak8ptt->SetFillColor(kMagenta);
  t31t->SetFillColor(kMagenta);
  ak8_phosubft->SetFillColor(kMagenta);
  pm0t->SetFillColor(kMagenta);
  pm1t->SetFillColor(kMagenta);
  pm2t->SetFillColor(kMagenta);
  pm3t->SetFillColor(kMagenta);
  pm4t->SetFillColor(kMagenta);
  pm5t->SetFillColor(kMagenta);
  njt3t->SetFillColor(kMagenta);
  njl3t->SetFillColor(kMagenta);
  njt4t->SetFillColor(kMagenta);
  njl4t->SetFillColor(kMagenta);
  htat->SetFillColor(kMagenta);
  ht3t->SetFillColor(kMagenta);
  ht4t->SetFillColor(kMagenta);
  ht4l1t->SetFillColor(kMagenta);
  ht4l2t->SetFillColor(kMagenta);
  ht4t1t->SetFillColor(kMagenta);
  ht4t2t->SetFillColor(kMagenta);
  ht3l1t->SetFillColor(kMagenta);
  ht3l2t->SetFillColor(kMagenta);
  ht3t1t->SetFillColor(kMagenta);
  ht3t2t->SetFillColor(kMagenta);


  Thotmasst->SetLineColor(kMagenta);
  Lhotmasst->SetLineColor(kMagenta);
  
  ak8ptt->SetLineColor(kMagenta);
  t31t->SetLineColor(kMagenta);
  ak8_phosubft->SetLineColor(kMagenta);
  pm0t->SetLineColor(kMagenta);
  pm1t->SetLineColor(kMagenta);
  pm2t->SetLineColor(kMagenta);
  pm3t->SetLineColor(kMagenta);
  pm4t->SetLineColor(kMagenta);
  pm5t->SetLineColor(kMagenta);
  njt3t->SetLineColor(kMagenta);
  njl3t->SetLineColor(kMagenta);
  njt4t->SetLineColor(kMagenta);
  njl4t->SetLineColor(kMagenta);
  htat->SetLineColor(kMagenta);
  ht3t->SetLineColor(kMagenta);
  ht4t->SetLineColor(kMagenta);
  ht4l1t->SetLineColor(kMagenta);
  ht4l2t->SetLineColor(kMagenta);
  ht4t1t->SetLineColor(kMagenta);
  ht4t2t->SetLineColor(kMagenta);
  ht3l1t->SetLineColor(kMagenta);
  ht3l2t->SetLineColor(kMagenta);
  ht3t1t->SetLineColor(kMagenta);
  ht3t2t->SetLineColor(kMagenta);





  
  THStack *hpt     = new THStack("hpt","JetsPt");
  hpt->Add(ak8ptq);
  hpt->Add(ak8ptt);
  hpt->Add(ak8pts);


  THStack *ht31    = new THStack("ht31","JetsPt");
  ht31->Add(t31q);
  ht31->Add(t31t);
  ht31->Add(t31s);

  THStack *hphos   = new THStack("hphos","JetsPt");
  hphos->Add(ak8_phosubfq);
  hphos->Add(ak8_phosubft);
  hphos->Add(ak8_phosubfs);
  
  THStack *hhaspho = new THStack("hhaspho","JetsPt");
  //hhaspho->Add



  THStack *hm0 = new THStack("hm0","JetsPt");
  hm0->Add(pm0q);
  hm0->Add(pm0t);
  hm0->Add(pm0s);
  
  THStack *hm1 = new THStack("hm1","JetsPt");
  hm1->Add(pm1q);
  hm1->Add(pm1t);
  hm1->Add(pm1s);
 
  THStack *hm2 = new THStack("hm2","JetsPt");
  hm2->Add(pm2q);
  hm2->Add(pm2t);
  hm2->Add(pm2s);

  
  THStack *hm3 = new THStack("hm3","JetsPt");
  hm3->Add(pm3q);
  hm3->Add(pm3t);
  hm3->Add(pm3s);

  THStack *hm4 = new THStack("hm4","JetsPt");
  hm4->Add(pm4q);
  hm4->Add(pm4t);
  hm4->Add(pm4s);

  THStack *hm5 = new THStack("hm5","JetsPt");
  hm5->Add(pm5q);
  hm5->Add(pm5t);
  hm5->Add(pm5s);


  //************************


  THStack *nj3t = new THStack("nj3t","3 j Evs tight Jets");
  nj3t->Add(njt3q);
  nj3t->Add(njt3t);
  nj3t->Add(njt3s);

  THStack *nj3l = new THStack("nj3l","3 j Evs loose Jets");
  nj3l->Add(njl3q);
  nj3l->Add(njl3t);
  nj3l->Add(njl3s);

  THStack *nj4t = new THStack("nj4t","4 j Evs tight Jets");
  nj4t->Add(njt4q);
  nj4t->Add(njt4t);
  nj4t->Add(njt4s);

  THStack *nj4l = new THStack("nj4l","4 j Evs loose Jets");
  nj4l->Add(njl4q);
  nj4l->Add(njl4t);
  nj4l->Add(njl4s);

  //Rebinning the mass plots
  Lhotmassq->Rebin(2);
  Lhotmasst->Rebin(2);
  Lhotmasss->Rebin(2);
  Thotmassq->Rebin(2);
  Thotmasst->Rebin(2);
  Thotmasss->Rebin(2);



  THStack *nj4l2m = new THStack("nj4l2m","4 j mass Evs loose Jets");
  nj4l2m->Add(Lhotmassq);
  nj4l2m->Add(Lhotmasst);
  nj4l2m->Add(Lhotmasss);

  THStack *nj4T2m = new THStack("nj4T2m","4 j mass Evs Tight Jets");
  nj4T2m->Add(Thotmassq);
  nj4T2m->Add(Thotmasst);
  nj4T2m->Add(Thotmasss);


  
 


  TCanvas *c1 = new TCanvas("c1","step1",1200,600);
  c1->Divide(2,1); 
  c1->cd(1);
  hpt->Draw();
  hpt->GetXaxis()->SetTitle("Jet Pt GeVc^{-1}");
  
  c1->cd(2);
  hm1->Draw();
  hm1->GetXaxis()->SetTitle("Jet Prunned Mass GeVc^{-2}"); 
  c1->Update();
  c1->SaveAs("ptcut.png");
  
  TCanvas *c2 = new TCanvas("c2","step2",1200,600);
  c2->Divide(2,1); 
  c2->cd(1);
  ht31->Draw();
  ht31->GetXaxis()->SetTitle("#tau_3/#tau_1");

  c2->cd(2);
  hm2->Draw();
  hm2->GetXaxis()->SetTitle("Jet Prunned Mass GeVc^{-2}"); 
   c2->Update();
 
 c2->SaveAs("ht31.png");
  
  /* 
  TCanvas *c3 = new TCanvas("c3","step2",1200,600);
  c3->Divide(2,1); 
  c3->cd(1);
  hhasphos->Draw();
  hhasphos->GetXaxis()->SetTitle("Has Photon Pt > 20 GeVc^{-1}");
  
  c3->cd(2);
  hm3->Draw();
  hm3->GetXaxis()->SetTitle("Jet Prunned Mass GeVc^{-2}"); 
  c3->SaveAs("hasphos.png");
  */
  
  TCanvas *c4 = new TCanvas("c4","step2",1200,600);
  c4->Divide(2,1); 
  c4->cd(1);
  hphos->Draw();
  hphos->GetXaxis()->SetTitle("Pt_{#gamma}/Pt_{subjet}");
  
  c4->cd(2);
  hm4->Draw();
  hm4->GetXaxis()->SetTitle("Jet Prunned Mass GeVc^{-2}"); 
   c4->Update();
 
  c4->SaveAs("phos.png");
  
  
  TCanvas *c5 = new TCanvas("","",1200,800);
  c5->Divide(4,2);
  c5->cd(1);
  
  c5->cd(1);
  c5->cd(1);
  c5->cd(1);
  c5->cd(1);
  c5->cd(1);
  

  c5->SaveAs("HTplots.png");
  
  TCanvas *c6 = new TCanvas("c6","",1000,1000);
  c6->Divide(2,2);
  c6->cd(1)->SetLogy();
  nj3l->Draw();
  nj3l->GetXaxis()->SetTitle("Njets Loose per event"); 

  c6->cd(2)->SetLogy();
  nj3t->Draw();
  nj3t->GetXaxis()->SetTitle("Njets Tight per event"); 


  c6->cd(3)->SetLogy();
  nj4l->Draw();
  nj4l->GetXaxis()->SetTitle("Njets Loose per event"); 
 
 

  c6->cd(4)->SetLogy();
  nj4t->Draw();
  nj4t->GetXaxis()->SetTitle("Njets Tight per event"); 
 
  c6->Update();
  c6->SaveAs("NjTL.png");



  TCanvas *c7 = new TCanvas("c7","",1000,500);
  c7->Divide(2,1);
  c7->cd(1);
  nj4l2m->Draw();
  nj4l2m->GetXaxis()->SetTitle("Jet Prunned Mass GeVc^{-2}");

  c7->cd(2);
  nj4T2m->Draw();
  nj4T2m->GetXaxis()->SetTitle("Jet Prunned Mass GeVc^{-2}");


  c7->SaveAs("PrnM_sel.png");

 
 
  

}
