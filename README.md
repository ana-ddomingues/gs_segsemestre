# FIAP - Faculdade de Informática e Administração Paulista

<p align="center">
<a href= "https://www.fiap.com.br/"><img src="assets/logo-fiap.png" alt="FIAP - Faculdade de Informática e Admnistração Paulista" border="0" width=40% height=40%></a>
</p>

<br>

# 🌎 Previsor de Perdas por Desastres Naturais

## Nome do projeto
Global Solution - 2º Semestre

## Nome do grupo
Grupo 18

## 👨‍🎓 Integrantes: 
- [Ana Beatriz Duarte Domingues](https://www.linkedin.com/in/)
- [Junior Rodrigues da Silva](https://www.linkedin.com/in/jrsilva051/)
- [Carlos Emilio Castillo Estrada](https://www.linkedin.com/in/)


## 👩‍🏫 Professores:
### Tutor(a) 
- <a href="https://www.linkedin.com/company/inova-fusca">Nome do Tutor</a>
### Coordenador(a)
- <a href="https://www.linkedin.com/company/inova-fusca">Nome do Coordenador</a>

---


## 📜 Descrição

Este repositório contém todos os arquivos e códigos referentes ao projeto da **Global Solution 2025.1**, cujo objetivo é desenvolver uma solução digital baseada em dados reais para prever, monitorar ou mitigar os impactos de desastres naturais extremos.

---

## 📁 Estrutura de pastas

Dentre os arquivos e pastas presentes na raiz do projeto, definem-se:

- <b>assets</b>: aqui estão os arquivos relacionados a elementos não-estruturados deste repositório, como imagens.

- <b>config</b>: Posicione aqui arquivos de configuração que são usados para definir parâmetros e ajustes do projeto.

- <b>scripts</b>: Posicione aqui scripts auxiliares para tarefas específicas do seu projeto. Exemplo: deploy, migrações de banco de dados, backups.

- <b>src</b>: Todo o código fonte criado para o desenvolvimento do projeto ao longo das 7 fases.

- <b>README.md</b>: arquivo que serve como guia e explicação geral sobre o projeto.


## 📌 Objetivo do Projeto

Criar uma aplicação que:

- Utilize **Machine Learning** para prever o valor estimado de perdas econômicas em desastres naturais;
- Simule uma estação climática inteligente usando sensores no **Wokwi (ESP32)** para identificar riscos ambientais;
- Una dados históricos com entradas físicas simuladas para gerar alertas e apoiar decisões preventivas.

---

## 🧠 Parte 1 – Machine Learning com Redes Neurais

Utilizamos um modelo de **Rede Neural Multicamadas (MLPClassifier)** para prever a **ocorrência de eventos naturais extremos** com base em atributos históricos do banco de dados do **Atlas Digital de Desastres no Brasil**.

### Principais etapas do notebook:

- Pré-processamento de dados e limpeza
- Codificação de variáveis categóricas com `LabelEncoder`
- Separação entre variáveis preditoras e variável alvo (`evento_extremo`)
- Divisão entre treino e teste (80/20)
- Treinamento de uma Rede Neural MLP
- Avaliação com métricas: matriz de confusão e relatório de classificação

> O modelo busca prever, com base em entradas como tipo de desastre, localidade, população afetada, entre outros, se um **evento extremo deve ocorrer** (1) ou **não** (0).

---

## 🌡️ Parte 2 – Simulação com Sensores (Wokwi + ESP32)

Além do modelo preditivo em Python, o projeto também conta com uma **simulação embarcada** desenvolvida no **Wokwi**, utilizando o microcontrolador **ESP32**. O objetivo é simular uma estação climática inteligente que detecta, em tempo real, condições ambientais que podem indicar riscos de desastres naturais.

### Componentes simulados:

- **DHT22**: mede temperatura e umidade do ambiente;
- **HC-SR04**: simula o nível da água (ex: enchentes);
- **LDR (fotoresistor)**: mede intensidade de luz (associada a risco de seca ou incêndio);
- **Botão físico**: simula eventos repentinos como chuvas intensas;
- **LEDs (verde, amarelo, vermelho)**: indicam o nível de risco detectado.

### Lógica de funcionamento:

- **Verde**: condições normais;
- **Amarelo**: atenção (nível elevado de água ou baixa luminosidade);
- **Vermelho**: risco crítico (alta temperatura, baixa umidade, chuva intensa simulada).

A lógica embarcada permite que o sistema tome decisões em tempo real com base nas leituras dos sensores, reforçando o caráter preventivo da aplicação.

---

## 🎯 Resultados Esperados

- Previsão automatizada da ocorrência de eventos extremos;
- Protótipo com sensores que simula monitoramento ambiental em tempo real;
- Solução de apoio a decisões emergenciais em casos de desastre;
- Ferramenta que une aprendizado de máquina, lógica embarcada e análise de dados.



## 🔗 Recursos Adicionais

* **Projeto no Google Colab**: Acesse e execute o *notebook* diretamente no Google Colab por este [link](https://colab.research.google.com/drive/1FHYCPE8EUqwHdXn7VN7QJ0lJGh1Zosko?authuser=1#scrollTo=8bFCuCxnJ4_X).
* Demostrativo YouTube: [link externo](https://youtu.be/FnNNF5hIqqA).

---

## 📹 Vídeo Demonstração

[Link para o vídeo Redes Neurais (YouTube)][link externo](https://youtu.be/FnNNF5hIqqA).

ℹ️ **Nota:** Todas as explicações detalhadas sobre o funcionamento, arquitetura, resultados e melhorias estão descritas no PDF entregue junto ao projeto.

---

## 🗃 Histórico de lançamentos
* 0.1.0 - 02/06/2025

## 📋 Licença

<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/cc.svg?ref=chooser-v1"><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/by.svg?ref=chooser-v1"><p xmlns:cc="http://creativecommons.org/ns#" xmlns:dct="http://purl.org/dc/terms/"><a property="dct:title" rel="cc:attributionURL" href="https://github.com/agodoi/template">MODELO GIT FIAP</a> por <a rel="cc:attributionURL dct:creator" property="cc:attributionName" href="https://fiap.com.br">Fiap</a> está licenciado sobre <a href="http://creativecommons.org/licenses/by/4.0/?ref=chooser-v1" target="_blank" rel="license noopener noreferrer" style="display:inline-block;">Attribution 4.0 International</a>.</p>


