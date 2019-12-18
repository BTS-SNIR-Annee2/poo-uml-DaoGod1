#ifndef ARTICLE_H
#define ARTICLE_H
#include <iostream>
#include <string>

class Article
{
   private:
      std::string titre;
      double prix;

   public:
      Article(std::string titre="", double prix=0.);

      std::string getTitre() const;
      double getPrix() const;
      void setTitre(std::string titre);
      void setPrix(double prix);
};
#endif //ARTICLE_H
