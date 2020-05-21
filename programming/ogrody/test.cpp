#include "source.cpp"

#include <iostream>
using namespace std;

int main()
{

    {
        GARDEN_CLASS* g = new GARDEN_CLASS();
        g->plantWood();
        g->growthGarden();
        g->growthGarden();
        g->growthGarden();
        g->plantWood();
        g->growthGarden();
        g->growthGarden();
        g->growthGarden();
        g->plantWood();
        g->growthGarden();
        g->growthGarden();
        g->growthGarden();
        g->extractWood(1);
        g->growthGarden();
        g->growthGarden();
        g->growthGarden();
        g->plantWood();
        g->growthGarden();
        g->growthGarden();
        g->growthGarden();
        g->plantWood();
        g->growthGarden();
        g->growthGarden();
        g->growthGarden();
        g->plantWood();
        g->growthGarden();
        g->growthGarden();
        g->growthGarden();
        g->plantWood();
        g->growthGarden();
        g->growthGarden();
        g->growthGarden();
        g->extractWood(1);
        g->growthGarden();
        g->growthGarden();
        g->growthGarden();
        g->plantWood();
        g->growthGarden();
        g->growthGarden();
        g->growthGarden();

        cout << g->getWoodsTotal() << endl;
        cout << g->getBranchesTotal() << endl;
        cout << g->getFruitsTotal() << endl;
        cout << g->getWeightsTotal() << endl;

        delete g;
    }

    {
        GARDEN_CLASS garden = GARDEN_CLASS();
        garden.plantWood();
        garden.plantWood();
        garden.plantWood();
        garden.plantWood();
        garden.plantWood();
        garden.plantWood();
        garden.plantWood();
        garden.extractWood(0);
        garden.extractWood(1);
        garden.extractWood(2);
        garden.extractWood(3);
        garden.extractWood(4);
        garden.extractWood(5);
        garden.extractWood(6);
        garden.plantWood();
        garden.plantWood();
        garden.plantWood();
        garden.plantWood();
        garden.plantWood();
        garden.plantWood();
        garden.plantWood();
        garden.extractWood(1);
        garden.extractWood(3);
        garden.extractWood(5);
        garden.plantWood();
        garden.plantWood();
        garden.plantWood();
        garden.extractWood(0);
        garden.extractWood(1);
        garden.extractWood(2);
        garden.extractWood(3);
        garden.extractWood(4);
        garden.extractWood(5);
        garden.extractWood(6);
        garden.extractWood(6);

        garden.plantWood();

        garden.extractWood(0);

        garden.plantWood();

        garden.plantWood();

        garden.extractWood(0);

        garden.plantWood();

        garden.extractWood(1);

        garden.plantWood();

        cout << garden.getWoodsTotal() << endl;
    }

    {
        GARDEN_CLASS g = GARDEN_CLASS();

        g.plantWood();
        g.growthGarden();
        g.growthGarden();
        g.growthGarden();
        g.growthGarden();
        g.growthGarden();
        g.growthGarden();
        g.growthGarden();
        g.growthGarden();
        g.growthGarden();

        WOOD_CLASS* w0 = g.getWoodPointer(0);
        BRANCH_CLASS* a1 = w0->getBranchPointer(6); //3, 6, 9

        w0->cloneBranch(a1);

        a1->growthBranch();
        a1->growthBranch();
        a1->growthBranch();

        BRANCH_CLASS* b1 = w0->getBranchPointer(3);
        BRANCH_CLASS* b2 = w0->getBranchPointer(6);
        BRANCH_CLASS* b3 = w0->getBranchPointer(9);

        w0->cloneBranch(b1); //a1, b1, b2, b3

        BRANCH_CLASS* c1 = w0->getBranchPointer(9); //3, 6, 9

        c1->growthBranch(); //a1, b1, b2, b3, (c1)
        c1->growthBranch();

        g.plantWood();
        WOOD_CLASS* x0 = g.getWoodPointer(0); //0, 1

        WOOD_CLASS* x1 = g.getWoodPointer(0); //0, 1
        BRANCH_CLASS* d1 = x1->getBranchPointer(3);

        WOOD_CLASS* y0 = g.getWoodPointer(1); //0, 1
        y0->cloneBranch(d1); //a, b, c, (d)

        y0->growthWood();
        y0->growthWood();

        y0->cloneBranch(d1); //a, b, c

        w0->growthWood();
        w0->growthWood();
        w0->growthWood();

        w0->cloneBranch(b1);

        w0->growthWood();
        w0->growthWood();
        w0->growthWood();
        w0->growthWood();
        w0->growthWood();
        w0->growthWood();
        w0->growthWood();
        w0->growthWood();
        w0->growthWood();

        w0->cloneBranch(w0->getBranchPointer(18));

        w0->getBranchPointer(9);
        w0->getBranchPointer(6);
        w0->getBranchPointer(9);

        w0->getBranchPointer(12);
    }

    {
        GARDEN_CLASS jebacogrody = GARDEN_CLASS();
        jebacogrody.plantWood();
        jebacogrody.growthGarden();
        jebacogrody.growthGarden();
        jebacogrody.growthGarden();
        jebacogrody.growthGarden();
        jebacogrody.growthGarden();
        jebacogrody.growthGarden();
        jebacogrody.growthGarden();
        jebacogrody.growthGarden();
        jebacogrody.growthGarden();
        WOOD_CLASS* kek = jebacogrody.getWoodPointer(0);
        BRANCH_CLASS* kek2 = kek->getBranchPointer(3);
        kek->cloneBranch(kek2);
        kek2 = kek->getBranchPointer(6);
        kek->cloneBranch(kek2);
        jebacogrody.plantWood();
        kek = jebacogrody.getWoodPointer(1);
        kek2 = kek->getBranchPointer(6);
        kek->cloneBranch(kek2);
        kek->growthWood();
        kek->growthWood();
        kek->cloneBranch(kek2);
        kek->growthWood();
        kek->growthWood();
        kek->growthWood();
        kek->cloneBranch(kek2);
        kek->growthWood();
        kek->growthWood();
        kek->growthWood();
        kek->growthWood();
        kek->growthWood();
        kek->growthWood();
        kek->growthWood();
        kek->growthWood();
        kek->growthWood();
        kek->cloneBranch(kek2);
    }

    {
        WOOD_CLASS wood = WOOD_CLASS();

        wood.growthWood();
        wood.growthWood();
        wood.growthWood();
        wood.growthWood();
        wood.growthWood();
        wood.growthWood();
        wood.growthWood();
        wood.growthWood();
        wood.growthWood();
        wood.growthWood();
        wood.growthWood();
        wood.growthWood();
        wood.getBranchPointer(6)->fadeBranch();
        wood.getBranchPointer(6)->fadeBranch();
        wood.getBranchPointer(6)->fadeBranch();
        wood.getBranchPointer(6)->fadeBranch();
        wood.getBranchPointer(6)->fadeBranch();
        wood.getBranchPointer(6)->fadeBranch();
        // Display
        BRANCH_CLASS branch = BRANCH_CLASS();
        branch.growthBranch();
        branch.growthBranch();
        branch.growthBranch();
        branch.growthBranch();
        branch.growthBranch();
        branch.growthBranch();
        wood.cloneBranch(wood.getBranchPointer(3));
        wood.cloneBranch(&branch);
    }

    {
        Garden g;
        g.plantWood();
        g.plantWood();
        g.plantWood();
        g.plantWood();
        g.extractWood(0);
        g.plantWood();
        g.extractWood(0);
        g.plantWood();
        g.plantWood();
        g.extractWood(0);
        g.plantWood();
        g.plantWood();
        g.extractWood(0);
    }

    {
        Garden g;
        g.plantWood();
        g.growthGarden();
        g.growthGarden();
        g.growthGarden();
        g.plantWood();
        g.growthGarden();
        g.growthGarden();
        g.growthGarden();
        g.cloneWood(0);
        g.extractWood(2);
        g.cloneWood(0);
        g.extractWood(3);
        g.extractWood(4);
        g.growthGarden();
        g.growthGarden();
        g.growthGarden();
        g.cloneWood(0);
        g.cloneWood(0);
        g.cloneWood(0);
        std::cout << g.getWoodPointer(0) << endl;
        std::cout << g.getWoodPointer(1) << endl;
        std::cout << g.getWoodPointer(2) << endl;
    }

    return 0;
}

// vim: fen fdl=1
