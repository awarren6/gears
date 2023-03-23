TChain *t = new TChain("T");
T.Add(Legendsim10.root);
TH1F* h = new ("h", "histtest", 100, 0, 270000000000)
t.Draw("k>>h");
