SELECT PERSON.FIRSTNAME , PERSON.LASTNAME, ADDRESS.CITY , ADDRESS.STATE FROM PERSON LEFT JOIN ADDRESS ON PERSON.PERSONID= ADDRESS.PERSONID;