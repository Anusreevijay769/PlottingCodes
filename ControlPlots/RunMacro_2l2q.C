#include "controlplotvars_CHS_2l2q.h"

void RunMacro_2l2q()
{
    gROOT->ProcessLine(".L myControlPlots.C+");

   TString OutPutPath = "/eos/user/r/rasharma/www/HighMassHiggsSearch/ControlPlots/BugFix/";

    // For Electrons
    gROOT->ProcessLine("myControlPlots(\"HZZ2l2q_Cuts.txt\", \"HZZ2l2nu_ELMuSamples13TeV_2024_04_11.txt\", controlplotvars_CHS_2l2q, \"Plots_2l2q_Ele.root\", \"" + OutPutPath +"\" \"Plots_2l2q_Ele\", 0) ");

    // For Muons
    gROOT->ProcessLine("myControlPlots(\"HZZ2l2q_Cuts_Muon.txt\", \"HZZ2l2nu_MuonSamples13TeV_2024_04_11.txt\", controlplotvars_CHS_2l2q, \"Plots_2l2q_Mu.root\", \"" + OutPutPath + "\" \"Plots_2l2q_Mu\", 1) ");
}
