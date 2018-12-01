/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_espacediet (void)
{
  GtkWidget *espacediet;
  GtkWidget *fixed3;
  GtkWidget *toolbar5;
  GtkIconSize tmp_toolbar_icon_size;
  GtkWidget *tmp_image;
  GtkWidget *acc_diet;
  GtkWidget *profil_diet;
  GtkWidget *dichediet;
  GtkWidget *fichemed_diet;
  GtkWidget *rend_diet;
  GtkWidget *dec_diet;
  GtkWidget *quit_diet;
  GtkWidget *notebookmain_diet;
  GtkWidget *vbox1;
  GtkWidget *vbox2;
  GtkWidget *fixed10;
  GtkWidget *bienven_diet;
  GtkWidget *label1;
  GtkWidget *empty_notebook_page;
  GtkWidget *label2;
  GtkWidget *label3;
  GtkWidget *label4;
  GtkWidget *label5;

  espacediet = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (espacediet, 750, 450);
  gtk_window_set_title (GTK_WINDOW (espacediet), _("Espace di\303\251t\303\251ticien"));

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (espacediet), fixed3);

  toolbar5 = gtk_toolbar_new ();
  gtk_widget_show (toolbar5);
  gtk_fixed_put (GTK_FIXED (fixed3), toolbar5, 85, 0);
  gtk_widget_set_size_request (toolbar5, 580, 72);
  gtk_toolbar_set_style (GTK_TOOLBAR (toolbar5), GTK_TOOLBAR_BOTH);
  tmp_toolbar_icon_size = gtk_toolbar_get_icon_size (GTK_TOOLBAR (toolbar5));

  tmp_image = gtk_image_new_from_stock ("gtk-home", tmp_toolbar_icon_size);
  gtk_widget_show (tmp_image);
  acc_diet = (GtkWidget*) gtk_tool_button_new (tmp_image, _("Accueil"));
  gtk_widget_show (acc_diet);
  gtk_tool_item_set_expand (GTK_TOOL_ITEM (acc_diet), TRUE);
  gtk_tool_item_set_homogeneous (GTK_TOOL_ITEM (acc_diet), FALSE);
  gtk_container_add (GTK_CONTAINER (toolbar5), acc_diet);

  tmp_image = gtk_image_new_from_stock ("gtk-orientation-portrait", tmp_toolbar_icon_size);
  gtk_widget_show (tmp_image);
  profil_diet = (GtkWidget*) gtk_tool_button_new (tmp_image, _("Profil"));
  gtk_widget_show (profil_diet);
  gtk_tool_item_set_expand (GTK_TOOL_ITEM (profil_diet), TRUE);
  gtk_container_add (GTK_CONTAINER (toolbar5), profil_diet);

  tmp_image = gtk_image_new_from_stock ("gtk-copy", tmp_toolbar_icon_size);
  gtk_widget_show (tmp_image);
  dichediet = (GtkWidget*) gtk_tool_button_new (tmp_image, _("Fiches di\303\251t\303\251tique"));
  gtk_widget_show (dichediet);
  gtk_tool_item_set_homogeneous (GTK_TOOL_ITEM (dichediet), FALSE);
  gtk_container_add (GTK_CONTAINER (toolbar5), dichediet);

  tmp_image = gtk_image_new_from_stock ("gtk-index", tmp_toolbar_icon_size);
  gtk_widget_show (tmp_image);
  fichemed_diet = (GtkWidget*) gtk_tool_button_new (tmp_image, _("Fiches m\303\251dicaux"));
  gtk_widget_show (fichemed_diet);
  gtk_tool_item_set_homogeneous (GTK_TOOL_ITEM (fichemed_diet), FALSE);
  gtk_container_add (GTK_CONTAINER (toolbar5), fichemed_diet);

  tmp_image = gtk_image_new_from_stock ("gtk-select-color", tmp_toolbar_icon_size);
  gtk_widget_show (tmp_image);
  rend_diet = (GtkWidget*) gtk_tool_button_new (tmp_image, _("Les Rendez-vous"));
  gtk_widget_show (rend_diet);
  gtk_tool_item_set_homogeneous (GTK_TOOL_ITEM (rend_diet), FALSE);
  gtk_container_add (GTK_CONTAINER (toolbar5), rend_diet);

  tmp_image = gtk_image_new_from_stock ("gtk-goto-first", tmp_toolbar_icon_size);
  gtk_widget_show (tmp_image);
  dec_diet = (GtkWidget*) gtk_tool_button_new (tmp_image, _("D\303\251connexion"));
  gtk_widget_show (dec_diet);
  gtk_container_add (GTK_CONTAINER (toolbar5), dec_diet);

  tmp_image = gtk_image_new_from_stock ("gtk-quit", tmp_toolbar_icon_size);
  gtk_widget_show (tmp_image);
  quit_diet = (GtkWidget*) gtk_tool_button_new (tmp_image, _("Quitter"));
  gtk_widget_show (quit_diet);
  gtk_container_add (GTK_CONTAINER (toolbar5), quit_diet);

  notebookmain_diet = gtk_notebook_new ();
  gtk_widget_show (notebookmain_diet);
  gtk_fixed_put (GTK_FIXED (fixed3), notebookmain_diet, 0, 72);
  gtk_widget_set_size_request (notebookmain_diet, 750, 378);
  GTK_WIDGET_UNSET_FLAGS (notebookmain_diet, GTK_CAN_FOCUS);
  gtk_notebook_set_show_tabs (GTK_NOTEBOOK (notebookmain_diet), FALSE);
  gtk_notebook_set_show_border (GTK_NOTEBOOK (notebookmain_diet), FALSE);

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox1);
  gtk_container_add (GTK_CONTAINER (notebookmain_diet), vbox1);

  vbox2 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox2);
  gtk_box_pack_start (GTK_BOX (vbox1), vbox2, TRUE, TRUE, 0);

  fixed10 = gtk_fixed_new ();
  gtk_widget_show (fixed10);
  gtk_box_pack_start (GTK_BOX (vbox2), fixed10, TRUE, TRUE, 0);

  bienven_diet = gtk_label_new (_("<span  size=\"24000\" style=\"italic\">Bienvenue \303\240 l'espace di\303\251t\303\251tique !</span>"));
  gtk_widget_show (bienven_diet);
  gtk_fixed_put (GTK_FIXED (fixed10), bienven_diet, 123, 152);
  gtk_widget_set_size_request (bienven_diet, 504, 29);
  gtk_label_set_use_markup (GTK_LABEL (bienven_diet), TRUE);

  label1 = gtk_label_new (_("label1"));
  gtk_widget_show (label1);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebookmain_diet), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebookmain_diet), 0), label1);

  empty_notebook_page = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (empty_notebook_page);
  gtk_container_add (GTK_CONTAINER (notebookmain_diet), empty_notebook_page);

  label2 = gtk_label_new (_("label2"));
  gtk_widget_show (label2);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebookmain_diet), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebookmain_diet), 1), label2);

  empty_notebook_page = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (empty_notebook_page);
  gtk_container_add (GTK_CONTAINER (notebookmain_diet), empty_notebook_page);

  label3 = gtk_label_new (_("label3"));
  gtk_widget_show (label3);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebookmain_diet), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebookmain_diet), 2), label3);

  empty_notebook_page = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (empty_notebook_page);
  gtk_container_add (GTK_CONTAINER (notebookmain_diet), empty_notebook_page);

  label4 = gtk_label_new (_("label4"));
  gtk_widget_show (label4);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebookmain_diet), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebookmain_diet), 3), label4);

  empty_notebook_page = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (empty_notebook_page);
  gtk_container_add (GTK_CONTAINER (notebookmain_diet), empty_notebook_page);

  label5 = gtk_label_new (_("label5"));
  gtk_widget_show (label5);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebookmain_diet), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebookmain_diet), 4), label5);

  g_signal_connect ((gpointer) acc_diet, "clicked",
                    G_CALLBACK (on_accuei_diet_clicked),
                    NULL);
  g_signal_connect ((gpointer) profil_diet, "clicked",
                    G_CALLBACK (on_profil_diet_clicked),
                    NULL);
  g_signal_connect ((gpointer) dichediet, "clicked",
                    G_CALLBACK (on_fchdiet_diet_clicked),
                    NULL);
  g_signal_connect ((gpointer) fichemed_diet, "clicked",
                    G_CALLBACK (on_fichemed_diet_clicked),
                    NULL);
  g_signal_connect ((gpointer) rend_diet, "clicked",
                    G_CALLBACK (on_rendez_diet_clicked),
                    NULL);
  g_signal_connect ((gpointer) dec_diet, "clicked",
                    G_CALLBACK (on_dec_diet_clicked),
                    NULL);
  g_signal_connect ((gpointer) quit_diet, "clicked",
                    G_CALLBACK (on_quit_diet_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (espacediet, espacediet, "espacediet");
  GLADE_HOOKUP_OBJECT (espacediet, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (espacediet, toolbar5, "toolbar5");
  GLADE_HOOKUP_OBJECT (espacediet, acc_diet, "acc_diet");
  GLADE_HOOKUP_OBJECT (espacediet, profil_diet, "profil_diet");
  GLADE_HOOKUP_OBJECT (espacediet, dichediet, "dichediet");
  GLADE_HOOKUP_OBJECT (espacediet, fichemed_diet, "fichemed_diet");
  GLADE_HOOKUP_OBJECT (espacediet, rend_diet, "rend_diet");
  GLADE_HOOKUP_OBJECT (espacediet, dec_diet, "dec_diet");
  GLADE_HOOKUP_OBJECT (espacediet, quit_diet, "quit_diet");
  GLADE_HOOKUP_OBJECT (espacediet, notebookmain_diet, "notebookmain_diet");
  GLADE_HOOKUP_OBJECT (espacediet, vbox1, "vbox1");
  GLADE_HOOKUP_OBJECT (espacediet, vbox2, "vbox2");
  GLADE_HOOKUP_OBJECT (espacediet, fixed10, "fixed10");
  GLADE_HOOKUP_OBJECT (espacediet, bienven_diet, "bienven_diet");
  GLADE_HOOKUP_OBJECT (espacediet, label1, "label1");
  GLADE_HOOKUP_OBJECT (espacediet, label2, "label2");
  GLADE_HOOKUP_OBJECT (espacediet, label3, "label3");
  GLADE_HOOKUP_OBJECT (espacediet, label4, "label4");
  GLADE_HOOKUP_OBJECT (espacediet, label5, "label5");

  return espacediet;
}
