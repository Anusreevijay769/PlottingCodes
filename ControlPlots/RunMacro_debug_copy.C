// #include "controlplotvars_CHS.h"
#include "controlplotvars_CHS_debug.h"

void RunMacro_debug_copy()
{
    gROOT->ProcessLine(".L myControlPlots.C+");
    TString OutPutPath = "/eos/user/a/avijay/results_controlplot";

    gROOT->ProcessLine("myControlPlots(\"HZZ2l2nu_Cuts_LowMETControlRegion_MedBTag_ZeroJet.txt\", \"HZZ2l2nu_ElectronSamples13TeV_for_emu_CR.txt\", controlplotvars_CHS_debug, \"emuCR_0jet_electron.root\", \"" + OutPutPath + "\"  \"test_with_lowmet_0jet_electron\", 0) ");
}
