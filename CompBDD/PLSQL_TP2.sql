SET SERVEROUTPUT ON SIZE 30000;
BEGIN
  FOR x IN (SELECT * FROM emp WHERE city='Toronto') LOOP
    dbms_Output.Put_Line( x.ename || ' ' || x.title || ' should REALLY be raised :D');
  END LOOP;
END;


-- Curseur implicite
SET SERVEROUTPUT ON SIZE 30000;
DECLARE
  n_lignes NUMBER;
BEGIN
  DELETE FROM emp WHERE title='TRAIN';
  n_lignes := SQL%ROWCOUNT;
  dbms_Output.Put_Line('il y a ' || n_lignes || ' trains supprimés');
END;

-- Curseur explicite
SET SERVEROUTPUT ON SIZE 30000;
DECLARE
  CURSOR c_emp IS SELECT eno, ename FROM emp WHERE title='MANAGER';
  v_id emp.eno%TYPE;
  v_nom emp.ename%TYPE;
BEGIN
  OPEN c_emp;
  LOOP
    FETCH c_emp INTO v_id, v_nom;
    EXIT WHEN c_emp%NOTFOUND;
    DBMS_OUTPUT.PUT_LINE(v_id || ' ' || v_nom);
  END LOOP;
  CLOSE c_emp;
END;


-- Boucle for pas besoin d'OPEN FETCH et CLOSE
SET SERVEROUTPUT ON SIZE 30000;
DECLARE
  CURSOR c_emp IS SELECT ename, city FROM emp;
BEGIN
  FOR v_emp in c_emp LOOP 
    DBMS_OUTPUT.PUT_LINE('Nom : ' || v_emp.ename || '    Ville : ' || v_emp.city);
  END LOOP;
END;

-- Boucle for pas besoin d'OPEN FETCH et CLOSE
SET SERVEROUTPUT ON SIZE 30000;
DECLARE
  CURSOR c_work (duree NUMBER) IS SELECT eno, dur FROM works WHERE dur = duree;
BEGIN
  DBMS_OUTPUT.PUT_LINE('6:');
  FOR v_work IN c_work(6) LOOP 
    DBMS_OUTPUT.PUT_LINE('NUM : ' || v_work.eno || '    DUREE : ' || v_work.dur);
  END LOOP;
  DBMS_OUTPUT.PUT_LINE('9:');
  FOR v_work IN c_work(9) LOOP 
    DBMS_OUTPUT.PUT_LINE('NUM : ' || v_work.eno || '    DUREE : ' || v_work.dur);
  END LOOP;
END;


-- a
SET SERVEROUTPUT ON SIZE 30000;
DECLARE
  CURSOR c_emp IS SELECT * FROM emp;
BEGIN
  FOR employe IN c_emp LOOP
    DBMS_OUTPUT.PUT_LINE('Nom: ' || employe.ename);
  END LOOP;
END;

-- b
SET SERVEROUTPUT ON SIZE 30000;
DECLARE
  CURSOR c_emp IS SELECT ename FROM emp;
  nom_emp emp.ename%TYPE;
BEGIN
  OPEN c_emp;
  FETCH c_emp INTO nom_emp;
  WHILE c_emp%FOUND LOOP
    DBMS_OUTPUT.PUT_LINE(nom_emp);
    FETCH c_emp INTO nom_emp;
  END LOOP;
  CLOSE c_emp;
END;

-- c
SET SERVEROUTPUT ON SIZE 30000;
DECLARE
  CURSOR c_emp (titre VARCHAR) IS SELECT ename, title FROM emp WHERE title = titre;
BEGIN
  DBMS_OUTPUT.PUT_LINE('PROGRAMMER:');
  FOR v_emp IN c_emp('PROGRAMMER') LOOP
    DBMS_OUTPUT.PUT_LINE(v_emp.ename || ' should really be raised');
  END LOOP;
END;

-- d
SET SERVEROUTPUT ON SIZE 30000;
DECLARE
  CURSOR c_emp IS 
  SELECT ename, salary  FROM emp, pay WHERE emp.title = pay.title;
BEGIN
  FOR v_emp IN c_emp LOOP
    DBMS_OUTPUT.PUT_LINE(v_emp.ename || ' est payé ' || v_emp.salary || '$');
  END LOOP;
END;

-- e
SET SERVEROUTPUT ON SIZE 30000;
DECLARE
  CURSOR c_emp IS 
    SELECT ename, salary  FROM emp, pay WHERE emp.title = pay.title;
  v_moy NUMBER := 0;
BEGIN
  SELECT AVG(salary) INTO v_moy FROM emp, pay WHERE emp.title = pay.title;
  FOR v_emp IN c_emp LOOP
    IF v_emp.salary > v_moy THEN
      v_emp.salary := v_emp.salary * 1.1;
      DBMS_OUTPUT.PUT_LINE(RPAD(v_emp.ename, 10, ' ') || v_emp.salary);
    ELSE
      v_emp.salary := v_emp.salary * 0.9;
      DBMS_OUTPUT.PUT_LINE(RPAD(v_emp.ename, 10, ' ') || v_emp.salary);
    END IF;
  END LOOP;
END;

-- f
SET SERVEROUTPUT ON SIZE 30000;
DECLARE
  CURSOR c_emp IS 
    SELECT AVG(salary) AS moy, city FROM emp, pay 
    WHERE emp.title = pay.title GROUP BY city;
BEGIN
  FOR v_emp IN c_emp LOOP
    DBMS_OUTPUT.PUT_LINE(RPAD(v_emp.city, 10, ' ') || v_emp.moy);
  END LOOP;
END;

-- g
SET SERVEROUTPUT ON SIZE 30000;
DECLARE
  CURSOR c_emp (ville VARCHAR) IS 
    SELECT AVG(salary) as moy FROM emp, pay
    WHERE emp.title = pay.title AND city = ville;
  CURSOR c_ville IS SELECT DISTINCT city FROM emp;
  v_moy NUMBER;
BEGIN
  FOR v_ville IN c_ville LOOP
    OPEN c_emp(v_ville.city); -- toujours déclarer les paramètres
    FETCH c_emp INTO v_moy;
    CLOSE c_emp;
    DBMS_OUTPUT.PUT_LINE(v_ville.city || ' ' || v_moy);
  END LOOP;
END;
