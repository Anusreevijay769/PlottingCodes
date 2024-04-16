#include <TFile.h>
#include <TTree.h>
#include <TH1D.h>
#include <TBranch.h>

void addWeightBranch(const char *filename = "DY_400to650.root")
{
    // Open the ROOT file
    TFile* file = TFile::Open(filename, "UPDATE");
    if (!file || file->IsZombie()) {
        std::cerr << "Error opening file!" << std::endl;
        return;
    }

    // Get the tree from the file
    TTree* tree = dynamic_cast<TTree*>(file->Get("Events"));
    if (!tree) {
        std::cerr << "Tree not found!" << std::endl;
        file->Close();
        return;
    }

    // Create a variable to hold the weight and the number of jets
    Float_t weight;
    Int_t nJets;
    Bool_t isELE; // Branch name "HZZ2l2qNu_isELE"

    // Create a new branch for the weight
    TBranch* weightBranch = tree->Branch("Weight_nJets_FromDataMC", &weight, "Weight_nJets_FromDataMC/F");

    // Assume there is already a branch named "nJets" which holds the number of jets in each event
    tree->SetBranchAddress("HZZ2l2qNu_nJets", &nJets);
    tree->SetBranchAddress("HZZ2l2qNu_isELE", &isELE);

    // Loop over all entries in the tree
    Long64_t nEntries = tree->GetEntries();
    for (Long64_t i = 0; i < nEntries; ++i) {
        tree->GetEntry(i);

        // if (i>500) break;

        // Assign weights based on the number of jets
        if (isELE) {
            if (nJets == 2) weight = 0.6309039;
            else if (nJets == 3) weight = 0.6622253;
            else if (nJets == 4) weight = 0.7406964;
            else if (nJets == 5) weight = 0.7932729;
            else if (nJets == 6) weight = 0.8128035;
            else if (nJets == 7) weight = 0.9813254;
            else if (nJets == 8) weight = 0.9323355;
            else if (nJets >= 9) weight = 1.610185;
            else weight = 1.0; // Default weight for other cases (e.g., nJets < 2)
        }
        else
        {
            if (nJets == 2) weight = 0.5907087;
            else if (nJets == 3) weight = 0.6477573;
            else if (nJets == 4) weight = 0.6790592;
            else if (nJets == 5) weight = 0.7127956;
            else if (nJets == 6) weight = 0.7098707;
            else if (nJets == 7) weight = 1.038777;
            else if (nJets == 8) weight = 1.039902;
            else if (nJets >= 9) weight = 0.9646039;
            else weight = 1.0; // Default weight for other cases (e.g., nJets < 2)
        }

        // Fill the new branch with the computed weight
        weightBranch->Fill();
    }

    // Write the changes to the file
    tree->Write("", TObject::kOverwrite); // Overwrite the old tree
    file->Close();
}
