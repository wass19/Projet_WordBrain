#!/bin/bash



n=1
if (! test -f $*) then
	mv $* Poubelle
	else 
	mv -s `$n` Poubelle		

fi

i=1
for param in $* ;do 
	echo "parametre $i = $param"
	i=`expr $i + 1`
done


if (! test -d Poubelle) then
	mkdir Poubelle	
fi

mv $* Poubelle 
#!/bin/sh
if ( test $# = 0 ) then
echo "Usage : $0 <fichiers>"
echo "Ce script déplace les fichiers donnés en paramètre dans un dossier Poubelle, situé dans le répertoire home de l'utilisateur."
exit 1
fi
home=`echo $HOME`
#Creation du répertorie poubelle dans le home si inexistant.
if ( ! test -d "$home/Poubelle" ) then
`mkdir $home/Poubelle`
fi


for fichiers in $* ; do

if ( ! test -f "$fichiers" ) then   #Le fichier à supprimer n'existe pas
echo "Le fichier $fichiers n'existe pas !"
else

if ( ! test -z "`ls -l $home/Poubelle/ | grep "^-.*$fichiers=[0-9]*\$"`") then
ancien_numero=`ls -l $home/Poubelle/ | grep "^-.*$fichiers=[0-9]*\$" | tr -s " " | cut -d"=" -f2 | sort -n | sed -n '$,$ p'`
nouveau_numero=`expr $ancien_numero + 1`
`mv $fichiers $home/Poubelle/$fichiers=$nouveau_numero`
else
`mv $fichiers $home/Poubelle/$fichiers=1`
fi
fi
done