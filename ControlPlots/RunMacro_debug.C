// #include "controlplotvars_CHS.h"
#include "controlplotvars_CHS_debug.h"

void RunMacro_debug()
{
    gROOT->ProcessLine(".L myControlPlots.C+");
    TString OutPutPath = "/eos/user/a/avijay/results_controlplot";

    gROOT->ProcessLine("myControlPlots(\"HZZ2l2nu_Cuts_LowMET_VBF_ControlRegion_Muon.txt\", \"HZZ2l2nu_MuonSamples13TeV_DYinclusive_herwig_2024_07_01.txt\", controlplotvars_CHS_debug, \"OutDir_nobtag_VBF_MET100_Muon_drellyan_inclusive_herwig.root\", \"" + OutPutPath + "\"  \"OutDir_VBF_MET100_Muon_drellyan_inclusive_herwig\", 0) ");
}
