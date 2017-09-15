CREATE TABLE USUARIO(
	email varchar(80),
	nome varchar(100) NOT NULL, 
	senha varchar(50) NOT NULL,

	PRIMARY KEY(email)
);

INSERT INTO USUARIO(email, nome, senha)
VALUES(
	'rayssastellanat@email.com',
	'Rayssa Stella Natália Campos',
	'UxoGgUNd7y'
);

INSERT INTO USUARIO(email, nome, senha)
VALUES(
	'joao-paulo@email.com',
	'Jõão Paulo',
	'qiB9emlNpo'
);

INSERT INTO USUARIO(email, nome, senha)
VALUES(
	'aguirre@email.com',
	'Aguirre Sabino',
	'1234'
);

INSERT INTO USUARIO(email, nome, senha)
VALUES(
	'luan@email.com',
	'Luan Bruno',
	'4321'
);