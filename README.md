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

## ⚙️ Tecnologias Utilizadas

- **Python** (pandas, scikit-learn, matplotlib, streamlit)
- **Machine Learning Supervisionado** (Regressão com Random Forest)
- **ESP32 + Sensores simulados no Wokwi**:
  - DHT22 (temperatura/umidade)
  - HC-SR04 (nível da água)
  - LDR (luminosidade)
  - Botão (chuva repentina)
  - LEDs (alerta visual)
- **Wokwi** (simulador de microcontroladores)
- **Dataset:** Atlas Digital de Desastres no Brasil (S2iD)

---

## 🧠 Como Funciona

### Parte 1 – Machine Learning

Entrada de variáveis como:
•	Data
•	Localidade
•	Tipo de Evento
•	Precipitação
•	Nível do Rio
•	Umidade do Solo (em porcentagem)
•	Temperatura
•	Evento Extremo

![image](https://github.com/user-attachments/assets/73b87541-dd52-4ee3-a80a-43c5979527fd)

O modelo retorna:
 Previsão de Eventos Naturais Extremos com Redes Neurais
 Projeto no google colab: [Projeto Redes Neurais](https://colab.research.google.com/drive/1FHYCPE8EUqwHdXn7VN7QJ0lJGh1Zosko?authuser=1#scrollTo=8bFCuCxnJ4_X)

 

- Valor estimado de perdas (em R$)
- Comparativo com média histórica de eventos semelhantes

### Parte 2 – Estação Climática Simulada

Leitura em tempo real dos sensores simulados:

- Acionamento de LEDs (verde, amarelo e vermelho) conforme o risco ambiental detectado;
- Visualização dos dados no Monitor Serial do Wokwi.

---

## 📹 Vídeo Demonstração

▶️ [Link para o vídeo Redes Neurais (YouTube)](https://youtu.be/FnNNF5hIqqA)

---


## 🗃 Histórico de lançamentos
* 0.1.0 - 02/06/2025

## 📋 Licença

<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/cc.svg?ref=chooser-v1"><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/by.svg?ref=chooser-v1"><p xmlns:cc="http://creativecommons.org/ns#" xmlns:dct="http://purl.org/dc/terms/"><a property="dct:title" rel="cc:attributionURL" href="https://github.com/agodoi/template">MODELO GIT FIAP</a> por <a rel="cc:attributionURL dct:creator" property="cc:attributionName" href="https://fiap.com.br">Fiap</a> está licenciado sobre <a href="http://creativecommons.org/licenses/by/4.0/?ref=chooser-v1" target="_blank" rel="license noopener noreferrer" style="display:inline-block;">Attribution 4.0 International</a>.</p>


