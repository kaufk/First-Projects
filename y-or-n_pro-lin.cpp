#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector <int> num = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
    vector <int> cresposta = { 1, 1, 2, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector <string> perguntas = {"vamos lá?","você é a aline?", "você tá com cólica?","Você acha que eu sou meio bobo às vezes?", "Você acha que eu exagero quando fico animado com alguma coisa?","Você fugiria comigo para uma ilha se tivesse internet?", "Você acha que eu seria um bom parceiro de aventuras?", "Você aceitaria uma missão aleatória criada por mim?", "Você acha que eu conseguiria ganhar de você numa competição de teimosia?", "Você acha que eu conheço algumas coisas sobre você que poucas pessoas percebem?", "Você acha que eu tento entender seus sentimentos?", "Você gosta quando eu lembro de detalhes pequenos sobre você?","Você sente que pode ser você mesma comigo?", "Você acha que conseguimos aprender um com o outro?", "Você acredita que duas pessoas podem crescer juntas?", "Você acha que eu consigo melhorar seu dia às vezes?", "Você gosta da minha companhia mesmo quando não estamos fazendo nada?", "Você aceitaria participar de mais projetos malucos meus?", "Você aceitaria continuar criando memórias comigo?", "Você gostaria de receber mais coisas feitas por mim?", "Você percebeu que cada pergunta foi feita pensando em você?","Você percebeu que eu fiquei um tempão criando isso para te ver sorrir?", "Você gostou dessa pequena surpresa?", "Você quer que eu faça mais coisas assim no futuro?"};
    vector <string> srespostas = {"PERFECT!","Okay...", "tente novamente em uma semana!","sou mermo", "exagero não ou se liga", "sla oq falar,mas quebom,fico feliz demais😁", "SEM DUVIDAS NE KRAY", "Desafio: conte todas as estrelas do céu hoje à noite. Quando terminar, me manda o resultado. Vou conferir. 🤨", "eu ganhar de tu em teimosia? nem em sonhos mb,n viaja KAKAKAK", "eu realmente espero que sim", "EBAAAA FICO FELIZ QUE VOCE NOTOU ISSO HEHEH","EU SINCERAMENTE ESPERO QUE TU GOSTE HAM","eu sei,tu ja me disse 😁🥰", "tambem acho,afinal eu ja aprendi bastante contigo,te amo ta?", "tambem acho,e eu escolhi voce pra crescer junto comigo,to orgulhoso de mim mesmo por ter alguem incrivel que nem voce 😁😁","Ebaaaa eu feliz,vou me esforçar pra deixar seu dia cada vez mais feliz amor","eu amo muito tb slkk", "BELE,vou ve se tenho mais criatividade pra te impressionar", "boaaaa,bora fazer algo legal depois daq? algo que nos tenha que interagir um com outro? 🥹", "YEEEYYY TE AMO MOR","bem obv ne vida Kakkaak","to falando que amo seu sorriso", "quebom meu amor,to felizinho dnv!", "okayy vou me esforçar 😁"};
    vector <string> nrespostas = {"Okay,volte sempre 😒","Osh e tá fazendo o que aqui? 🤨", "GOOD!😁","certeza?","sumermo", "oshhh e pq n? ta me traindo fdp? 🤨", "E MRM? ENTÃO SMT FDP", "como nao? ta loko? eu mando em tu,n esquece que voce e meu cachorrinho n", "eu duvido que voce admitou de primeira,EU DUVIDO!", "poxa eu achando aqui que sei de monte 🥹💔", "nem vem,eu me esforço muito pra entender voce e o que ta sentindo amor", "nao lembra de nenhuma vez ne? poxa eu lembro sim ta? 😔","nao??? sua mentirosaaaaaaaaaaaa smtt", "poxa,eu aprendi muito contigo amor 😔💔", "ENT CRESCE SOZINHA FDP", "NEM FUDENDO QUE TU CLICOU AQ KSKSKS", "oi?? gosta n eh? ta bom hm","num tem resposta errada não,mas eu q n vou mudar o codigo,se fode ai KAKAKAK", "eu espero do fundo do meu coração que voce nunca veja essa mensagem", "FODA SE,VAI RECEBER E TESTAR MERMO ASSIM","osh como assim não tava obvio??", "meodeus amor,sei nem oq falar 💔","poxaaa eu me esforcei viu? 💔💔🥹", "poxa que decepção 💔🥹"};
    int resposta;
    
    cout << "==========================================" << endl;
    cout << "            ⚡ QUIZ DO KAU ⚡" << endl;
    cout << "==========================================" << endl;
    cout << endl;
    cout << "Responda apenas com 1 ou 2." << endl;
    cout << "Boa sorte! 😁" << endl;
    cout << endl;
    
    
    for (int i = 0; i < num.size(); i++){
      cout << "==========================================" << endl;
      cout << "            ⚡ PERGUNTA " << num[i] << " ⚡" << endl;
      cout << "==========================================" << endl << endl;

      cout << perguntas[i] << endl << endl;

      cout << "[1] Sim" << endl;
      cout << "[2] Nao" << endl;

      cout << endl;
      cout << "------------------------------------------" << endl;
      cout << "Resposta: ";
      cin >> resposta;
      system("clear");
      
      while (resposta != 1 && resposta != 2) {
       cin.clear();
       cin.ignore();
       cout << "é 1 ou 2, não viaja" << endl << endl<< "digite:";
       cin >> resposta;
       system ("clear");
      }
      
      switch(resposta){
          case 1: 
              if(resposta != cresposta[i]){
                cout << endl;
                cout << "------------------------------------------" << endl;
                cout << "             " << srespostas[i] << endl;
                cout << "------------------------------------------" << endl;
                cout << endl;
                cout << "==========================================" << endl;
                cout << "      Pressione qualquer numero" << endl;
                cout << "          para continuar..." << endl;
                cout << "==========================================" << endl;
                cout << ">> ";

                cin >> resposta;
                return 0;
              }
              cout << endl;
              cout << "------------------------------------------" << endl;
              cout << "             " << srespostas[i] << endl;
              cout << "------------------------------------------" << endl;
              cout << endl;
              cout << "==========================================" << endl;
              cout << "      Pressione qualquer numero" << endl;
              cout << "          para continuar..." << endl;
              cout << "==========================================" << endl;
              cout << ">> ";

              cin >> resposta;
              break;
           case 2:    
              if(resposta != cresposta[i]){
                cout << endl;
                cout << "------------------------------------------" << endl;
                cout << "             " << nrespostas[i] << endl;
                cout << "------------------------------------------" << endl;
                cin >> resposta;
                return 0;
              }
              cout << endl;
              cout << "------------------------------------------" << endl;
              cout << "             " << nrespostas[i] << endl;
              cout << "------------------------------------------" << endl;
              cout << endl;
              cout << "==========================================" << endl;
              cout << "      Pressione qualquer numero" << endl;
              cout << "          para continuar..." << endl;
              cout << "==========================================" << endl;
              cout << ">> ";

              cin >> resposta;
              break;
              
      }
      system("clear");
    } 
    
    cout << "=================================\n";
    cout << "        MISSION COMPLETE\n";
    cout << "=================================\n\n";

    cout << "            /\\_/\\\\\n";
    cout << "           ( o.o )\n";
    cout << "            > ^ <\n\n";

    cout << "   +-----------------------+\n";
    cout << "   |  CORACAO DESBLOQUEADO |\n";
    cout << "   +-----------------------+\n\n";

    cout << "   XP GANHO: +9999 carinho\n";
    cout << "   NIVEL DO AMOR: MAXIMO\n\n";

    cout << "   Obrigado por fazer parte\n";
    cout << "   da minha historia<3\n";
}