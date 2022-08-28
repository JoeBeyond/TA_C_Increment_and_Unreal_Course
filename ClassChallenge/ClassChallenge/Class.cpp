#include "Class.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	Mammal pantheraOnca, simiaPaniscus, loxodontaAfricana;

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	pantheraOnca.furOrHair = "Fur";
	pantheraOnca.eggType = true;
	pantheraOnca.vertebrate = true;
	pantheraOnca.neoCortex = true;
	pantheraOnca.mammaryGlands = true;
	pantheraOnca.numberOfLimbs = 4;
	pantheraOnca.heartChambers = 4;

	simiaPaniscus.furOrHair = "Hair";
	simiaPaniscus.eggType = true;
	simiaPaniscus.vertebrate = true;
	simiaPaniscus.neoCortex = true;
	simiaPaniscus.mammaryGlands = true;
	simiaPaniscus.numberOfLimbs = 4;
	simiaPaniscus.heartChambers = 4;

	loxodontaAfricana.furOrHair = "Hair";
	loxodontaAfricana.eggType = true;
	loxodontaAfricana.vertebrate = true;
	loxodontaAfricana.neoCortex = true;
	loxodontaAfricana.mammaryGlands = true;
	loxodontaAfricana.numberOfLimbs = 4;
	loxodontaAfricana.heartChambers = 4;

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	cout << '\n';
	cout << ":::Here is a List of Endangered Animals:::" << "\n";

	cout << '\n';
	cout << '\n';
	cout << "[Jaguar] \n";
	cout << "[:<.do:<(^.^)>:ob.>:] \n";
	cout << '\n';

	cout << "FUR OR HAIR: " << pantheraOnca.furOrHair << "\n";
	cout << "AMNIOTIC EGGS: " << pantheraOnca.eggType << " TRUE" << "\n";
	cout << "VERTEBRATE: " << pantheraOnca.vertebrate << " TRUE" << "\n";
	cout << "NEOCORTEX LAYER: " << pantheraOnca.neoCortex << " TRUE" << "\n";
	cout << "SWEAT GLANDS: " << pantheraOnca.mammaryGlands << " TRUE" << "\n";
	cout << "LIMB COUNT: " << pantheraOnca.numberOfLimbs << "\n";
	cout << "HEART CHAMBERS: " << pantheraOnca.heartChambers << "\n";

	cout << '\n';
	cout << '\n';
	cout << "[Spider Monkey] \n";
	cout << "[:<.do:<(^.^)>:ob.>:] \n";
	cout << '\n';

	cout << "FUR OR HAIR: " << simiaPaniscus.furOrHair << "\n";
	cout << "AMNIOTIC EGGS: " << simiaPaniscus.eggType << " TRUE" << "\n";
	cout << "VERTEBRATE: " << simiaPaniscus.vertebrate << " TRUE" << "\n";
	cout << "NEOCORTEX LAYER: " << simiaPaniscus.neoCortex << " TRUE" << "\n";
	cout << "SWEAT GLANDS: " << simiaPaniscus.mammaryGlands << " TRUE" << "\n";
	cout << "LIMB COUNT: " << simiaPaniscus.numberOfLimbs << "\n";
	cout << "HEART CHAMBERS: " << simiaPaniscus.heartChambers << "\n";

	cout << '\n';
	cout << '\n';
	cout << "[African Elephant] \n";
	cout << "[:<.do:<(^.^)>:ob.>:] \n";
	cout << '\n';

	cout << "FUR OR HAIR: " << loxodontaAfricana.furOrHair << "\n";
	cout << "AMNIOTIC EGGS: " << loxodontaAfricana.eggType << " TRUE" << "\n";
	cout << "VERTEBRATE: " << loxodontaAfricana.vertebrate << " TRUE" << "\n";
	cout << "NEOCORTEX LAYER: " << loxodontaAfricana.neoCortex << " TRUE" << "\n";
	cout << "SWEAT GLANDS: " << loxodontaAfricana.mammaryGlands << " TRUE" << "\n";
	cout << "LIMB COUNT: " << loxodontaAfricana.numberOfLimbs << "\n";
	cout << "HEART CHAMBERS: " << loxodontaAfricana.heartChambers << "\n";

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
}
