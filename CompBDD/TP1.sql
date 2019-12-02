SET SERVEROUTPUT ON SIZE 30000;
DECLARE
v_nom varchar2(25):='Caddet';
v_prenom varchar2(25):='Etienne';
BEGIN
DBMS_OUTPUT.PUT_LINE('Mon nom est ' || v_nom || ' et contient ' || length(v_nom) || ' caractères et mon prénom est ' || v_prenom || ' et contient ' || length(v_prenom) || ' caractères'); 
END;


SET SERVEROUTPUT ON SIZE 30000;
DECLARE
v_age NUMBER:=25;
v_nom varchar2(25):='Caddet';
v_prenom varchar2(25):='Etienne';
v_date DATE:='15 5 2001';
BEGIN
DBMS_OUTPUT.PUT_LINE('Mon age est ' || v_age || ' et contient ' || length(v_age) || ' caractères et mon prénom est ' || v_prenom || ' et contient ' || length(v_prenom) || ' caractères'); 
DBMS_OUTPUT.PUT_LINE(v_prenom || ' est né le ' || v_date);
END;

SET SERVEROUTPUT ON SIZE 30000;
DECLARE
  v_age NUMBER:=25;
  v_nom varchar2(25):='Cacdet';
  v_prenom varchar2(25):='Etienne';
  v_date DATE:='15 5 2001';
BEGIN
  DBMS_OUTPUT.PUT_LINE('Mon age est ' || v_age || ' et contient ' || length(v_age) || ' caractères et mon prénom est ' || v_prenom || ' et contient ' || length(v_prenom) || ' caractères'); 
  DBMS_OUTPUT.PUT_LINE(v_prenom || ' est né le ' || v_date);
  IF v_nom LIKE '__c%' AND v_prenom LIKE '__c%' THEN 
    DBMS_OUTPUT.PUT_LINE('Votre nom et votre prénom contiennent un c en 3eme position');
  ELSE
    DBMS_OUTPUT.PUT_LINE('PAS de "c" en 3 eme position');
  end if;
END;

SET SERVEROUTPUT ON SIZE 30000;
DECLARE
  v_nb NUMBER:=10;
BEGIN
  LOOP
    DBMS_OUTPUT.PUT_LINE(v_nb);
    v_nb := v_nb+1;
    EXIT WHEN v_nb = 20;
  END LOOP;
END;

SET SERVEROUTPUT ON SIZE 30000;
DECLARE
  v_nb NUMBER :=10;
  v_cpt NUMBER:=0;
BEGIN
  WHILE v_cpt<10 LOOP
    DBMS_OUTPUT.PUT_LINE(v_nb);
    v_nb := v_nb*10;
    v_cpt := v_cpt + 1;
  END LOOP;
END;

SET SERVEROUTPUT ON SIZE 30000;
DECLARE
  v_nb NUMBER:=0;
BEGIN
  FOR v_nb IN 1..10 LOOP
    DBMS_OUTPUT.PUT_LINE(v_nb);
  END LOOP;
END;



    
SET SERVEROUTPUT ON SIZE 30000;
DECLARE
  v_krunal emp%rowtype;
BEGIN
  SELECT * INTO v_krunal FROM EMP WHERE ename='KRUNAL';
  dbms_output.put_line(v_krunal.ename || ' ' || v_krunal.title || ' ' ||v_krunal.city);
END;

SET SERVEROUTPUT ON SIZE 30000;
DECLARE
  v_ville emp%rowtype;
BEGIN
  SELECT * INTO v_ville FROM EMP WHERE city='Toronto';
  dbms_output.put_line(v_ville.ename || ' ' || v_ville.title || ' ' ||v_ville.city);
END;


SET SERVEROUTPUT ON SIZE 30000;
DECLARE
  v_cpt NUMBER:=1;
  v_n NUMBER;
BEGIN
  SELECT COUNT(*) INTO v_n FROM emp;
  FOR v_cpt IN 1..v_n LOOP
    dbms_output.put_line(v_cpt);
  END LOOP;
END;


SET SERVEROUTPUT ON SIZE 30000;
DECLARE
  v_cpt NUMBER:=1;
  v_n NUMBER;
  v_employe emp%rowtype;
BEGIN
  SELECT COUNT(*) INTO v_n FROM emp;
  FOR v_cpt IN 1..v_n LOOP
    SELECT * INTO v_employe FROM emp WHERE ENO like ('E'||v_cpt);
    dbms_output.put_line(v_employe.ename);
  END LOOP;
END;

--si possible afficher les noms correspondant aux durees (sans les curseurs mais bon...)
SET SERVEROUTPUT ON SIZE 30000;
DECLARE
  v_cpt NUMBER:=1;
  v_n NUMBER;
  v_employe works%rowtype;
BEGIN
  SELECT COUNT(*) INTO v_n FROM works;
  SELECT COUNT(*) INTO v_n FROM works;
  FOR v_cpt IN 1..v_n LOOP
    SELECT * INTO v_employe FROM works NATURAL JOIN emp WHERE ENO like ('E'||v_cpt);
    IF (MOD(v_employe.dur,2)=0) THEN
      dbms_output.put_line(v_employe.dur);
      END IF;
  END LOOP;
END;





SET SERVEROUTPUT ON SIZE 30000;
DECLARE
  v_cpt NUMBER;
  v_n NUMBER;
BEGIN
  SELECT COUNT(*) INTO v_n FROM emp;
  v_cpt := v_n + 1;
  FOR v_cpt IN (v_n+1)..(v_n+5) LOOP
   INSERT INTO emp VALUES ('E'||v_cpt, 'E'||v_cpt, 'PROGRAMMER', 'NEW YORK');
  END LOOP;
END;


SET SERVEROUTPUT ON SIZE 30000;
BEGIN
      UPDATE emp SET title='SUPPORT STAFF' WHERE title='PROGRAMMER' AND city='NEW YORK';
END;

SET SERVEROUTPUT ON SIZE 30000;
DECLARE
  v_cpt NUMBER:=1;
  v_n NUMBER;
  v_employe works%rowtype;
  v_
BEGIN
  SELECT COUNT(*) INTO v_n FROM works;
  SELECT COUNT(*) INTO v_n FROM works;
  FOR v_cpt IN 1..v_n LOOP
    SELECT * INTO v_employe FROM works NATURAL JOIN emp WHERE ENO like ('E'||v_cpt);
    IF (MOD(v_employe.dur,2)=0) THEN
      dbms_output.put_line(v_employe.dur);
      END IF;
  END LOOP;
END;