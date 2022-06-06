#ifndef LINE_PROCESSOR_H
#define LINE_PROCESSOR_H

#include <string>
#include <iostream>

class LineProcessor
{
public:
  LineProcessor();

  virtual bool linhaValida(const std::string &str) const = 0;
  virtual void processaLinha(const std::string &str) = 0;

  void processaEntrada();

  unsigned numeroDeLinhasValidas() const;
  unsigned numeroDeLinhasLidas() const;

private:
  std::istream &input_stream;
  unsigned _numLinhasValidas, num_linhas_lidas;
};

class LinePrinter : public LineProcessor
{
public:
  bool linhaValida(const std::string &str) const override;
  void processaLinha(const std::string &str) override;
};

class ContadorPopRural : public LineProcessor
{
public:
  bool linhaValida(const std::string &str) const override;
  void processaLinha(const std::string &str) override;
};

class ContadorNumNaturais : public LineProcessor
{
public:
  bool linhaValida(const std::string &str) const override;
  void processaLinha(const std::string &str) override;
};

class LeitorDeFutebol : public LineProcessor
{
public:
  bool linhaValida(const std::string &str) const override;
  void processaLinha(const std::string &str) override;
};

class ContadorDePalavras : public LineProcessor
{
public:
  bool linhaValida(const std::string &str) const override;
  void processaLinha(const std::string &str) override;

private:
  unsigned contaPalavras(const std::string &str);
};

class InversorDeFrases : public LineProcessor
{
public:
  bool linhaValida(const std::string &str) const override;
  void processaLinha(const std::string &str) override;
};

class EscritorDeDatas : public LineProcessor
{
public:
  bool linhaValida(const std::string &str) const override;
  void processaLinha(const std::string &str) override;
};

#endif