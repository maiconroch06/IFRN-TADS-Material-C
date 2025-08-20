# IFRN-TADS-Material-C

![Language](https://img.shields.io/badge/language-C-blue.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)
![Status](https://img.shields.io/badge/status-em%20desenvolvimento-yellow)

Este repositório é de uso pessoal e acadêmico para a disciplina de **Programação de Computadores**, que visa desenvolver habilidades fundamentais em lógica de programação e resolução de problemas computacionais, utilizando a linguagem C como base para introdução à disciplina.


## 🎯 Este repositório foi criado com o objetivo de:

- Reunir materiais de aula em um só lugar;
- Facilitar o estudo e a revisão de conteúdos;
- Documentar atividades avaliativas e desafios propostos;
- Servir como base para futuras consultas e aprendizado contínuo da linguagem C.


## 📁 Estrutura do Repositório
  `desafios/`: contém desafios propostos em aula com foco na aplicação prática dos conceitos abordados em sala.
  
  `listas-exercicio/`: listas de exercícios regulares, criadas pelo professor e com apoio do ChatGPT, para reforçar os conteúdos vistos em aula.
  
  `avaliacoes/`: materiais avaliativos:

   - `prova/`: provas avaliativas realizadas presencialmente em sala de aula.
   - `PROG-atividade/`: tarefas enviadas como avaliação individual externa (para casa).

## 💡 Tecnologias Utilizadas

- **Linguagem:** C
- **IDE:** Visual Studio Code
- **Sistema Operacional:** Windows

## 📚 Como Usar

### 1. Instalar o Visual Studio Code ou outra IDE de preferência
- Acesse o site oficial: [https://code.visualstudio.com/](https://code.visualstudio.com/)
- Clique em **Download** e baixe a versão para o seu sistema operacional (Windows, Linux ou macOS).
- Instale normalmente seguindo o assistente.

### 2. Instalar o compilador C

- Nos sistemas operacionais do Linux e macOS já vem instalado o complidador da linguagem, mas de qualquer forma execute os passos a seguir.

#### Windows (MinGW)
- Baixe o compilado C: [Como Programar em C usando o Visual Studio Code? - YouTube](https://sourceforge.net/projects/mingw/files/MinGW/Base/gcc/Version6/gcc-6.3.0/)
- Video de consulta sobre os proximos passos [https://youtu.be/Mook-z2uvpM?si=XTP_BJy_ilbZ65Dv](https://youtu.be/Mook-z2uvpM?si=XTP_BJy_ilbZ65Dv)
- Durante a instalação, selecione a opção `mingw32-gcc-g++` e `mingw32-base`.
- No canto superio esquerdo, acesse `Installation > Apply Changes > Apply`, após aguardar a instalação dos pacotes pode fechar o programa.
  
<img src="image/1" align="right" width="50">

- Pesquise pelo programa em seu computador chamado Variaveis, logo aparecera essas duas opções, acesse a que esta destacada.
  
<img src="image/2" align="right" width="50">

- Ao executar, aperte o botão detacado na imagem "Variáveis de Ambiente...".

<img src="image/3" align="right" width="50">

- Clique na varável "Path" como esta destacada em azul na imagem e aperte o botão "Editar"

<img src="image/4" align="right" width="50">

- Logo em seguida vá em "Procurar" e nesse momento você vai localizar uma pasta da qual instalou anteriormente que será a pasta bin. Caso não tenha alterado o local de instalação muito provavelmente estará C:MinGW/bin
  
- Após esse procedimento aperte nos proxomos botões "Ok" para confirmar as mudanças.

<img src="image/5" align="right" width="50">

<img src="image/6" align="right" width="50">

- Entre no VS Code 1.acesse a aba de extenções, 2. vá na barra de pesquisa e adicione "c", e procure pelas seguintes exetenções para instalar.
  
- (Opcional) Para verificar se funcionou, abra o **Prompt de Comando** e digite:
  
  ```bash
  gcc --version
  ```
#### Linux
- No terminal, execute:
  
   ```
  sudo apt update
  sudo apt install build-essential -y
  ```
   
- Verifique:

  ```
  gcc --version
  ```

#### macOS

- No terminal, instale as ferramentas de desenvolvimento da Apple:

  ```
  xcode-select --install
  ```

- Verifique:
  
  ```
  gcc --version
  ```

### 3. Clonar este repositório

- Abra o terminal e digite:

  ```
  git clone https://github.com/maiconroch06/IFRN-TADS-Material-C.git
  cd IFRN-TADS-Material-C
  ```

4. Compilar e executar algum codigo

Para compilar (exemplo com main.c):

  ```
  gcc main.c -o programa
  ```

Para executar:

Windows:

  ```
  programa.exe
  ```

Linux/macOS:

  ```
  ./programa
  ```

## 🤝 Contribuição

Contribuições são bem-vindas! Se quiser sugerir melhorias, correções ou adicionar novos conteúdos, sinta-se livre para abrir um Pull Request.

## 👨‍💻 Autor

Este repositório foi criado por [Maicon_Rocha](https://github.com/maiconroch06) como parte do curso de **Analise e desenvolvimento de Sistemas** **(TADS)** no **IFRN - Campus Nova Cruz**.
<img src="image/happy-cat.gif" align="right" width="50">
