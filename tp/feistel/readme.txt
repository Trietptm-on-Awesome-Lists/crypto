---------------------------------------------------------------------------
TP s�curit�: attaque d'un algorithme �l�mentaire de chiffrement sym�trique.
---------------------------------------------------------------------------
- OL - RT -

* Compilation du TP: tapper make
  cela produit une archive tp1.zip, � distribuer aux �tudiants.
	
	Probl�mes �ventuels:
	- la version actuelle compile et fonctionne sous cygwin
	- sous linux, il se peut qu'il y ait un pb (� tester)
	  * il faut d'abord definir la constante OS (ligne 9 de tools/tools.h) par LINUX
		ligne 77 de tools/tools.c : le 38 n'est peut �tre pas correct en raison des
    diff�rences mystiques du codage des fichiers cygwin / linux.
    essayer 37 � la place...		
	
	
* L'�nonc� du TP est dans questions.txt.
  (� lire avant tout)

* Pour g�n�rer un fichier de clairs/chiffr�s:
  - fixer la cl� contenu dans la constante SECRETKEY dans cipher/Makefile
	- d�finir la bijection dans le fichier bijection-secrete.txt.
	- cd cipher
	- make plain-cipher.txt
	et hop !
	
---------------------------------------------------------------------------
