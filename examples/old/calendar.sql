/* Calendar events */
CREATE TABLE `test_calendar_event` (
    id                BIGINT UNSIGNED NOT NULL AUTO_INCREMENT,
    updated           TIMESTAMP    NOT NULL DEFAULT 0,
    creation          TIMESTAMP    NOT NULL DEFAULT 0,
    start_time        TIMESTAMP    NOT NULL DEFAULT 0,
    end_time          TIMESTAMP    NOT NULL DEFAULT 0,
    subject           VARCHAR(255) NOT NULL DEFAULT '',
    description       VARCHAR(255) NOT NULL DEFAULT '',
    PRIMARY KEY(id)) DEFAULT CHARACTER SET utf8 DEFAULT COLLATE utf8_bin;

INSERT INTO `test_calendar_event` VALUES (0, NOW(), NOW(), '2008-09-22 15:00', '2008-09-22 16:00', 'Testi', 'Tämä on testi');
INSERT INTO `test_calendar_event` VALUES (0, NOW(), NOW(), '2008-09-23 08:00', '2008-09-23 10:00', 'Testi 2', 'Aamulle testi');
INSERT INTO `test_calendar_event` VALUES (0, NOW(), NOW(), '2008-09-24 12:00', '2008-09-24 13:30', 'Testi 3', 'Iltapäivätesti');
