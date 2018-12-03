 #include <stdio.h>
 
  int main() {
 
  int a;
 
  printf("\nType \"Guess Who?\" and press ENTER.\n\n");
  scanf("%i", &a);

  printf(
"                         `/+o/.\n"
"                     .+sso+/:oydyo/:-:+shdys/     `-:.     `-/+o+/`\n"
"                 `/sdh+/::/::ss:`ymdhyso/./hmMNyhNNms+ososys+/-:/shms/`\n"
"              .+hNNy++oo+/.`.--/osyhdmNNMMMMMMMMMNdsssssoso+hhhhsoo+ymdo.\n"
"            -smNy/+ymmmmmNNNNMNMMMMMNNNmmNMMMMMMMMMho:/././:--shydNMMNdo-sNs`\n"
"           -hNd+-sNMNdmNMMMNNNMNNNMMMddNMMNNmNMMMMMMNmy+/././::/:-:/++ymNNdmMN:\n"
"         `sNMs`+NMNNNMMMMNNNMMMMMMNmhyso/././+ohMmoNMmoo+/::/-:oymNNmsosshdhmMM/\n"
"        +NMMy`hMMMhyNMNMMNNNMds:-.`-:syddmNMMmyo`+yMMho:..-+/./++omMNNNNNNNmdNMs\n"
"       :mMMMh`yMNdodNNNMNMMMs.+sdmmmmmdhNMMMNhy/..`-syhNmdyssso+/.`:yNMMMMNMNMMMy\n"
"      :NMNh:-+MMh+mdNNNNNMd.+NNMMMMMMMMmho:-......:--::ohNMMMMMMNmNy/.oNMNmNMNMMMs\n"
"     :NMm+/dmmMNydyhNdhMMN.yMMNmhysso+:-``         ```.--:/+sdMMMMMNNNm:-mMNNNNMMMMy\n"
"    :NMy/hNMMMMmNddsh/NmMy-Mms:..`.--.`                 ``..-.:yNMMMMNMNs:NMMMNNNNMMy\n"
"   :NNy/mMMMMMMmNMMshsNdMo/d-...``                        ```...-yMMMNNMd`NMMNMdmoNMM-\n"
"  /mMm+NMNNMMNMNNNNNNNNMMmom/                               ```..`+NMMMMh`NMMMMNNdhNMh\n"
" +NMMmmMNyNMNMMMMMNmmmNMdNNyh+.                              ``````/NMMM::MMMMNMNNmNMN\n"
"+MNNMMMNymMNNMMMNNNNNMh+:+dNmddhyoo+`                         ````.`sMMN`sMNNMNNMNNNNN\n"
"dNNNMNNddMNNNNNNmymMN+---::/shdhyyy:                          `````..hMo.NMNMNMMMNmMMd\n"
"dNNNMMNmNNNmmNMNdNMM+.-..----.-:::.                           ````...:mh/NMMMNMMMNNMMh\n"
"sMNNMMNMNNmyNMNdmNMo--.....                                   ``...---:dNMNMMNMMNNNMMN.\n"
" :NNNMMMNNNsmMNmMNMy...`.-.`                                    `.-----:odNmmNMMMMMNMMo\n"
" .NMMMmMMMNmMNNNNMm:-.```..                                      ``-----:/o/./dMMMNMMMm\n"
" .NMMMNMMNMMNMNNNNs--.``...                                          `....---..dMNMMMMM`\n"
" .NNMMNNNNNMMMNNNN:-...`...                                           ```.....`+MMMMMMM.\n"
" .MNNNNNNNMMMMMNNy.......-.`                                          ``..---.`.NMMMMMM`\n"
" `NMNMMNNNMMNMMMm-...`.-----.`                                        ``.-----.`yMMMMMd\n"
"  dMMMNNNNMMNNMMo`-....----..`          ``                      `.`` ```.------`:MMMMM-\n"
"  /MMNMNNNMMNMMN-`.`..-.--.` `--..-:-.-.``..``               ```.-......--.----..NMMMd\n"
"  `mMNMNNMMMNNMN.``...-.-../hddyysyhysyyso+--/::-..--...----:::+syyyyhhdddy+:-.-.hMMM:\n"
"   :NNNNNNMMMMMN.`....--.:dy/:-.-/+++ososss+/:+shyo/::/:+os+:+syosyoso+/:/./ss/./.`+MMm\n"
"    +MdmNNMNMMMN+.--....:+-.-:+ooymdddmdhyo++ss+/yMo.`..oNsyhdhmdmmmmNmdo:-.--:+-:MM/\n"
"   `y/..-+dNNMMMo-shhyo++--+sso-`dsymoso.smyso+./.od+/:/ho+yyhd/ymsNhyy./yy/``.-hhmm`\n"
"   .s+md+- oMMMm``.-/sy./-.+/s.  odys+s-  /shyso+.sm+:::yd/hh+:`.hyyhy- `/y/.` `hs/s`\n"
"   -oyMNyhs:NMMo     `.-`         .---` ``.`/::+s/ms````-mo+:`````.--` ````     `sNm`\n"
"   `hsMh`.hymMM:       `-         `          .:+:hy`     od:-`                  .+sM-``\n"
"    o+o/``-/mMM-        .-                ``.```hy`       s.`.`                 -/+M+``\n"
"    .s `./NMMMM-         --            ````  `:ho`        .s`  ```             ./.+My`\n"
"     /: `+MMdMM/          -.  `       `   ..+++-           :d/.             ``:o-`oMy\n"
"      o. .sdNMMm`            `--::/./+/./.`-/:.           `.ohooo:-.`` `.-:+./:..`hMy\n"
"      `s```.yMMMs                  ```     .y+  `::.:----.-``o:-::/:::--:::-----..mMo\n"
"       :s` `oMNMN-                         :N+  -NNhy/:/sds./:..----------------`/MN.\n"
"        +o``-NMNMd`                      `-syyoo++/.++:so/+yN+..--....-..-....--`dM+\n"
"         +:.`oMNNN`                     .:-` `.::.` `--..---/+/---.```........-.:d:\n"
"          ./++Ny::`                   `--`          .--..-----::-..```......---.s.\n"
"            `:os.--`                  .`            `.. ``.------.`.```..-----.:o\n"
"              `h-..`                 ``        .:syy/-/ydho-.--...`````.------.+.\n"
"               +o`.`                        ./ymNNNNNNNmmNNNh:....``.```.-----:s\n"
"               `h-`.                    -/+oyo/:----:---.--:+sso:........--::-+:\n"
"                /d...                 `.++: -:--/+:/oo+o++-.``--.....-----:-:y\n"
"                `Md:.`                ``    `-:/+ooooo+/-........-----------yo\n"
"                 mNNs-`                    `..-/oo+:./:/oo:......----------os\n"
"                 h:+md:.                 ...``.`         `------.---------++\n"
"                `h..-+ddo.`                           ``.----------------s:\n"
"                 h` .--/ydy:`                  `...--------------------+y.\n"
"                 h`   ..--+yds+.`              `....----------------:+dN`\n"
"                `y      `.-.-:sdhs:.`   `...````..----------------:smsdm\n"
"                `h         .--..-+ymdy+/:----:---------------.-/shs+.`os\n"
"                `h           `..--..:sdmmhyo/::---------::/+syhy/....`+-\n"
"                -y              `..--..--/oosyyyhhhyyyssooo/:.`...`.` /-\n"
"                `.                  `..--......................````   +`\n"
"                                       `...------..-.........``\n"
"                                           ``..-.--........``\n"
"                                                ```..```\n"
);


 return 0;
}
