 
-- Criando usuario
CREATE USER ‘Joao’
-- Atribuindo uma identificacao a ele
IDENTIFIED BY ‘7777’
-- concedendo acesso a tabela relatorios a o usuario Joao
GRANT ALL ON db_relatorios. * TO ‘Joao’; 
-- removendo acesso do usuario da tabela relatorios
REVOKE SELECT ON db_relatorios FROM ‘Joao’; 


CREATE USER ‘Rafael@’localhost’ IDENTIFIED BY ‘password’;

GRANT ALL ON BancodeDados1.* TO ‘Rafael’@’localhost’;


CREATE USER ‘Rafael’@’localhost’ IDENTIFIED BY ‘password’;
GRANT ALL ON tabela.* TO ‘Rafael’@’localhost’;



