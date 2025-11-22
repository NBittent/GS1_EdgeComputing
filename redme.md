📄 README.md — Projeto de Monitoramento de Ambiente com Arduino
🌡️
 Projeto de Monitoramento Ambiental — Global Solutions 2025
Gabriel Ferreira(rm:568474)
Nicolas Bittencourt(rm:568108) 
Pedro Chiarantano(rm:567396)
Curso: Engenharia de Software — FIAP
📘
 Descrição do Projeto

Este projeto tem como objetivo monitorar condições ambientais utilizando sensores conectados a um Arduino UNO, simulados na plataforma Wokwi.
O sistema coleta:

Temperatura

Umidade

Luminosidade

Detecção de gás inflamável (MQ-2)

Sinal de fadiga via botão

O objetivo é demonstrar como sensores físicos podem ser usados em um ambiente real para promover bem-estar, segurança e prevenção de riscos ocupacionais no contexto do Futuro do Trabalho.
Embora o Arduino UNO não possua módulos de rede integrados, o projeto inclui uma explicação técnica de como MQTT e HTTP seriam utilizados, caso o sistema fosse 
expandido para IoT real — conforme solicitado pelo professor.

🛠️
 Componentes Utilizados

Arduino UNO

Protoboard

Sensor DHT22 (Temperatura e Umidade)

Sensor LDR (Luminosidade)

Sensor MQ-2 (Gás Inflamável)

Botão (Detecção de fadiga)

Resistores 10k (2x)

Jumpers

🔌
 Esquema Eletrônico (Wokwi)
🔗
 Link para o projeto funcionando:

https://wokwi.com/projects/448287343699848193 
Gs- O Futuro do Trabalho Copy 2 - Wokwi ESP32, STM32, Arduino Simul...

📂
 Arquivos do Projeto

sketch.ino → Código fonte do Arduino

diagram.json → Mapeamento do circuito no Wokwi

README.md → Documentação completa

circuito.png → Imagem do circuito (adicionar depois)

🧠
 Como o Sistema Funciona
🔵
 DHT22 (Temperatura e Umidade)

O DHT22 mede:

Temperatura ambiente

Umidade relativa do ar

Conectado assim:

VCC → 5V

GND → GND

SDA → D7

Resistor 10k → SDA ↔ 5V (pull-up)

🔵
 LDR (Luminosidade)

Faz leitura analógica da quantidade de luz.

Um lado → 5V

Outro lado → A0

A0 → resistor 10k → GND

🔵
 MQ-2 (Gás Inflamável)

Detecta gases como:

GLP

Metano

Hidrogênio

Pino AO → A1 do Arduino.

🔵
 Botão (Detecção de Fadiga)

Simula um evento de fadiga:

Botão pressionado = fadiga detectada

Conectado ao pino 2

🏁
 Conclusão
Este projeto demonstra como sensores físicos podem ser integrados para criar soluções reais de bem-estar 
em ambientes de trabalho. Ele simula um sistema de IoT completo, com explicação de como MQTT e HTTP seriam 
usados no mundo real, cumprindo todos os requisitos da atividade.