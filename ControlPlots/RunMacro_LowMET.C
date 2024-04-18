// #include "controlplotvars_CHS.h"
#include "controlplotvars_CHS_VBF.h"

void RunMacro_LowMET()
{
    gROOT->ProcessLine(".L myControlPlots.C+");
    TString OutPutPath = "/eos/user/r/rasharma/www/HighMassHiggsSearch/ControlPlots/DrellYanFix/";

    // TString OutPutPath = "/eos/user/r/rasharma/www/HighMassHiggsSearch/ControlPlots/BugFix/";

    // For Electrons
    // gROOT->ProcessLine("myControlPlots(\"HZZ2l2nu_Cuts_DrellYan.txt\", \"HZZ2l2nu_ELMuSamples13TeV_2024_04_11.txt\", controlplotvars_CHS, \"Met_LessThan30_Ele.root\", \"Met_LessThan30_Ele\", 0) ");
    // gROOT->ProcessLine("myControlPlots(\"HZZ2l2nu_Cuts_LowMETControlRegion.txt\", \"HZZ2l2nu_ELMuSamples13TeV_2024_04_11.txt\", controlplotvars_CHS, \"OutDir_LowMet_MedBTag.root\", \"OutDir_LowMet_MedBTag\", 0) ");

    // gROOT->ProcessLine("myControlPlots(\"HZZ2l2nu_Cuts_LowMETControlRegion_MedBTag_ZeroJet.txt\", \"HZZ2l2nu_ELMuSamples13TeV_2024_04_11.txt\", controlplotvars_CHS, \"OutDir_LowMet_MedBTag_ZeroJet.root\", \"OutDir_LowMet_MedBTag_ZeroJet\", 0) ");

    // gROOT->ProcessLine("myControlPlots(\"HZZ2l2nu_Cuts_LowMETControlRegion_MedBTag_1Jet.txt\", \"HZZ2l2nu_ELMuSamples13TeV_2024_04_11.txt\", controlplotvars_CHS, \"OutDir_LowMet_MedBTag_1Jet.root\", \"OutDir_LowMet_MedBTag_1Jet\", 0) ");

    // gROOT->ProcessLine("myControlPlots(\"HZZ2l2nu_Cuts_LowMETControlRegion_AtLeast1BJet.txt\", \"HZZ2l2nu_ELMuSamples13TeV_2024_04_11.txt\", controlplotvars_CHS, \"OutDir_LowMet_AtLeast1TightBJet.root\", \"OutDir_LowMet_AtLeast1TightBJet\", 0) ");

    // gROOT->ProcessLine("myControlPlots(\"HZZ2l2nu_Cuts_LowMETControlRegion_MedBTag_NoVBF_ZEROJet.txt\", \"HZZ2l2nu_ELMuSamples13TeV_2024_04_11.txt\", controlplotvars_CHS, \"OutDir_LowMet_NoVBF_ZeroJet.root\", \"OutDir_LowMet_NoVBF_ZeroJet\", 0) ");

    // gROOT->ProcessLine("myControlPlots(\"HZZ2l2nu_Cuts_LowMETControlRegion_MedBTag_NoVBF_ge1Jet.txt\", \"HZZ2l2nu_ELMuSamples13TeV_2024_04_11.txt\", controlplotvars_CHS, \"OutDir_LowMet_NoVBF_ge1Jet.root\", \"OutDir_LowMet_NoVBF_ge1Jet\", 0) ");

    gROOT->ProcessLine("myControlPlots(\"HZZ2l2nu_Cuts_LowMET_VBF_ControlRegion.txt\", \"HZZ2l2nu_ELMuSamples13TeV_2024_04_11.txt\", controlplotvars_CHS_VBF, \"OutDir_VBF_DYWgt_MET60.root\", \"" + OutPutPath +"\"  \"OutDir_VBF_DYWgt_MET60\", 0) ");

    // For Muons
    gROOT->ProcessLine("myControlPlots(\"HZZ2l2nu_Cuts_LowMET_VBF_ControlRegion_Muon.txt\", \"HZZ2l2nu_MuonSamples13TeV_2024_04_11.txt\", controlplotvars_CHS_VBF, \"OutDir_VBF_Muon_DYWgt_MET60.root\", \"" + OutPutPath +"\"  \"OutDir_VBF_Muon_DYWgt_MET60\", 0) ");

    // gROOT->ProcessLine("myControlPlots(\"HZZ2l2nu_Cuts_LowMETControlRegion_MedBTag_NoVBF_ge1Jet_Muon.txt\", \"HZZ2l2nu_MuonSamples13TeV_2024_04_11.txt\", controlplotvars_CHS, \"OutDir_LowMet_NoVBF_ge1Jet_Muon.root\", \"OutDir_LowMet_NoVBF_ge1Jet_Muon\", 0) ");

    // gROOT->ProcessLine("myControlPlots(\"HZZ2l2nu_Cuts_LowMETControlRegion_MedBTag_NoVBF_ZEROJet_Muon.txt\", \"HZZ2l2nu_MuonSamples13TeV_2024_04_11.txt\", controlplotvars_CHS, \"OutDir_LowMet_NoVBF_ZeroJet_Muon.root\", \"OutDir_LowMet_NoVBF_ZeroJet_Muon\", 0) ");
}
