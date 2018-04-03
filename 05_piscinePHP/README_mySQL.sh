rm -rf ~/goinfre/.data
.i/mysql.server init-db
	returns:
	A password is generated for root@localhost: #fUo<uumA40o
	To change your password: ./mysql.server reset-pass <new-password>

./mysql.server start
	returns:
	You can connect to your database using: mysql -u root -p

./mysql -u root -p
+ password (see up) =>>     #fUo<uumA40o
	returns:
	ERROR 1045 (28000): Access denied for user 'root'@'localhost' (using password: YES)




Mise a jour de la variable $PATH:
	export PATH=~/http/bin/:$PATH


ps waux | pgrep mysql    => affiche le port untilise par mysql
kill -9 #####
PhpMyAdmin



netstat -an | grep -i listen

Holà,
Ça ne sert à rien de faire un rm du http
Dans la plus part des cas : une instance d’apache est déjà lancée ou mysql.
Pour le vérifier il faut faire un peu de Shell (et le Shell c’est génial !!)
	`netstat -an | pgrep -i listen`
	cette commande vous affichera les ports actuellement ouvert sur votre mac.

Si PAMP n’est pas start,
vous n’êtes pas sensé avoir de :
	port 80XX et
	port 3306 en LISTEN

- premier cas, des ports 80XX sont ouvert
	`ps waux | pgrep httpd `
	cela vous affichera les pids apache qu’il faudra Kill avec la commande `kill -9 <pid>`

- second cas, le port 3306 est ouvert
	`ps waux | grep mysql` il faudra cette fois kill le pid 

Si le kill ne fonctionne pas, il faut fermer PAMP,
	`rm ~/goinfre/.data`
	essayer de kill à nouveau mysql
	et relancer PAMP
	(il mettra environ 30 secondes à se relancer car il va recréer une base de donnée vierge)

Puis:
	./mysql.server reset-pass toto
	~/http/bin/mysql -uroot -p
	toto

###################################################################
	help

	For information about MySQL products and services, visit:
	   http://www.mysql.com/
	   For developer information, including the MySQL Reference Manual, visit:
	      http://dev.mysql.com/
		  To buy MySQL Enterprise support, training, or other products, visit:
		     https://shop.mysql.com/

			 List of all MySQL commands:
			 Note that all text commands must be first on line and end with ';'
			 ?         (\?) Synonym for `help'.
			 clear     (\c) Clear the current input statement.
			 connect   (\r) Reconnect to the server. Optional arguments are db and host.
			 delimiter (\d) Set statement delimiter.
			 edit      (\e) Edit command with $EDITOR.
			 ego       (\G) Send command to mysql server, display result vertically.
			 exit      (\q) Exit mysql. Same as quit.
			 go        (\g) Send command to mysql server.
			 help      (\h) Display this help.
			 nopager   (\n) Disable pager, print to stdout.
			 notee     (\t) Don't write into outfile.
			 pager     (\P) Set PAGER [to_pager]. Print the query results via PAGER.
			 print     (\p) Print current command.
			 prompt    (\R) Change your mysql prompt.
			 quit      (\q) Quit mysql.
			 rehash    (\#) Rebuild completion hash.
			 source    (\.) Execute an SQL script file. Takes a file name as an argument.
			 status    (\s) Get status information from the server.
			 system    (\!) Execute a system shell command.
			 tee       (\T) Set outfile [to_outfile]. Append everything into given outfile.
			 use       (\u) Use another database. Takes database name as argument.
			 charset   (\C) Switch to another charset. Might be needed for processing binlog with multi-byte charsets.
			 warnings  (\W) Show warnings after every statement.
			 nowarning (\w) Don't show warnings after every statement.
			 resetconnection(\x) Clean session context.

			 For server side help, type 'help contents'

#############################################
