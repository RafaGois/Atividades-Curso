BEGIN TRANSACTION
--Pega a info de TbBanco
UPDATE FROM TbBanco
-- adiciona um valor de 1000000 a Valor salario
SET ValorSalario = 100.000
-- Condição para o set
-- Apenas ocasiões em que o salário for inferior a 10k, ele será mudado
WHERE ValorSalario < 10.000
-- Salvamento temporário das mudanças
SAVEPOINT
INSERT INTO TbBanco SELECT ValorSalario
IF ‘*Contrato_Assinado*’= 1
COMMIT
ELSE
ROLLBACK