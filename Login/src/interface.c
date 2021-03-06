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
create_window1 (void)
{
  GtkWidget *window1;
  GtkWidget *fixed1;
  GtkWidget *entry1;
  GtkWidget *entry2;
  GtkWidget *label1;
  GtkWidget *label2;
  GtkWidget *button2;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label5;
  GtkWidget *button3;
  GtkWidget *image3;
  GtkWidget *label6;
  GtkWidget *label3;
  GtkWidget *checkbutton1;
  GtkWidget *button1;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label4;

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (window1, 400, 300);
  gtk_window_set_title (GTK_WINDOW (window1), _("window1"));
  gtk_window_set_position (GTK_WINDOW (window1), GTK_WIN_POS_CENTER_ALWAYS);

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (window1), fixed1);

  entry1 = gtk_entry_new ();
  gtk_widget_show (entry1);
  gtk_fixed_put (GTK_FIXED (fixed1), entry1, 40, 72);
  gtk_widget_set_size_request (entry1, 320, 24);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry1), 8226);

  entry2 = gtk_entry_new ();
  gtk_widget_show (entry2);
  gtk_fixed_put (GTK_FIXED (fixed1), entry2, 40, 144);
  gtk_widget_set_size_request (entry2, 320, 24);
  gtk_entry_set_visibility (GTK_ENTRY (entry2), FALSE);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry2), 8226);

  label1 = gtk_label_new (_("Nom d'utilisateur"));
  gtk_widget_show (label1);
  gtk_fixed_put (GTK_FIXED (fixed1), label1, 40, 56);
  gtk_widget_set_size_request (label1, 112, 16);
  gtk_label_set_line_wrap (GTK_LABEL (label1), TRUE);

  label2 = gtk_label_new (_("Mot de passe"));
  gtk_widget_show (label2);
  gtk_fixed_put (GTK_FIXED (fixed1), label2, 40, 128);
  gtk_widget_set_size_request (label2, 88, 16);
  gtk_label_set_line_wrap (GTK_LABEL (label2), TRUE);

  button2 = gtk_button_new ();
  gtk_widget_show (button2);
  gtk_fixed_put (GTK_FIXED (fixed1), button2, 96, 264);
  gtk_widget_set_size_request (button2, 232, 24);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (button2), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image2 = gtk_image_new_from_stock ("gtk-goto-last", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label5 = gtk_label_new_with_mnemonic (_("Se connecter en tant qu'un visiteur"));
  gtk_widget_show (label5);
  gtk_box_pack_start (GTK_BOX (hbox2), label5, FALSE, FALSE, 0);

  button3 = gtk_button_new ();
  gtk_widget_show (button3);
  gtk_fixed_put (GTK_FIXED (fixed1), button3, 360, 272);
  gtk_widget_set_size_request (button3, 32, 24);

  image3 = gtk_image_new_from_stock ("gtk-quit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_container_add (GTK_CONTAINER (button3), image3);

  label6 = gtk_label_new ("");
  gtk_widget_show (label6);
  gtk_fixed_put (GTK_FIXED (fixed1), label6, 40, 24);
  gtk_widget_set_size_request (label6, 320, 24);

  label3 = gtk_label_new (_("Cacher le mot de passe"));
  gtk_widget_show (label3);
  gtk_fixed_put (GTK_FIXED (fixed1), label3, 64, 176);
  gtk_widget_set_size_request (label3, 136, 16);

  checkbutton1 = gtk_check_button_new_with_mnemonic ("");
  gtk_widget_show (checkbutton1);
  gtk_fixed_put (GTK_FIXED (fixed1), checkbutton1, 40, 176);
  gtk_widget_set_size_request (checkbutton1, 16, 16);
  gtk_toggle_button_set_active (GTK_TOGGLE_BUTTON (checkbutton1), TRUE);

  button1 = gtk_button_new ();
  gtk_widget_show (button1);
  gtk_fixed_put (GTK_FIXED (fixed1), button1, 96, 216);
  gtk_widget_set_size_request (button1, 232, 40);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (button1), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-go-forward", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label4 = gtk_label_new_with_mnemonic (_("Connexion"));
  gtk_widget_show (label4);
  gtk_box_pack_start (GTK_BOX (hbox1), label4, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) checkbutton1, "toggled",
                    G_CALLBACK (on_checkbutton1_toggled),
                    NULL);
  g_signal_connect ((gpointer) button1, "clicked",
                    G_CALLBACK (on_button1_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (window1, entry1, "entry1");
  GLADE_HOOKUP_OBJECT (window1, entry2, "entry2");
  GLADE_HOOKUP_OBJECT (window1, label1, "label1");
  GLADE_HOOKUP_OBJECT (window1, label2, "label2");
  GLADE_HOOKUP_OBJECT (window1, button2, "button2");
  GLADE_HOOKUP_OBJECT (window1, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (window1, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (window1, image2, "image2");
  GLADE_HOOKUP_OBJECT (window1, label5, "label5");
  GLADE_HOOKUP_OBJECT (window1, button3, "button3");
  GLADE_HOOKUP_OBJECT (window1, image3, "image3");
  GLADE_HOOKUP_OBJECT (window1, label6, "label6");
  GLADE_HOOKUP_OBJECT (window1, label3, "label3");
  GLADE_HOOKUP_OBJECT (window1, checkbutton1, "checkbutton1");
  GLADE_HOOKUP_OBJECT (window1, button1, "button1");
  GLADE_HOOKUP_OBJECT (window1, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (window1, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (window1, image1, "image1");
  GLADE_HOOKUP_OBJECT (window1, label4, "label4");

  return window1;
}

GtkWidget*
create_window2 (void)
{
  GtkWidget *window2;
  GtkWidget *fixed2;
  GtkWidget *progressbar1;
  GtkWidget *notebook1;
  GtkWidget *fixed5;
  GtkWidget *suivant01;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image6;
  GtkWidget *label24;
  GtkWidget *label23;
  GtkWidget *label22;
  GtkWidget *fixed3;
  GtkWidget *entry3;
  GtkWidget *entry4;
  GtkWidget *label11;
  GtkWidget *label12;
  GtkWidget *suivant02;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image4;
  GtkWidget *label13;
  GtkWidget *image10;
  GtkWidget *image11;
  GtkWidget *label29;
  GtkWidget *label8;
  GtkWidget *fixed4;
  GtkWidget *entry5;
  GtkWidget *entry6;
  GtkWidget *entry7;
  GtkWidget *entry8;
  GtkWidget *label16;
  GtkWidget *label17;
  GtkWidget *label15;
  GtkWidget *label18;
  GtkWidget *label20;
  GtkWidget *label21;
  GtkWidget *valider;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image5;
  GtkWidget *label14;
  GtkWidget *confirmer;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image9;
  GtkWidget *label28;
  GtkWidget *radiobutton1;
  GSList *radiobutton1_group = NULL;
  GtkWidget *radiobutton2;
  GtkObject *spinbutton1_adj;
  GtkWidget *spinbutton1;
  GtkObject *spinbutton2_adj;
  GtkWidget *spinbutton2;
  GtkObject *spinbutton3_adj;
  GtkWidget *spinbutton3;
  GtkWidget *label19;
  GtkWidget *label9;
  GtkWidget *image7;
  GtkWidget *image8;
  GtkWidget *label26;
  GtkWidget *label27;

  window2 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (window2, 400, 400);
  gtk_window_set_title (GTK_WINDOW (window2), _("window2"));
  gtk_window_set_position (GTK_WINDOW (window2), GTK_WIN_POS_CENTER_ALWAYS);

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (window2), fixed2);

  progressbar1 = gtk_progress_bar_new ();
  gtk_widget_show (progressbar1);
  gtk_fixed_put (GTK_FIXED (fixed2), progressbar1, 16, 32);
  gtk_widget_set_size_request (progressbar1, 368, 16);

  notebook1 = gtk_notebook_new ();
  gtk_widget_show (notebook1);
  gtk_fixed_put (GTK_FIXED (fixed2), notebook1, 16, 95);
  gtk_widget_set_size_request (notebook1, 368, 294);
  GTK_WIDGET_UNSET_FLAGS (notebook1, GTK_CAN_FOCUS);
  gtk_notebook_set_show_tabs (GTK_NOTEBOOK (notebook1), FALSE);

  fixed5 = gtk_fixed_new ();
  gtk_widget_show (fixed5);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed5);

  suivant01 = gtk_button_new ();
  gtk_widget_show (suivant01);
  gtk_fixed_put (GTK_FIXED (fixed5), suivant01, 152, 256);
  gtk_widget_set_size_request (suivant01, 80, 24);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (suivant01), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image6 = gtk_image_new_from_stock ("gtk-media-next", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox5), image6, FALSE, FALSE, 0);

  label24 = gtk_label_new_with_mnemonic (_("Suivant"));
  gtk_widget_show (label24);
  gtk_box_pack_start (GTK_BOX (hbox5), label24, FALSE, FALSE, 0);

  label23 = gtk_label_new (_("Bienvenue, puisque c'est la premi\303\250re fois que vous utilisez cette interface. Nous vous invitons \303\240 changer votre mot de passe et compl\303\251ter votre profil.\n\nClickez sur suivant pour continuer"));
  gtk_widget_show (label23);
  gtk_fixed_put (GTK_FIXED (fixed5), label23, 8, 64);
  gtk_widget_set_size_request (label23, 352, 128);
  gtk_label_set_justify (GTK_LABEL (label23), GTK_JUSTIFY_FILL);
  gtk_label_set_line_wrap (GTK_LABEL (label23), TRUE);

  label22 = gtk_label_new (_("label22"));
  gtk_widget_show (label22);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 0), label22);

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed3);

  entry3 = gtk_entry_new ();
  gtk_widget_show (entry3);
  gtk_fixed_put (GTK_FIXED (fixed3), entry3, 48, 72);
  gtk_widget_set_size_request (entry3, 272, 24);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry3), 8226);

  entry4 = gtk_entry_new ();
  gtk_widget_show (entry4);
  gtk_fixed_put (GTK_FIXED (fixed3), entry4, 48, 160);
  gtk_widget_set_size_request (entry4, 272, 24);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry4), 8226);

  label11 = gtk_label_new (_("Nouveau mot de passe"));
  gtk_widget_show (label11);
  gtk_fixed_put (GTK_FIXED (fixed3), label11, 48, 56);
  gtk_widget_set_size_request (label11, 136, 16);

  label12 = gtk_label_new (_("Confirmer le mot de passe"));
  gtk_widget_show (label12);
  gtk_fixed_put (GTK_FIXED (fixed3), label12, 48, 144);
  gtk_widget_set_size_request (label12, 160, 16);

  suivant02 = gtk_button_new ();
  gtk_widget_show (suivant02);
  gtk_fixed_put (GTK_FIXED (fixed3), suivant02, 152, 256);
  gtk_widget_set_size_request (suivant02, 80, 24);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (suivant02), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image4 = gtk_image_new_from_stock ("gtk-media-next", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox3), image4, FALSE, FALSE, 0);

  label13 = gtk_label_new_with_mnemonic (_("Suivant"));
  gtk_widget_show (label13);
  gtk_box_pack_start (GTK_BOX (hbox3), label13, FALSE, FALSE, 0);

  image10 = create_pixmap (window2, NULL);
  gtk_widget_show (image10);
  gtk_fixed_put (GTK_FIXED (fixed3), image10, 328, 73);
  gtk_widget_set_size_request (image10, 21, 21);

  image11 = create_pixmap (window2, NULL);
  gtk_widget_show (image11);
  gtk_fixed_put (GTK_FIXED (fixed3), image11, 328, 160);
  gtk_widget_set_size_request (image11, 21, 21);

  label29 = gtk_label_new ("");
  gtk_widget_show (label29);
  gtk_fixed_put (GTK_FIXED (fixed3), label29, 48, 24);
  gtk_widget_set_size_request (label29, 272, 16);

  label8 = gtk_label_new (_("label8"));
  gtk_widget_show (label8);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 1), label8);

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed4);

  entry5 = gtk_entry_new ();
  gtk_widget_show (entry5);
  gtk_fixed_put (GTK_FIXED (fixed4), entry5, 48, 32);
  gtk_widget_set_size_request (entry5, 104, 24);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry5), 8226);

  entry6 = gtk_entry_new ();
  gtk_widget_show (entry6);
  gtk_fixed_put (GTK_FIXED (fixed4), entry6, 232, 32);
  gtk_widget_set_size_request (entry6, 104, 24);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry6), 8226);

  entry7 = gtk_entry_new ();
  gtk_widget_show (entry7);
  gtk_fixed_put (GTK_FIXED (fixed4), entry7, 48, 80);
  gtk_widget_set_size_request (entry7, 288, 24);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry7), 8226);

  entry8 = gtk_entry_new ();
  gtk_widget_show (entry8);
  gtk_fixed_put (GTK_FIXED (fixed4), entry8, 48, 216);
  gtk_widget_set_size_request (entry8, 288, 24);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry8), 8226);

  label16 = gtk_label_new (_("Pr\303\251nom"));
  gtk_widget_show (label16);
  gtk_fixed_put (GTK_FIXED (fixed4), label16, 176, 40);
  gtk_widget_set_size_request (label16, 60, 16);

  label17 = gtk_label_new (_("CIN"));
  gtk_widget_show (label17);
  gtk_fixed_put (GTK_FIXED (fixed4), label17, 8, 88);
  gtk_widget_set_size_request (label17, 44, 16);

  label15 = gtk_label_new (_("Nom"));
  gtk_widget_show (label15);
  gtk_fixed_put (GTK_FIXED (fixed4), label15, 8, 40);
  gtk_widget_set_size_request (label15, 44, 15);

  label18 = gtk_label_new (_("Tel"));
  gtk_widget_show (label18);
  gtk_fixed_put (GTK_FIXED (fixed4), label18, 8, 224);
  gtk_widget_set_size_request (label18, 44, 16);

  label20 = gtk_label_new (_("Homme"));
  gtk_widget_show (label20);
  gtk_fixed_put (GTK_FIXED (fixed4), label20, 120, 128);
  gtk_widget_set_size_request (label20, 48, 16);

  label21 = gtk_label_new (_("Femme"));
  gtk_widget_show (label21);
  gtk_fixed_put (GTK_FIXED (fixed4), label21, 224, 128);
  gtk_widget_set_size_request (label21, 44, 16);

  valider = gtk_button_new ();
  gtk_widget_show (valider);
  gtk_fixed_put (GTK_FIXED (fixed4), valider, 200, 256);
  gtk_widget_set_size_request (valider, 80, 24);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (valider), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image5 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox4), image5, FALSE, FALSE, 0);

  label14 = gtk_label_new_with_mnemonic (_("Valider"));
  gtk_widget_show (label14);
  gtk_box_pack_start (GTK_BOX (hbox4), label14, FALSE, FALSE, 0);

  confirmer = gtk_button_new ();
  gtk_widget_show (confirmer);
  gtk_fixed_put (GTK_FIXED (fixed4), confirmer, 96, 256);
  gtk_widget_set_size_request (confirmer, 96, 24);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (confirmer), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image9 = gtk_image_new_from_stock ("gtk-refresh", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image9);
  gtk_box_pack_start (GTK_BOX (hbox6), image9, FALSE, FALSE, 0);

  label28 = gtk_label_new_with_mnemonic (_("Confirmer"));
  gtk_widget_show (label28);
  gtk_box_pack_start (GTK_BOX (hbox6), label28, FALSE, FALSE, 0);

  radiobutton1 = gtk_radio_button_new_with_mnemonic (NULL, "");
  gtk_widget_show (radiobutton1);
  gtk_fixed_put (GTK_FIXED (fixed4), radiobutton1, 96, 128);
  gtk_widget_set_size_request (radiobutton1, 16, 16);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton1), radiobutton1_group);
  radiobutton1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton1));

  radiobutton2 = gtk_radio_button_new_with_mnemonic (NULL, "");
  gtk_widget_show (radiobutton2);
  gtk_fixed_put (GTK_FIXED (fixed4), radiobutton2, 200, 128);
  gtk_widget_set_size_request (radiobutton2, 16, 16);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton2), radiobutton1_group);
  radiobutton1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton2));

  spinbutton1_adj = gtk_adjustment_new (1, 1, 31, 1, 10, 10);
  spinbutton1 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton1_adj), 1, 0);
  gtk_widget_show (spinbutton1);
  gtk_fixed_put (GTK_FIXED (fixed4), spinbutton1, 80, 171);
  gtk_widget_set_size_request (spinbutton1, 60, 24);

  spinbutton2_adj = gtk_adjustment_new (1, 1, 12, 1, 10, 10);
  spinbutton2 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton2_adj), 1, 0);
  gtk_widget_show (spinbutton2);
  gtk_fixed_put (GTK_FIXED (fixed4), spinbutton2, 176, 171);
  gtk_widget_set_size_request (spinbutton2, 60, 24);

  spinbutton3_adj = gtk_adjustment_new (1980, 1950, 2030, 1, 10, 10);
  spinbutton3 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbutton3_adj), 1, 0);
  gtk_widget_show (spinbutton3);
  gtk_fixed_put (GTK_FIXED (fixed4), spinbutton3, 272, 171);
  gtk_widget_set_size_request (spinbutton3, 60, 24);

  label19 = gtk_label_new (_("Date \nnaissance"));
  gtk_widget_show (label19);
  gtk_fixed_put (GTK_FIXED (fixed4), label19, 3, 168);
  gtk_widget_set_size_request (label19, 56, 32);
  gtk_label_set_justify (GTK_LABEL (label19), GTK_JUSTIFY_CENTER);

  label9 = gtk_label_new (_("label9"));
  gtk_widget_show (label9);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 2), label9);

  image7 = create_pixmap (window2, NULL);
  gtk_widget_show (image7);
  gtk_fixed_put (GTK_FIXED (fixed2), image7, 120, 57);
  gtk_widget_set_size_request (image7, 21, 21);

  image8 = create_pixmap (window2, NULL);
  gtk_widget_show (image8);
  gtk_fixed_put (GTK_FIXED (fixed2), image8, 232, 57);
  gtk_widget_set_size_request (image8, 21, 21);

  label26 = gtk_label_new ("");
  gtk_widget_show (label26);
  gtk_fixed_put (GTK_FIXED (fixed2), label26, 136, 51);
  gtk_widget_set_size_request (label26, 104, 32);
  gtk_label_set_line_wrap (GTK_LABEL (label26), TRUE);
  gtk_label_set_width_chars (GTK_LABEL (label26), 1);

  label27 = gtk_label_new ("");
  gtk_widget_show (label27);
  gtk_fixed_put (GTK_FIXED (fixed2), label27, 256, 51);
  gtk_widget_set_size_request (label27, 136, 32);
  gtk_label_set_line_wrap (GTK_LABEL (label27), TRUE);

  g_signal_connect ((gpointer) suivant01, "clicked",
                    G_CALLBACK (on_suivant01_clicked),
                    NULL);
  g_signal_connect ((gpointer) suivant02, "clicked",
                    G_CALLBACK (on_suivant02_clicked),
                    NULL);
  g_signal_connect ((gpointer) valider, "clicked",
                    G_CALLBACK (on_valider_clicked),
                    NULL);
  g_signal_connect ((gpointer) confirmer, "clicked",
                    G_CALLBACK (on_confirmer_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window2, window2, "window2");
  GLADE_HOOKUP_OBJECT (window2, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (window2, progressbar1, "progressbar1");
  GLADE_HOOKUP_OBJECT (window2, notebook1, "notebook1");
  GLADE_HOOKUP_OBJECT (window2, fixed5, "fixed5");
  GLADE_HOOKUP_OBJECT (window2, suivant01, "suivant01");
  GLADE_HOOKUP_OBJECT (window2, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (window2, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (window2, image6, "image6");
  GLADE_HOOKUP_OBJECT (window2, label24, "label24");
  GLADE_HOOKUP_OBJECT (window2, label23, "label23");
  GLADE_HOOKUP_OBJECT (window2, label22, "label22");
  GLADE_HOOKUP_OBJECT (window2, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (window2, entry3, "entry3");
  GLADE_HOOKUP_OBJECT (window2, entry4, "entry4");
  GLADE_HOOKUP_OBJECT (window2, label11, "label11");
  GLADE_HOOKUP_OBJECT (window2, label12, "label12");
  GLADE_HOOKUP_OBJECT (window2, suivant02, "suivant02");
  GLADE_HOOKUP_OBJECT (window2, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (window2, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (window2, image4, "image4");
  GLADE_HOOKUP_OBJECT (window2, label13, "label13");
  GLADE_HOOKUP_OBJECT (window2, image10, "image10");
  GLADE_HOOKUP_OBJECT (window2, image11, "image11");
  GLADE_HOOKUP_OBJECT (window2, label29, "label29");
  GLADE_HOOKUP_OBJECT (window2, label8, "label8");
  GLADE_HOOKUP_OBJECT (window2, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (window2, entry5, "entry5");
  GLADE_HOOKUP_OBJECT (window2, entry6, "entry6");
  GLADE_HOOKUP_OBJECT (window2, entry7, "entry7");
  GLADE_HOOKUP_OBJECT (window2, entry8, "entry8");
  GLADE_HOOKUP_OBJECT (window2, label16, "label16");
  GLADE_HOOKUP_OBJECT (window2, label17, "label17");
  GLADE_HOOKUP_OBJECT (window2, label15, "label15");
  GLADE_HOOKUP_OBJECT (window2, label18, "label18");
  GLADE_HOOKUP_OBJECT (window2, label20, "label20");
  GLADE_HOOKUP_OBJECT (window2, label21, "label21");
  GLADE_HOOKUP_OBJECT (window2, valider, "valider");
  GLADE_HOOKUP_OBJECT (window2, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (window2, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (window2, image5, "image5");
  GLADE_HOOKUP_OBJECT (window2, label14, "label14");
  GLADE_HOOKUP_OBJECT (window2, confirmer, "confirmer");
  GLADE_HOOKUP_OBJECT (window2, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (window2, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (window2, image9, "image9");
  GLADE_HOOKUP_OBJECT (window2, label28, "label28");
  GLADE_HOOKUP_OBJECT (window2, radiobutton1, "radiobutton1");
  GLADE_HOOKUP_OBJECT (window2, radiobutton2, "radiobutton2");
  GLADE_HOOKUP_OBJECT (window2, spinbutton1, "spinbutton1");
  GLADE_HOOKUP_OBJECT (window2, spinbutton2, "spinbutton2");
  GLADE_HOOKUP_OBJECT (window2, spinbutton3, "spinbutton3");
  GLADE_HOOKUP_OBJECT (window2, label19, "label19");
  GLADE_HOOKUP_OBJECT (window2, label9, "label9");
  GLADE_HOOKUP_OBJECT (window2, image7, "image7");
  GLADE_HOOKUP_OBJECT (window2, image8, "image8");
  GLADE_HOOKUP_OBJECT (window2, label26, "label26");
  GLADE_HOOKUP_OBJECT (window2, label27, "label27");

  return window2;
}

