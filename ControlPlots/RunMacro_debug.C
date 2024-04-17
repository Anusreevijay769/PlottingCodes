// #include "controlplotvars_CHS.h"
#include "controlplotvars_CHS_debug.h"

void RunMacro_debug()
{
    gROOT->ProcessLine(".L myControlPlots.C+");
    TString OutPutPath = "/eos/user/r/rasharma/www/HighMassHiggsSearch/ControlPlots/debug/";

    gROOT->ProcessLine("myControlPlots(\"HZZ2l2nu_Cuts_LowMET_VBF_ControlRegion.txt\", \"HZZ2l2nu_ELMuSamples13TeV_2024_04_11.txt\", controlplotvars_CHS_debug, \"OutDir_VBF_DYWgt_MET60.root\", \"" + OutPutPath + "\"  \"OutDir_VBF_DYWgt_MET60\", 0) ");
}
