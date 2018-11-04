typedef struct date {
  int jour;
  int mois;
  int anne;
} date;

typedef struct ficheperso_diet {
  char nom [50];
  char prenom [50];
  date datn;
  char tele [50];
  char mail [50];

} fp_diet;

typedef struct fichediet_diet {

  int taille;
  int poid;
  int calorie;
  char regime[50];

} fd_diet;

typedef struct cal_diet {

  int date;
  char heure[50];
  int capacite;

} c_diet;
