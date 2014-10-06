#include "gtest/gtest.h"
#include "func.h"
namespace
{

    // Тестовый класс для тестирования класса Foo.

    class ReplacerTest : public ::testing::Test {
    protected:
// Можете удалить любую или все из функций ниже, если они пустые.
        ReplacerTest() {
// Здесь можно подготовить тестовые данные для каждого теста.
        }
        virtual ~ReplacerTest() {
// Здесь производится чистка мусора. Данная функция не должна
// генерировать исключений.
        }
// Если конструктор или деструктор не подходят вам для настройки
// тестовых данных и чистки мусора, то можете использовать следующие
// методы:
        virtual void SetUp() {
// Данная функция вызывается сразу после конструктора (до теста).
        }
        virtual void TearDown() {
// Данная функция вызывается сразу после теста (до дестrруктора).
        }
// Объекты, объявленные тут, могут быть использованы во всем тестовом
// классе Foo.
    };
}

TEST_F(ReplacerTest, TestReplaceBinNumber)
{
    std::string in = "13";
    std::string out = "1101";
    EXPECT_STREQ(out.c_str(), decimalToBinary(in).c_str());
}
TEST_F(ReplacerTest, TestNumbersToBinaryWithEnd)
{
    std::string in = "My favourite number is13and nevermind";
    std::string out = "My favourite number is1101and nevermind";
    numbersToBinary(in);
    EXPECT_STREQ(out.c_str(), in.c_str());
}
TEST_F(ReplacerTest, TestNumbersToBinaryNumberAtEnd)
{
    std::string in = "My favourite number is13";
    std::string out = "My favourite number is1101";
    numbersToBinary(in);
    EXPECT_STREQ(out.c_str(), in.c_str());
}