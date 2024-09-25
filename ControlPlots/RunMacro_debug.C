// #include "controlplotvars_CHS.h"
#include "controlplotvars_CHS_debug.h"

void RunMacro_debug()
{
    gROOT->ProcessLine(".L myControlPlots.C+");
    TString OutPutPath = "/eos/user/a/avijay/results_controlplot";

    gROOT->ProcessLine("myControlPlots(\"HZZ2l2nu_Cuts_LowMETControlRegion_MedBTag_NoVBF_ZEROJet.txt\", \"HZZ2l2nu_ElectronSamples13TeV_2024_06_27.txt\", controlplotvars_CHS_debug, \"zerojet_type1_ele.root\", \"" + OutPutPath + "\"  \"zerojet_type2_mtzz_ele\", 0) ");
}
