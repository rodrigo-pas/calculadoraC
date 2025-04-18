# 🧮 Calculadora em C (Console)

Este é um projeto simples de uma **calculadora em linguagem C**, criado como parte do aprendizado inicial em programação. A aplicação roda no terminal e permite realizar operações básicas entre dois números inteiros.

## 💻 Tecnologias utilizadas

- Linguagem C
- Compilador C (ex: GCC)
- Terminal/Console

## ⚙️ Funcionalidades

- Operações suportadas:
  - Adição (`+`)
  - Subtração (`-`)
  - Multiplicação (`*`)
  - Divisão (`/`)
- Loop contínuo para realizar múltiplos cálculos
- Validação de operação digitada
- Prevenção contra divisão por zero
- Limpeza da tela a cada nova operação (com `system("cls")` no Windows)

## ▶️ Como executar

1. Clone este repositório ou copie o código-fonte.
2. Compile o programa com um compilador C, por exemplo:

```bash
gcc calculadora.c -o calculadora
```

Execute no terminal:
```bash
./calculadora
```
💡 Obs: No Windows, use system("cls") como no código. Em sistemas Unix/Linux, substitua por system("clear") se necessário.

📝 Exemplo de uso
```bash
CALCULADORA
Digite um numero: 10
Digite a operacao que vai fazer: +
Digite outro numero: 5
10 + 5 = 15
```

## 📌 Observações
- O programa opera com **números inteiros** apenas.  
- Recomendado rodar em terminal compatível com `system("cls")` (Windows).