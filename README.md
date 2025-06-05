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
Data, Localidade, Tipo de Evento, Precipitação, Nível do Rio, Umidade do Solo (em porcentagem), Temperatura, Evento Extremo.

![image](https://github.com/user-attachments/assets/73b87541-dd52-4ee3-a80a-43c5979527fd)

O modelo retorna:
 Previsão de Eventos Naturais Extremos com Redes Neurais
 Projeto no google colab: [Projeto Redes Neurais](https://colab.research.google.com/drive/1FHYCPE8EUqwHdXn7VN7QJ0lJGh1Zosko?authuser=1#scrollTo=8bFCuCxnJ4_X)

---

## 🛠️ Próximos Passos

1.  **Pré-processamento de Dados**: Realizar a limpeza, tratamento de valores ausentes e normalização dos dados.
2.  **Geração de Variáveis e Divisão do Modelo**: Criar novas features (engenharia de atributos) e separar o conjunto de dados em subconjuntos para treino e teste.
3.  **Construção e Treinamento do Modelo**: Definir a arquitetura da rede neural e proceder com seu treinamento.
4.  **Avaliação do Modelo**: Utilizar métricas como a Matriz de Confusão, acurácia, precisão, recall, etc., para avaliar o desempenho e a robustez do modelo.

---

Desenvolvimento da Rede Neural

![image](https://github.com/user-attachments/assets/58c595c2-f9c4-4a00-bfcf-621ccffcd92b)

![image](https://github.com/user-attachments/assets/e6cfecb6-4d30-4150-9ac6-059093992ceb)

![image](https://github.com/user-attachments/assets/94796794-620d-45a9-95d0-23485bfd44ee)


![image](https://github.com/user-attachments/assets/504319ad-5513-4c7b-8298-16355894ff5e)

## 📊 Análise de Correlação das Variáveis com Eventos Extremos

A tabela abaixo detalha a correlação de cada variável do nosso dataset com a ocorrência de um **evento extremo**. Compreender esses valores é crucial para identificar os fatores mais influentes e informar a engenharia de features para o modelo preditivo.

| Variável         | Correlação com `evento_extremo` | Interpretação                                                                     |
| :--------------- | :------------------------------ | :-------------------------------------------------------------------------------- |
| `precipitacao_mm`  | **0.32 (positiva moderada)** | **Aumentos no volume de chuva estão associados a uma maior probabilidade de eventos extremos.** |
| `nivel_rio_m`      | 0.19                            | O nível do rio pode ser um indicador de risco para certos eventos, como enchentes. |
| `tipo_evento`    | -0.13                           | Correlação baixa; seu impacto pode ser maior se a variável for codificada de forma mais granular. |
| `umidade_solo_%`   | -0.12                           | Pode influenciar eventos como secas ou deslizamentos de terra.                  |
| `temperatura_C`    | -0.11                           | Apresenta baixa correlação direta, mas pode ter um impacto mais significativo quando combinada com outras variáveis. |
| `localidade`     | -0.11                           | Correlação muito fraca; talvez seja mais útil para agrupar ou regionalizar dados. |

## 💡 Principais Insights

Com base na análise de correlação, identificamos os seguintes pontos chave:

* A variável `precipitacao_mm` é a mais correlacionada com `evento_extremo`, o que faz total sentido, pois muita chuva está diretamente ligada a eventos como enchentes ou deslizamentos.
* O `nivel_rio_m` também se mostrou relevante, indicando que o modelo pode usar essa informação como um sinal importante de risco de eventos.
* Variáveis como `temperatura_C` e `umidade_solo_%` apresentaram correlação mais baixa, mas isso não significa que devem ser descartadas. Elas ainda podem ser úteis em combinação com outras variáveis e não devem ser eliminadas sem testes aprofundados.
* A `localidade` possui uma correlação negativa fraca. Isso sugere que ela pode ser melhor tratada como um agrupamento ou como uma *dummy variable* (variáveis categóricas transformadas) para capturar efeitos regionais específicos.

---

## 🎯 Objetivos

O principal objetivo deste trabalho foi **construir uma Rede Neural Artificial (MLP - Multi-Layer Perceptron)** utilizando a linguagem Python, com o propósito de **prever a ocorrência de eventos extremos ambientais**.

Para isso, usamos um conjunto de dados reais contendo variáveis como:
* Precipitação (chuva)
* Nível do rio
* Umidade do solo
* Temperatura
* Tipo de evento
* E o resultado final: se ocorreu ou não um evento extremo.

Foi necessário preparar e limpar os dados, normalizar os valores e dividir o conjunto entre treino e teste. A rede neural foi então treinada para reconhecer padrões e aprender a prever, com base nesses dados, se um evento extremo vai ocorrer ou não.

---


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


