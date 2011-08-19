/* Phonebook */
CREATE TABLE `test_phonebook` (
    id                BIGINT UNSIGNED NOT NULL AUTO_INCREMENT,
    name              VARCHAR(255) NOT NULL DEFAULT '',
    number            INT NOT NULL DEFAULT 0,
    PRIMARY KEY(id));
INSERT INTO test_phonebook (name,number) VALUES ('John', '123456789');
INSERT INTO test_phonebook (name,number) VALUES ('Jack', '912345678');
INSERT INTO test_phonebook (name,number) VALUES ('Lisa', '56743287');
INSERT INTO test_phonebook (name,number) VALUES ('Min', '876987432');

CREATE TABLE `test_notebook` (
    id                BIGINT UNSIGNED NOT NULL AUTO_INCREMENT,
    updated           TIMESTAMP    NOT NULL DEFAULT 0,
    creation          TIMESTAMP    NOT NULL DEFAULT 0,
    name              VARCHAR(255) NOT NULL DEFAULT '',
    message           VARCHAR(255) NOT NULL DEFAULT '',
    PRIMARY KEY(id));
