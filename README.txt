# IAR125-TP2
TP2 Automne 2016

Matthieu CROUZET  (CROM12069406)
Mathieu BLACKBURN (BLAM03049208)

Question 3 :
Nous avons programmé le monde du jeu de telle sorte qu'avec le fichier .ini, nous pouvons indiquer le nombre de leaders que nous voulons faire apparaître. Le nombre d'agents suivant un leader est :  le nombre d'agents suiveurs divisé par le nombre de leaders (incluant ou non le leader « Player »).

Question 4 :
En faisant l'instance du nouveau leader « Player », nous aurons un leader de plus ce qui changera le nombre d'agents suivant chaque leader. Le comportement des suiveurs suivant notre « Player » est similaire aux autres leaders cependant il est possible que nos suiveurs se stationnent près de notre « Player » si celui-ci ne se déplace pas.
(Nous utilisons les flèches du clavier pour déplacer notre « Player »)

Question 5 :
Nous avons changé les couleurs des agents pour respecter l'énoncé qui nous est donné. Nous n'avons pas mis dans l'interface l'option de changer le nombre de leader, d'agents ou de joueurs cependant il est possible de changer ceux-ci dans le fichier .ini.

Ajouts :
Comme mentionner plus haut nous avons ajouté l'option d'activer ou désactiver le « Player » ainsi que l’option de modifier le nombre d'agents leaders. De plus, le nombre d'agents suivant chaque leader est déterminé de telle sorte que chaque leader aura un nombre identique d'agents les suivant pour ne pas faire de dispute.