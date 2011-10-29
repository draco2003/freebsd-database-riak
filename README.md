FreeBSD port for riak
=======

This is a testing place for a FreeBSD port for riak. 
Riak is not currently in the FreeBSD ports tree.
The goal of this project is to get a working port to submit to the ports tree.


Installation
---------
* Copy the riak folder to /usr/ports/database/ 

* cd to /usr/ports/database/riak/

* make 


Test
--------

* cd work/riak-1.0.1/rel/riak/

* ./bin/riak chkconfig

* ./bin/riak start

* ./bin/riak-admin member_status

Status
--------

This is currently a test to see if i could get it up and running.
It does not currently install into your main FreeBSD install.

Todo
--------

* create rc.d script to managing the riak server

* configure port to install files to FreeBSD appropriate locations.

* configure port to cleanup all installed files

How to Contribute
---------------------

You're interested in contributing to this project? Sweet!

fork Tattle from here: http://github.com/draco2003/freebsd-database-riak

1. Clone your fork
2. Hackit up
3. Push the branch up to GitHub
4. Send a pull request to the draco2003/freebsd-database-riak project.

We'll do our best to get your changes in as soon as possible!
