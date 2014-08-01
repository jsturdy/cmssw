#include <bitset>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <string>
#include <vector>

namespace {
  struct dictionary {
    
    std::map<std::string,double> dummyMapd;
    std::map<std::string,float > dummyMapf;

  std::allocator<char> achar;
  std::allocator<double> adouble;
  std::allocator<int> aint;
  std::allocator<short> ashort;
  std::bitset<7> dummybitset7;
  std::deque<int> dummy18;
  std::list<int> dummy17;
  std::map<int,int> dummywm4;
  std::map<int,std::pair<double,double> > dummymipdd;
  std::map<int,std::pair<unsigned int,unsigned int> > dummyypwmv9;
  std::map<int,std::pair<unsigned long,unsigned long> > dummyypwmv10;
  std::map<int,unsigned int> dummymiui;
  std::map<short,short> dummymss;
  std::map<short,unsigned int> dummymsui;
  std::map<std::basic_string<char>,bool> dummymsb;
  std::map<std::basic_string<char>,int> dummyypwmv7;
  std::map<std::basic_string<char>,std::map<std::basic_string<char>,std::basic_string<char> > > dummymsmss;
  std::map<std::basic_string<char>,std::pair<unsigned int,unsigned int> > dummymspii;
  std::map<std::basic_string<char>,std::vector<std::basic_string<char> > > dummyypwmv11;
  std::map<std::basic_string<char>,std::vector<std::pair<std::basic_string<char>,double> > > dummyypwmv8;
  std::map<std::basic_string<char>,unsigned int> dummyypwmv12;
  std::map<std::basic_string<char>,unsigned long> dummyypwmv13;
  std::map<std::pair<int,int>,double> dummympii_d;
  std::map<std::pair<int,int>,int> dummympii_i;
  std::map<std::pair<short,short>,std::pair<short,std::vector<short> > > dummympsspsvs;
  std::map<std::string,std::string> dummymss1;
  std::map<unsigned int,bool> dummywm5;
  std::map<unsigned int,double> dummywmuid;
  std::map<unsigned int,float> dummywmuif;
  std::map<unsigned int,int> dummywm2_1;
  std::map<unsigned int,short> dummywm6;
  std::map<unsigned int,std::basic_string<char> > dummymuis;
  std::map<unsigned int,std::pair<unsigned int,unsigned int> > dummymuipuu;
  std::map<unsigned int,std::vector<std::pair<unsigned int,bool> > > dummywmv2_0;
  std::map<unsigned int,std::vector<std::pair<unsigned int,double> > >dummywmv2_1;
  std::map<unsigned int,std::vector<std::pair<unsigned int,float> > >dummywmv2_2;
  std::map<unsigned int,std::vector<std::pair<unsigned int,int> > >dummywmv2_3;
  std::map<unsigned int,std::vector<unsigned int> > dummywmv2;
  std::map<unsigned int,unsigned int> dummywm2;
  std::map<unsigned long long,std::basic_string<char> > dummyypwmv5;
  std::map<unsigned long,std::vector<unsigned long> > dummywmv1;
  std::map<unsigned long,unsigned long> dummywm1;
  std::map<unsigned short,float> dummyusf;
  std::map<unsigned short,std::vector<unsigned short> > dummypwmv3;
  std::map<unsigned short,unsigned short> dummywm3;
  std::multimap<double,double> dummyypwmv6;
  std::pair<const int,int> newDummy00;
  std::pair<const int,std::pair<double,double> > newDummy01;
  std::pair<const int,std::pair<unsigned int,unsigned int> > newDummy02;
  std::pair<const int,std::pair<unsigned long,unsigned long> > newDummy03;
  std::pair<const int,unsigned int> newDummy04;
  std::pair<const short,short> newDummy05;
  std::pair<const short,unsigned int> newDummy06;
  std::pair<const std::basic_string<char>,bool> newDummy06b;
  std::pair<const std::basic_string<char>,int> newDummy07;
  std::pair<const std::basic_string<char>,std::map<std::basic_string<char>,std::basic_string<char> > > newDummy08;
  std::pair<const std::basic_string<char>,std::pair<unsigned int,unsigned int> > newDummy09;
  std::pair<const std::basic_string<char>,std::vector<std::basic_string<char> > > newDummy10;
  std::pair<const std::basic_string<char>,std::vector<std::pair<std::basic_string<char>,double> > > newDummy11;
  std::pair<const std::basic_string<char>,unsigned int> newDummy11a;
  std::pair<const std::pair<int,int>,int> newDummy12;
  std::pair<const std::pair<short,short>,std::pair<short,std::vector<short> > > newDummy13;
  std::pair<const std::string,std::string> dummymss1_valuetype;
  std::pair<const unsigned int,bool> newDummy14;
  std::pair<const unsigned int,double> newDummy15;
  std::pair<const unsigned int,float> dummywp6a;
  std::pair<const unsigned int,int> newDummy16;
  std::pair<const unsigned int,short> dummywm6_valuetype;
  std::pair<const unsigned int,std::basic_string<char> > dummypcis;
  std::pair<const unsigned int,std::pair<unsigned int,unsigned int> > newDummy17;
  std::pair<const unsigned int,std::vector<std::pair<unsigned int,bool> > > newDummy17a;
  std::pair<const unsigned int,std::vector<std::pair<unsigned int,double> > > newDummy18;
  std::pair<const unsigned int,std::vector<unsigned int> > newDummy19;
  std::pair<const unsigned int,unsigned int> dummywm2_valuetype;
  std::pair<const unsigned long long,std::basic_string<char> > newDummy20;
  std::pair<const unsigned long,std::vector<unsigned long> > newDummy21;
  std::pair<const unsigned long,unsigned long> newDummy22;
  std::pair<const unsigned short,float> newDummy23;
  std::pair<const unsigned short,std::vector<unsigned short> > newDummy24;
  std::pair<const unsigned short,unsigned short> newDummy25;
  std::pair<double,double> dummywp7;
  std::pair<double,std::vector<double> > dummywp7v;
  std::pair<float,float> dummywp7ff;
  std::pair<int,double> p_i_d;
  std::pair<int,int> dummywp4;
  std::pair<int,std::pair<double,double> > newDummy26;
  std::pair<int,std::pair<unsigned int,unsigned int> > dummywp16;
  std::pair<int,std::pair<unsigned long,unsigned long> > dummywp17;
  std::pair<int,unsigned int> newDummy27;
  std::pair<short,short> dummyss;
  std::pair<short,std::vector<short> > dummysvs;
  std::pair<short,unsigned int> newDummy28;
  std::pair<std::basic_string<char>,bool> dummywp102;
  std::pair<std::basic_string<char>,double> dummywp10;
  std::pair<std::basic_string<char>,float> dummywp101;
  std::pair<std::basic_string<char>,int> dummywp9;
  std::pair<std::basic_string<char>,std::basic_string<char> > dummystst;
  std::pair<std::basic_string<char>,std::map<std::basic_string<char>,std::basic_string<char> > > dummysmss;
  std::pair<std::basic_string<char>,std::pair<unsigned int,unsigned int> > newDummy29;
  std::pair<std::basic_string<char>,std::vector<std::basic_string<char> > > dummywp12;
  std::pair<std::basic_string<char>,std::vector<std::pair<std::basic_string<char>,double> > > dummywp11;
  std::pair<std::basic_string<char>,unsigned int> dummywp20;
  std::pair<std::pair<int,int>,int> newDummy30;
  std::pair<std::pair<short,short>,std::pair<short,std::vector<short> > > dummypsspsvs;
  std::pair<std::vector<std::pair<double,std::vector<double> > >,bool> dummypvpvb;
  std::pair<unsigned int,bool> dummywp5;
  std::pair<unsigned int,double> dummywp6d;
  std::pair<unsigned int,float> dummywp6;
  std::pair<unsigned int,int> dummywp2_1;
  std::pair<unsigned int,short> dummywp18;
  std::pair<unsigned int,std::basic_string<char> > newDummy31;
  std::pair<unsigned int,std::pair<unsigned int,unsigned int> > newDummy32;
  std::pair<unsigned int,std::vector<std::pair<unsigned int,bool> > > newDummy32a;
  std::pair<unsigned int,std::vector<std::pair<unsigned int,double> > > dummywp19;
  std::pair<unsigned int,std::vector<unsigned int> > dummywp13;
  std::pair<unsigned int,unsigned int> dummywp2;
  std::pair<unsigned int,unsigned long> dummywp2_2;
  std::pair<unsigned long long,std::basic_string<char> > dummywp8;
  std::pair<unsigned long,std::vector<unsigned long> > dummywp14;
  std::pair<unsigned long,unsigned long> dummywp1;
  std::pair<unsigned short,float> newDummy33;
  std::pair<unsigned short,std::vector<unsigned short> > dummywp15;
  std::pair<unsigned short,unsigned short> dummywp3;
  std::set<int> dummy19;
  std::set<std::basic_string<char> > dummy20;
  std::vector<bool> dummy13;
  std::vector<char*> dummy6p;
  std::vector<char> dummy6;
  std::vector<char>::iterator itc;
  std::vector<double> dummy10;
  std::vector<double>::iterator itd;
  std::vector<float> dummy12;
  std::vector<float>::iterator itf;
  std::vector<int> dummy4;
  std::vector<int>::iterator iti;
  std::vector<long double> dummy11;
  std::vector<long double>::iterator itld;
  std::vector<long long> dummy15;
  std::vector<long long>::iterator itll;
  std::vector<long> dummy3;
  std::vector<long>::iterator itl;
  std::vector<short> dummy8;
  std::vector<short>::iterator its;
  std::vector<std::map<short,short> > dummy16_5;
  std::vector<std::pair<double,double> > dummy16_3;
  std::vector<std::pair<double,std::vector<double> > > dummyvpdvd;
  std::vector<std::pair<float,float> > dummy16_4;
  std::vector<std::pair<int,double> > v_p_i_d;
  std::vector<std::pair<int,int> > dummy16_2;
  std::vector<std::pair<std::basic_string<char>,bool> > v_p_s_b;
  std::vector<std::pair<std::basic_string<char>,double> > dummy16;
  std::vector<std::pair<std::basic_string<char>,float> > v_p_s_f;
  std::vector<std::pair<std::basic_string<char>,int> > v_p_s_i32;
  std::vector<std::pair<std::vector<std::pair<double,std::vector<double> > >,bool> > dummypvpdvdb;
  std::vector<std::pair<unsigned int,bool> > dummy16_0;
  std::vector<std::pair<unsigned int,double> > dummy16_1;
  std::vector<std::pair<unsigned int,float> > dummy16_1f;
  std::vector<std::pair<unsigned int,int> > dummyvpui;
  std::vector<std::pair<unsigned int,unsigned int> > dummyvpuu;
  std::vector<std::pair<unsigned long long,std::basic_string<char> > > v_ull_s;
  std::vector<std::string> dummy5;
  std::vector<std::string>::iterator itstring;
  std::vector<std::vector<double> > v_v_d;
  std::vector<std::vector<float> > v_v_f;
  std::vector<std::vector<int> > v_v_i;
  std::vector<std::vector<short> > v_v_s;
  std::vector<std::vector<std::pair<int,double> > > v_v_p_i_d;
  std::vector<std::vector<std::vector<int> > > dummy16_6;
  std::vector<std::vector<unsigned int> > dummy2v;
  std::vector<std::vector<unsigned short> > dummy9v;
  std::vector<unsigned char*> dummy7p;
  std::vector<unsigned char> dummy7;
  std::vector<unsigned int> dummy2;
  std::vector<unsigned int>::iterator itui;
  std::vector<unsigned long long> dummy14;
  std::vector<unsigned long long>::iterator itull;
  std::vector<unsigned long> dummy1;
  std::vector<unsigned long>::iterator itul;
  std::vector<unsigned short> dummy9;
  std::vector<unsigned short>::iterator itus;
  std::vector<void *>::iterator itvp;
  std::vector<const void *> dummyVCPtr;
  };
}
