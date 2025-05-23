// #include "controlplotvars_CHS.h"
//#include "controlplotvars_CHS_debug.h"
#include "controlplotvars_CHS_testing.h"

void RunMacro_debug()
{
    gROOT->ProcessLine(".L myControlPlots.C+");
    TString OutPutPath = "/eos/user/a/avijay/emu_controlplot";

    gROOT->ProcessLine("myControlPlots(\"HZZ2l2nu_Cuts_emuControlRegion_MedBTag_ZeroJet.txt\", \"HZZ2l2nu_ElectronSamples13TeV_for_emu_CR_test.txt\", controlplotvars_CHS_testing, \"test.root\", \"" + OutPutPath + "\"  \"debugging\", 0) ");
}
