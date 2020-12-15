#ifndef XML_H
#define XML_H

#include "all.h"

void dbFromXML (GtkWidget *widget, GtkWidget *input) ;
int parseDoc (char *path) ;
int countForeignKeys (xmlNodePtr start) ;
int writeSQLTables (xmlNodePtr node) ;
Conf * initConf () ;

void createXMLFile (void) ;
int createDoc (void) ;
int duplicateTemplate (char *fileName) ;
int setRoot (xmlNodePtr root) ;
int addTableNode (xmlNodePtr root, Conf *conf) ;
int addColumnNode (xmlNodePtr table, Conf *conf) ;
int addMandatory (xmlNodePtr col, Conf *conf, int i) ;
int addNotMandatory (xmlNodePtr col, Conf *conf, int i) ;
int addPrimaryKey (xmlNodePtr col)  ;
int addForeignKey (xmlNodePtr col) ;

int writeXMLFile (char *fileName, xmlDocPtr doc) ;

#endif