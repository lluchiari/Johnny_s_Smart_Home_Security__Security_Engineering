#include <iostream>
#include <string>
#include <unistd.h>
#include <include/rsa.hh>
#include <include/InfInt.h>
#include <include/utils.hh>
#include <include/millerRabin.hh>

int main(void) {
//    InfInt p = "48851171585780512151872007066472568695045543717924031431249006254046862338909894217562808709546250056289399470894742242014198835030971020078279856090415247";
//    InfInt q = "17156034090577232334004270995267972777289456282615237656675311020498416361101565288066643474796857699447787935485481067506985762542608378284942492718479329";
    //InfInt pq = "30849821653687123463303337813366340344631999834490732265076505139386759060955395380528245195629759344443748279939181018527300477332078364394207345648412271";
//	InfInt p = "18532395500947174450709383384936679868383424444311405679463280782405796233163977";
//	InfInt q = "39688644836832882526173831577536117815818454437810437210221644553381995813014959";

//	InfInt p = "154725368117940698788029053217798887175214759640744378541226187572025414018010181004439221967045836431399408128455038077191873040800659709605935985084899530753233413028684685152782225472103307582636553459294347054889505097412841939917674271786860290832603626651911507603833436210130113055877637427181462712487";
//	InfInt q = "119066337892944497659274447260782976472330933532973728367702305819889080235208144711826032422469638636165988175365563491392888258760951411989700747304780091452449377384804618419099627425891439127996909654253632370887891785795670014023990698293616870256764888928945330566936192067895773774570307726662717965503";

	RSA test(11, 3);
	test.generateKey();
//	std::string message = "Eu tinha uma galinha que se chamava Mary Lu.";
	std::string message = "A";
	InfInt *cryptogram;
	cryptogram = test.encryption(message);

//	std::cout << "Message: "<< message << std::endl << "Cryptogram: " << cryptogram->toString() << std::endl;
	std::string nMessage;
	test.decryption(nMessage, cryptogram);
	std::cout << "Message decrypted: " << nMessage << std::endl;
	free (cryptogram);
    return 0;
}
