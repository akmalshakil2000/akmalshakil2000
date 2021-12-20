#include<iostream>
#include<string>

using namespace std;

int main()
{
  int umer;
  float obt, total, percentage;
  string naam;
  cout << "Yeh Program Aapko Aapka Result bataney ma Guide Karey ga!\n\nAap apna Naam Likhein: ";
  getline (cin, naam);
  cout << "\n\nAssalam-u-Alaikum "<<naam <<"!\n\nAb aap apni Age Likhein: ";
  cin >> umer;
  cout << "\n\nAcha, To Yaai aapka Naam \""<<naam <<"\" ha aur aap \""<<umer <<"\" Saal ke hein!\n\nTo ab aap Yeh bataein ke aapke Exams ke Total Marks kitne Hein? ";
  cin >> total;
  cout << "\n\nTo ab aap ke Yeh bataein ke aapne in Exams ma "<<total <<" mein se kitne marks Hasil kiye hein? ";
  cin >> obt;
  cout << "\n\nAapke Mutabiq Aapne apne Exams ma \""<<total <<"\" mein se \""<<obt <<"\" marks Hasil kiye hein!\n";
  percentage = (obt/total)*100;
  cout <<"\nAur is Hisaab se Aapki Percentage \""<<percentage <<"%\" bani ha!\n";
  if(percentage>=80 && percentage<=100)
  {
    cout << "Aur Aapka Grade \"A1\" hua ha!";
  }
  else if(percentage>=70 && percentage<80)
  {
    cout << "Aur Aapka Grade \"A\" hua ha!";
  }
  else if(percentage>=60 && percentage<70)
  {
    cout << "Aur Aapka Grade \"B\" hua ha!";
  }
  else if(percentage>=50 && percentage<60)
  {
    cout << "Aur Aapka Grade \"C\" hua ha!";
  }
  else if(percentage>=40 && percentage<50)
  {
    cout << "Aur Aapka Grade \"D\" hua ha!";
  }
  else if(percentage>=33 && percentage<40)
  {
    cout << "Aur Aapka Grade \"E\" hua ha!";
  }
  else(percentage>=0 && percentage<33);
  {
    cout << "Aur Unfortunately Aap Exams mein \"Fail\" hue hein! :(";
  }
  return 0;
}
