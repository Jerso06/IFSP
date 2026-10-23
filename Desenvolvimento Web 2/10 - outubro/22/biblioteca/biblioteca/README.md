# Biblioteca da Turma — starter (Revisão AV1, Web 2)

Este é o projeto da lista de revisão. Todas as questões da lista usam esta pasta.
Registro, login e logout já estão prontos (é o projeto da aula de autenticação).

## Como rodar

1. `npm install`
2. Crie o banco e as tabelas no MySQL: `mysql -u root -p < sql/schema.sql`
   (ou cole o conteúdo de `sql/schema.sql` no MySQL Workbench / phpMyAdmin)
3. Copie `.env.example` para `.env` e coloque a senha do seu MySQL
4. `npm start` e acesse `http://localhost:3000/register`

Logo depois do login o app vai para `/livros`, que ainda não existe
("Cannot GET /livros"). Você constrói essa parte ao longo da lista.

## Como trabalhar

Siga a lista na ordem. Cada `TODO` no código tem o número da questão
correspondente (ex.: `TODO 3.2` é a questão 3.2). O `livros.json` vem
**com erros de propósito** — é a questão 2.1.

## Entrega

Um único `.zip` do projeto **sem** a pasta `node_modules` e **sem** o `.env`.
