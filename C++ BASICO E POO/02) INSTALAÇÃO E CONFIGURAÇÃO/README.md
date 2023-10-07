# INSTALAÇÃO E CONFIGURAÇÃO
Para instalar o compilador MinGW (Minimalist GNU for Windows) e configurar o Visual Studio Code para usar o MinGW como compilador C++ no Windows, siga estas etapas:

1. **Instale o MinGW**:
   - Vá para o site oficial do MinGW: https://osdn.net/projects/mingw/downloads/68260/mingw-get-setup.exe/
   - Baixe o instalador "mingw-get-setup.exe" e execute-o.
   - No instalador, escolha "Install" e siga as instruções para instalar o MinGW.

2. **Selecione Componentes**:
   - Durante a instalação, você será solicitado a selecionar os componentes a serem instalados. Certifique-se de selecionar, pelo menos, as opções "mingw32-base" e "mingw32-gcc-g++".

3. **Adicione o diretório MinGW ao PATH**:
   - Após a instalação, adicione o diretório do MinGW ao seu PATH para que o Visual Studio Code possa encontrar o compilador.
     - Para fazer isso, abra o Explorador de Arquivos, clique com o botão direito do mouse em "Este Computador" ou "Meu Computador" e escolha "Propriedades".
     - Clique em "Configurações avançadas do sistema" ou "Configurações avançadas do sistema" (dependendo da versão do Windows).
     - Clique no botão "Variáveis de Ambiente".
     - Na seção "Variáveis de Sistema", encontre a variável "Path" e clique em "Editar".
     - Clique em "Novo" e adicione o caminho para o diretório onde o MinGW foi instalado (por padrão, algo como C:\MinGW\bin).
     - Clique em "OK" para fechar as janelas de configuração de variáveis.

4. **Instale o Visual Studio Code**:
   - Se você ainda não tiver o Visual Studio Code instalado, faça o download e instale-o a partir do site oficial: https://code.visualstudio.com/

5. **Instale a extensão C/C++ para o Visual Studio Code**:
   - Abra o Visual Studio Code.
   - Clique na aba "Extensões" (ou pressione `Ctrl+Shift+X`).
   - Pesquise por "C/C++" na barra de pesquisa.
   - Instale a extensão "C/C++" oferecida pela Microsoft.

6. **Configurar o Visual Studio Code para usar o MinGW**:
   - Crie ou abra um projeto C++ no Visual Studio Code.
   - Crie um arquivo C++ (por exemplo, `meu_programa.cpp`).
   - Abra o arquivo C++ e, na parte inferior direita da janela, você verá um botão "Selecionar Kit". Clique nele.
   - Selecione o kit MinGW que você instalou durante a instalação do MinGW (por exemplo, "mingw-8.1.0").
   - Agora, o Visual Studio Code está configurado para usar o MinGW como compilador C++.

Você está pronto para começar a escrever e compilar código C++ no Visual Studio Code usando o MinGW como compilador. Certifique-se de que o MinGW esteja funcionando corretamente executando um programa de teste simples. Se encontrar problemas, verifique se a configuração do PATH está correta e se o MinGW foi instalado corretamente.